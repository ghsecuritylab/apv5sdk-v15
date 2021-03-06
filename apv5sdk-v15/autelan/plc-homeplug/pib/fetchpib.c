/*====================================================================*
 *   
 *   Copyright (c) 2011 by Qualcomm Atheros.
 *   
 *   Permission to use, copy, modify, and/or distribute this software 
 *   for any purpose with or without fee is hereby granted, provided 
 *   that the above copyright notice and this permission notice appear 
 *   in all copies.
 *   
 *   THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL 
 *   WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED 
 *   WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL  
 *   THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR 
 *   CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM 
 *   LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, 
 *   NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN 
 *   CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *   
 *--------------------------------------------------------------------*/

#define _GETOPT_H

/*====================================================================*
 *   system header files;
 *--------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/*====================================================================*
 *   custom header files;
 *--------------------------------------------------------------------*/

#include "../tools/getoptv.h"
#include "../tools/flags.h"
#include "../tools/error.h"
#include "../tools/files.h"
#include "../nvm/nvm.h"
#include "../pib/pib.h"

/*====================================================================*
 *   custom source files;
 *--------------------------------------------------------------------*/

#ifndef MAKEFILE
#include "../tools/getoptv.c"
#include "../tools/putoptv.c"
#include "../tools/version.c"
#include "../tools/checksum32.c"
#include "../tools/error.c"
#endif

/*====================================================================*
 *
 *   void function (char const * filename, flag_t flags);
 *
 *   open a panther/lynx parameter file, follow the chain and write
 *   the parameter block image to stdout;
 *
 *.  Qualcomm Atheros HomePlug AV Powerline Toolkit
 *:  Published 2009-2011 by Qualcomm Atheros. ALL RIGHTS RESERVED
 *;  For demonstration and evaluation only. Not for production use
 *   
 *   Contributor(s):
 *	Charles Maier <cmaier@qualcomm.com>
 *
 *--------------------------------------------------------------------*/

static void function (char const * filename) 

{
	struct nvm_header2 * nvm_header;
	void * memory;
	signed module = 0;
	signed extent = 0;
	uint32_t origin = ~0;
	signed offset = 0;
	signed fd;
	if ((fd = open (filename, O_BINARY|O_RDONLY)) == -1) 
	{
		error (1, errno, FILE_CANTOPEN, filename);
	}
	if ((extent = lseek (fd, 0, SEEK_END)) == -1) 
	{
		error (1, errno, FILE_CANTSIZE, filename);
	}
	if (!(memory = malloc (extent))) 
	{
		error (1, errno, FILE_CANTLOAD, filename);
	}
	if (lseek (fd, 0, SEEK_SET)) 
	{
		error (1, errno, FILE_CANTHOME, filename);
	}
	if (read (fd, memory, extent) != extent) 
	{
		error (1, errno, FILE_CANTREAD, filename);
	}
	close (fd);
	do 
	{
		nvm_header = (struct nvm_header2 *)((char *)(memory) + offset);
		if (LE16TOH (nvm_header->MajorVersion) != 1) 
		{
			error (1, 0, NVM_HDR_VERSION, filename, module);
		}
		if (LE16TOH (nvm_header->MinorVersion) != 1) 
		{
			error (1, 0, NVM_HDR_VERSION, filename, module);
		}
		if (checksum32 (nvm_header, sizeof (* nvm_header), 0)) 
		{
			error (1, 0, NVM_HDR_CHECKSUM, filename, module);
		}
		if (LE32TOH (nvm_header->PrevHeader) != origin) 
		{
			error (1, 0, NVM_HDR_LINK, filename, module);
		}
		origin = offset;
		offset += sizeof (* nvm_header);
		extent -= sizeof (* nvm_header);
		if (LE32TOH (nvm_header->ImageType) == NVM_IMAGE_PIB) 
		{
			write (STDOUT_FILENO, (char *)(memory) + offset, LE32TOH (nvm_header->ImageLength));
			break;
		}
		if (checksum32 ((char *)(memory) + offset, LE32TOH (nvm_header->ImageLength), nvm_header->ImageChecksum)) 
		{
			error (1, 0, NVM_IMG_CHECKSUM, filename, module);
		}
		offset += LE32TOH (nvm_header->ImageLength);
		extent -= LE32TOH (nvm_header->ImageLength);
		module++;
	}
	while (~nvm_header->NextHeader);
	free (memory);
	return;
}


/*====================================================================*
 *   
 *   int main (int argc, char const * argv []);
 *
 *.  Qualcomm Atheros HomePlug AV Powerline Toolkit
 *:  Published 2009-2011 by Qualcomm Atheros. ALL RIGHTS RESERVED
 *;  For demonstration and evaluation only. Not for production use
 *   
 *   Contributor(s):
 *	Charles Maier <cmaier@qualcomm.com>
 *
 *--------------------------------------------------------------------*/

int main (int argc, char const * argv []) 

{
	static char const * optv [] = 
	{
		"mqv",
		"file > stdout",
		"Qualcomm Atheros Parameter File Extractor",
		"q\tquiet",
		"v\tverbose",
		(char const *) (0)
	};
	flag_t flags = (flag_t)(0);
	signed c;
	optind = 1;
	while ((c = getoptv (argc, argv, optv)) != -1) 
	{
		switch (c) 
		{
		case 'm':
			_setbits (flags, PIB_MANIFEST);
			break;
		case 'q':
			_setbits (flags, PIB_SILENCE);
			break;
		case 'v':
			_setbits (flags, PIB_VERBOSE);
			break;
		default:
			break;
		}
	}
	argc -= optind;
	argv += optind;
	if (isatty (STDOUT_FILENO)) 
	{
		error (1, ECANCELED, "stdout cannot be the console");
	}
	if ((argc) && (* argv)) 
	{
		function (* argv);
	}
	return (0);
}

