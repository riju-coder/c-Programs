#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int com()
{
    srand(time(NULL));
    return rand()%10+1;
}

int com1()
{
    srand(time(NULL));
    return rand()%100+1;
}

int com2()
{
    srand(time(NULL));
    return rand()%1000+1;
}

int main()
{
    int a = 0,b = 0,c = 0,d = 3; 
    char v [4];
    printf("\n\nNUMBER GUESSING GAME\n\nRULE:-\nIt has three level.\n\nLevel 1: You can go next level by \n        clearing this level.\n");
    l1:
    printf("\n         You have to guess a number between 1 to 10 in attempt of 3");
    a = com();
    for(b = 1; b <= 3; b++)
    {
        printf("\n\nEnter the number\n\n>>");
        scanf("%d",&c);
        if(c == a)
        {
            printf("Congrats you match the number\n\n");
            sleep(1);
            d = 0;
            break;
        }
        else if(c < a)
        {   sleep(1);
            printf("The number is bigger than %d\n",c);
            sleep(1);
            printf("Moves remain %d\n",3-b);
            sleep(1);
            d = 1;
        }
        else if(c > a)
        {
            sleep(1);
            printf("The number is smaller than %d\n",c);
            sleep(1);
            printf("Moves remain %d\n",3-b);
            sleep(1);
            d = 1;
        }
        
        if(b == 3)
        {
        printf("\n\nYou can't find the number. the number is %d\n",a);
        sleep(1);
        d = 1;
        }

    }

        if (d == 0)
        {
            printf("You can go to the next level");
            sleep(1);
            goto l2;
        }

        else
        {
            printf("you have to pass this level.\n");
            sleep(1);
            goto l1;
        }
        

l2:
     a = 0;b = 0;c = 0;d = 3;
    
    printf("\n\nLEVEL 2 :\n         You can go next level by \nclearing this level.\n\nYou have to guess a number between 1 to 100 in attempt of 8");
    a = com1();
    for(b = 1; b <= 8; b++)
    {
        printf("\n\nEnter the number\n\n>>");
        scanf("%d",&c);
        if(c == a)
        {
            printf("Congrats you match the number\n\n");
            sleep(1);
            d = 0;
            break;
        }
        else if(c < a)
        {   
            sleep(1);
            printf("The number is bigger than %d\n",c);
            sleep(1);
            printf("Moves remain %d\n",8-b);
            sleep(1);
            d = 1;
        }
        else if(c > a)
        {
            sleep(1);
            printf("The number is smaller than %d\n",c);
            sleep(1);
            printf("Moves remain %d\n",8-b);
            sleep(1);
            d = 1;
        }
        
        if(b == 8)
        {
        printf("\n\nYou can't find the number. the number is %d\n",a);
        sleep(1);
        d = 1;
        }

    }

        if (d == 0)
        {
            printf("You can go to the next level");
            sleep(1);
            goto l3;
        }

        else
        {
            sleep(1);
            printf("you have to pass this level.\n");
            sleep(1);
            goto l2;
        }
        
l3:
         a = 0;b = 0;c = 0;d = 3;
        
          printf("\n\nLEVEL 3 :\n         \nYou have to guess a number between 1 to 1000 in attempt of 15");
    a = com2();
    for(b = 1; b <= 15; b++)
    {
        printf("\n\nEnter the number\n\n>>");
        scanf("%d",&c);
        if(c == a)
        {
            printf("Congrats you match the number\n\n");
            sleep(1);
            d = 0;
            break;
        }
        else if(c < a)
        {
            sleep(1);
            printf("The number is bigger than %d\n",c);
            sleep(1);
            printf("Moves remain %d\n",15-b);
            sleep(1);
            d = 1;
        }
        else if(c > a)
        {
            sleep(1);
            printf("The number is smaller than %d\n",c);
            sleep(1);
            printf("Moves remain %d\n",15-b);
            sleep(1);
            d = 1;
        }
        
        
        if(b == 18)
        {
        printf("\n\nYou can't find the number. the number is %d\n",a);
        sleep(1);
        d = 1;
        }

    }

        if (d == 0)
        {
           sleep(1);
           printf("You finish the game.\n");
           sleep(1);
           printf("Do you want to play this game again ?\n>>>");
           scanf("%s",v);
           if (strcmp(v,"yes") == 0 || strcmp(v,"Yes") == 0 || strcmp(v,"YES") == 0 || strcmp(v,"yeha") == 0)
           {   
               printf("\nOk starting.\n");
               sleep(1);
               goto l1;
           }

           else
           {
               printf("Ok you quit.");
               return 0;
           }
           
           
        }

        else
        {
            printf("you have to pass this level.\n");
            sleep(1) ;
            goto l3;
        }
        

}