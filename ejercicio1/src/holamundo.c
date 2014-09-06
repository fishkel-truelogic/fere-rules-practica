/*
 ============================================================================
 Name        : holamundo.c
 Author      : lfishkel
 Version     : 1.0
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

	char* concat = (char*) malloc(mallocSize(sizeof(char), strlen(a), strlen(b), -1));
	string_concat_dinamyc(a, b, &concat);

	printf("%s\n", concat);
	getchar();

	char* user = (char*) malloc(mallocSize(sizeof(char), 8, -1));
	char* dominio = (char*) malloc(mallocSize(sizeof(char), 40, -1));
	char* mail = "lfishkel@truelogicsoftware.com";

	mail_split(mail, &user, &dominio);

	printf("el user es %s y el dominio es %s", user, dominio);
	getchar();

	return EXIT_SUCCESS;
}
