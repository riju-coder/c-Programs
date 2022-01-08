/* include libraries */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* main function */

int main()
{
    int c, p, t;
    char y[4];
    printf("\n\n\n                                  MATCH STICK GAME\n                                  ================\n");
    printf("\nGame rule :\n\n            ");
    printf("There are total 21 sticks in a box. The game is between you and\n            computer. You can pick 1,2,3 or 4 stick at a time. Also computer \n            pick 1,2,3 or 4 stick at a time. Who picks the last one lose\n            the game.\n");
g:
    c = 0;
    p =0;
    t = 21;
k:
    if(t == 1)
    {
        printf("\nTotal sticks left %d\nSo you loose the game.\n\n", t);
        printf("Do you want to play this game again\n>>>");
        scanf("%s",y);
        if(strcmp(y,"yes") == 0 || strcmp(y,"Yes") == 0 || strcmp(y,"YES") == 0 )
        {
            printf("\nOk starting \n");
            goto g;
        }
        else
        {
            printf("Ok you are quite looser;\n\nsorry\n");
            return 0;
        }
    }
    printf("\nTotal sticks left %d\n", t);
    printf("You can pick 1,2,3 or 4 stick\n");
    printf("Enter choise\n>>>");
    scanf("%d", &p);
    if(p >=1 && p <= 4)
    {

        if(p == 1 || p == 6 || p == 11 || p == 16)
        {
            c = p + 4;
            t = t - 5;
            printf("Computer picks 4\n");
            goto k;
        }

        if(p == 2 || p == 7 || p == 12 || p == 17)
        {
            c = p + 3;
            t = t - 5;
            printf("Computer picks 3\n");
            goto k;
        }

        if(p == 3 || p == 8 || p == 13 || p == 18)
        {
            c = p + 2;
            t = t - 5;
            printf("Computer picks 2\n");
            goto k;
        }

        if(p ==  4|| p == 9 || p == 14 || p == 19)
        {
            c = p + 1;
            t = t - 5;
            printf("Computer picks 1\n");
            goto k;
        }

    }
    else
    {
        printf("I told you to choose 1 - 4 sticks\n");
        goto k;
    }
    return 0;
}