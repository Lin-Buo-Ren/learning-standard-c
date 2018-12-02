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
	string_current_locale = query_current_locale(LC_CTYPE);
	if(string_current_locale != NULL){
		printf("The default LC_CTYPE locale at program start-up is: %s\n", string_current_locale);
	}
	string_current_locale = query_current_locale(LC_MONETARY);
	if(string_current_locale != NULL){
		printf("The default LC_MONETARY locale at program start-up is: %s\n", string_current_locale);
	}
	string_current_locale = query_current_locale(LC_NUMERIC);
	if(string_current_locale != NULL){
		printf("The default LC_NUMERIC locale at program start-up is: %s\n", string_current_locale);
	}
	string_current_locale = query_current_locale(LC_TIME);
	if(string_current_locale != NULL){
		printf("The default LC_TIME locale at program start-up is: %s\n", string_current_locale);
	}
	
	return EXIT_SUCCESS;
}
