
#include <stdio.h>

void printstuff(void);
int calcans(int);
void myfn(int *, int *);

int main()
{
    int i = 0,
    answer = 9,
    *intptr = &i;
    printf("answer = %d\n",answer); //answer = 9, variable answer is assigned with value 9.
    printstuff(); // answer = 33, local variable answer is assigned with value 33 in function printstuff that does not require input arguement
    printf("answer = %d\n",answer); //answer = 9, local variable in printstuff does not affect variables in main
    printf("i = %d\n",i); //I = 0, variable I assigned with value 0
    myfn(&i, intptr); 
    printf("i = %d\n",i); //I = 5, myfn allows input of variable location and then assigned value 5 to location &I, it then assigned value 
    answer = calcans(i);
    printf("i = %d\n",i);
    printf("answer = %d\n",answer);
    return 0;
}

void printstuff(void)
{
    int answer = 33;
    printf("answer = %d\n",answer);
}

int calcans(int num)
{
    num = num * 3;
    return num + 2;
}

void myfn(int *i, int *iptr)
{
    *i = 5;
    *iptr = *i - 1;
}
