/*
 * Header: quiz2.c
 *
 * a.	Purpose (of Program): Read a character and print
 * a character. In addition, print a digit 2 at the end
 * of each line. Use EOF to signal the end of file
 *
 * b.	Assumption: Non-empty input data
 *
 * c.	Input: character
 *
 * d.	Output: extra '2' before '\n'
 *
 * e.	Algorithm (or processing logic): read in a character, check & output extra '2' after '\n'
 *
 * f.	programmer
*/


#include <stdio.h>

int main(void) {
    char c; //an input character


//    while (scanf("%c", &c) > 0) { // check not end of data(file)
    while (scanf("%c", &c) != EOF) { // check not end of data(file)
	//
        // check & output extra '2' before '\n'
		if (c == '\r') {
	    	printf("%s", "2");
			printf("%s", "\n");
		} // if
		else {
			printf("%c", c);
		} // else


    } // while

    return 0;
} // main
