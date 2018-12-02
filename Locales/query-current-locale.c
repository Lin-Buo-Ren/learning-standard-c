/* For perror(3) */
#include <stdio.h>

/* For setlocale(3) */
#include <locale.h>

char* query_current_locale(int locale_category){
    char* string_current_locale = NULL;

    string_current_locale = setlocale(locale_category, NULL);

	if(string_current_locale == NULL){
		perror("The `setlocale(3)` call failed");
        return NULL;
	}else{
		return string_current_locale;
	}
}
