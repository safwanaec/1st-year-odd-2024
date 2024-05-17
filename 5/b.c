#include <stdio.h> //no header file was included in the question
main()
{
    int a = 2; // in the question, on this line, there wasn't any semi colon. so, the output would be a syntax error 
    switch (a)
    {
        printf("Message\n");
    default : printf("Default\n");
    case 2:
        printf("Case - 2\n");
    case 3:
        printf("Case - 3\n");
    }
    printf("Exit from switch\n");
}