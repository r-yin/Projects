#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void changeit(char *);

int main()
{
    char letter,
         symbol = '!',
         *cptr;
    
    cptr = &letter;
    *cptr = 'w';
    printf("*cptr is %c\n", *cptr); // *cptr is w, points to letter, assign ‘w’ to location of letter
    printf("letter is %c\n", letter); // letter is ‘w’, *cptr assigns ‘w’ to location of variable letter
    printf("symbol is %c\n\n", symbol); // symbol is !

    cptr = &symbol;
    printf("*cptr is %c\n", *cptr); // *cptr is !, pointer cptr reassigned to symbol
    printf("letter is %c\n", letter);// letter is ‘w’
    printf("symbol is %c\n\n", symbol);// symbol is ‘!’
    
    *cptr = 'x';
    printf("*cptr is %c\n", *cptr); // *cptr ‘x’
    printf("letter is %c\n", letter); // letter is ‘w’
    printf("symbol is %c\n\n", symbol); // symbol is ‘x’
    
    cptr = (char *) malloc(sizeof(char)); 
    *cptr = '8';
    printf("*cptr is %c\n", *cptr); // *cptr is 8
    printf("letter is %c\n", letter); // letter is ‘w’
    printf("symbol is %c\n", symbol); // symbol is ‘x’

    changeit(cptr); //The char is ‘8’
    printf("*cptr is %c\n", *cptr); //*cptr is ‘3’
    free(cptr);
    return 0;
}

void changeit(char *fncptr)
{
    printf("The char is %c\n", *fncptr);
    fncptr  = (char *) malloc(sizeof(char)); // new memory address that fncptr points to
    *fncptr = '3'; // changes memory of this temporary new memory address
}
