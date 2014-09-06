/*
 ============================================================================
 Name        : holamundo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/string/personalstr.h"
#include "lib/sys/feresys.h"

int main(void) {
	char* a = "hola ";
	char* b = "mundo";
	printf("%s\n", string_concat(a, b));
	getchar();

	unsigned int lenA = strlen(a);
	unsigned int lenB = strlen(b);
	unsigned int size = sizeof(char) * (lenA + lenB);
	char* result = (char*) malloc(size);

	string_concat_dinamyc(a, b, &result);

	printf("%s\n", result);
	getchar();

	char* user = (char*) malloc(mallocSize(sizeof(char), 8, -1));
	char* dominio = (char*) malloc(mallocSize(sizeof(char), 40, -1));

	char* mail = "lfishkel@truelogicsoftware.com";
	mail_split(mail, &user, &dominio);

	printf("el user es %s y el dominio es %s", user, dominio);

	return EXIT_SUCCESS;
}
