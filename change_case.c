#include <stdio.h>
#include <string.h> // useful string operations
#include <ctype.h>  //useful character operations

/*
 * Purely for an example of looping through a string.
 * Use as a guide- you will need to do more in the functions below.
 */
void print_str(char *s) {
  	/* loop over a string using subscript*/
		int i;
    for(i = 0; i < strlen(s); i++) {
        printf("%c",s[i]);
    }
  	printf("\n");
}

/*
 * Useful helper function to build up a string by adding a char
 * to the end. Found on: https://ubuntuforums.org/showthread.php?t=1016188
 */
void append(char* s, char c)
{
    int len = strlen(s);
    s[len] = c;
    s[len+1] = '\0';
}

/*
 * Toggles the case of every alphabetic character in the string,
 * keeping non-alpha charaters intact.
 */
void toggle_case(char *s, char *newstr){
	strcpy(newstr, ""); // initialize

}

/*
 * Lowers the case of every alphabetic character in the string,
 * keeping non-alpha charaters intact.
 */
void lowerCase(char *s, char *newstr){
		strcpy(newstr, ""); // initialize
}

/*
 * Raises the case of every alphabetic character in the string,
 * keeping non-alpha charaters intact.
 */
void upperCase(char *s, char *newstr){
  	strcpy(newstr, ""); // initialize

}
