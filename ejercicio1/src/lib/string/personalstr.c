/*
 * personalstr.c
 *
 *  Created on: 05/09/2014
 *      Author: utnso
 */

#include <stdlib.h>
#include <string.h>
#include "../sys/feresys.h"

char* string_concat(const char* a, const char* b) {
	char* str = (char*) malloc(mallocSize(sizeof(char), strlen(a), strlen(b), -1));
	return strcat(strcpy(str, a), b);
}

void string_concat_dinamyc(const char* a, const char* b, char** result) {
	strcpy(*result, a);
	strcat(*result, b);
}

void mail_split(const char* mail, char** user, char** dominio) {
	char* iterator = (char*) malloc(mallocSize(sizeof(char), strlen(mail) -1));
	strcpy(iterator, mail);
	char* userIt = *user;
	char* dominioIt = *dominio;
	int mode = 0;
	while (*iterator) {
		if (mode == 1) {
			*dominioIt = *iterator;
			dominioIt++;
		} else if('@' == *iterator) {
			mode = 1;
		} else {
			*userIt = *iterator;
			userIt++;
		}
		iterator++;
	}
}
