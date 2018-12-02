/* For printing message to terminal */
#include <stdio.h>

/* For standard exit status macros */
#include <stdlib.h>

/* For locale functions and locale category macros */
#include <locale.h>

#include "../query-current-locale.h"

int main(int argc, char* argv[]){
	char* string_current_locale = NULL;

	string_current_locale = query_current_locale(LC_ALL);
	if(string_current_locale != NULL){
		printf("The default LC_ALL locale at program start-up is: %s\n", string_current_locale);
	}

	string_current_locale = query_current_locale(LC_COLLATE);
	if(string_current_locale != NULL){
		printf("The default LC_COLLATE locale at program start-up is: %s\n", string_current_locale);
	}

	printf("Inherit LC_COLLATE locale from the environment.\n");
	if(!setlocale(LC_COLLATE, "")){
		perror("setlocale(3) failed");
	}

	string_current_locale = query_current_locale(LC_COLLATE);
	if(string_current_locale != NULL){
		printf("The LC_COLLATE locale after inheriting from the environment is: %s\n", string_current_locale);
	}

	string_current_locale = query_current_locale(LC_ALL);
	if(string_current_locale != NULL){
		printf("The LC_ALL locale after inheriting LC_COLLATE: %s\n", string_current_locale);
	}

	printf("Inherit all locales from environment.\n");
	setlocale(LC_ALL, "");

	string_current_locale = query_current_locale(LC_ALL);
	if(string_current_locale != NULL){
		printf("The LC_ALL locale is: %s\n", string_current_locale);
	}

	string_current_locale = query_current_locale(LC_MONETARY);
	if(string_current_locale != NULL){
		printf("The LC_MONETARY locale is: %s\n", string_current_locale);
	}

	return EXIT_SUCCESS;
}
