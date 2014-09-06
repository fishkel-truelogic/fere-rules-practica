/*
 * feresys.c
 *
 *  Created on: 05/09/2014
 *      Author: root
 */
#include <stdarg.h>

unsigned int mallocSize(unsigned int typeBytes, ...) {
	unsigned int size = 0;
	int i;
	va_list lengths;

	va_start(lengths, typeBytes);
	for (i = 0; i < 100; i++) {
		int arg = va_arg(lengths, int);
		if (arg == -1)
			break;
		size += arg;
	}
	va_end(lengths);

	size *= typeBytes;
	return size;
}

