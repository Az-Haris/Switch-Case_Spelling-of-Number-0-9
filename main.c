#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num;
    printf("Please Enter a Number between 0 to 9 : ");
    scanf("%d", &num);

    switch(num)
    {
    case 0 :
        printf("This is Zero");
        break;

    case 1 :
        printf ("This is One");
        break;

    case 2 :
        printf ("This is Two");
        break;

    case 3 :
        printf("This is Three");
        break;

    case 4 :
        printf("This is Four");
        break;

    case 5 :
        printf("This is Five");
        break;

    case 6 :
        printf("This is Six");
        break;

    case 7 :
        printf("This is Seven");
        break;

    case 8 :
        printf("This is Eight");
        break;

    case 9 :
        printf("This is Nine");
        break;

    default :
        printf("Please Enter Number from 0 to 9");
    }

    getch();
    return 0;
}
