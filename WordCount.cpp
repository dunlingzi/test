#include<stdio.h>
#define OUT 0
#define IN 1

main()
{
    int c,state;

    state = OUT;

    while((c = getchar()) != '\n')
    {
        if(c == ' ' || c == '\t')
        {
            if(state == OUT)
            {
                putchar('\n');
                state = IN;
            }
            
        }
        else
        {
            putchar(c);
            state = OUT;
        }
    }
}