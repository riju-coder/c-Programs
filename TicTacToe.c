#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char pos[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

void box()
{
    printf("\n");
    printf("\t %c | %c | %c \t 1 | 2 | 3 \n",pos[0][0],pos[0][1],pos[0][2]);
    printf("\t===+===+===\t===+===+===\n");
    printf("\t %c | %c | %c \t 4 | 5 | 6 \n",pos[1][0],pos[1][1],pos[1][2]);
    printf("\t===+===+===\t ===+===+===\n");
    printf("\t %c | %c | %c \t 7 | 8 | 9 \n",pos[2][0],pos[2][1],pos[2][2]);
    printf("\n");
}

void print()
{
    printf("The place is marked\nLoad a place which is empty.\n"); 
}

void print1()
{
    printf("\t🎉🎉🎉 PLAYER 1 WIN. 🎉🎉🎉\n\n");
}

void print2()
{
    printf("\t🎉🎉🎉 PLAYER 2 WIN. 🎉🎉🎉\n\n");
}

int main()

{
    printf("\n\tTIC-TAC-TOE\n\t===========\n");
    int pl1,pl2;
    char yn;
h:
 {   printf("\nShowing box template\n\n");
    printf(" 1 | 2 | 3 \n");
    printf("===+===+===\n");
    printf(" 4 | 5 | 6 \n");
    printf("===+===+===\n");
    printf(" 7 | 8 | 9 \n");
    printf("\n");
    printf("PLAYER 1 = 'X'\nPLAYER 2 = 'O' \n\n");
 }
    for (;;)
    {
    printf("PLAYER 1 make your choise.\n->");
k:    
    scanf("%d",&pl1);
    if (pl1 > 0 && pl1 < 10)
    {
        goto y;
    }
    else
    {
        printf("Enter a choise within 1 to 9.\n->");
        goto k;
    }
    
 y:   
    if (pl1 == 1)
    {
        
        if (pos[0][0] == ' ') { 
            pos[0][0] = 'X';}
        else
        {
            print();
            goto k;
        }
    }
    else if (pl1 == 2)
    {
        if (pos[0][1] == ' ') 
        {
            pos[0][1] = 'X'; 
        }
        else
        { 
            print(); 
            goto k; 
        }
    }
    if (pl1 == 3)
    {   
        if (pos[0][2] == ' ')
        {
            pos[0][2] = 'X';
        }
        else
        {
            print();
            goto k;
        }
    }
    if (pl1 == 4)
    {
        if (pos[1][0] == ' ')
        {
            pos[1][0] = 'X';
        }
        else
        {
            print();
            goto k;
        }   
    }
    if (pl1 == 5)
    {
        if (pos[1][1] == ' ')
        {
            pos[1][1] = 'X';
        }
        else
        {
            print();
            goto k;
        }
    }
    
    if (pl1 == 6)
    {
        if (pos[1][2] == ' ')
        {
            pos[1][2] = 'X';
        }
        else
        {
            print();
            goto k;
        }   
    }
    if (pl1 == 7)
    {
        if (pos[2][0] == ' ')
        {
            pos[2][0] = 'X';
        }
        else
        {
            print();
            goto k;
        }
    }
    if (pl1 == 8)
    {
        if (pos[2][1] == ' ')
        {
            pos[2][1] = 'X';
        }
        else
        {
            print();
            goto k;
        }
    }
    if (pl1 == 9)
    {
        if (pos[2][2] == ' ')
        {
            pos[2][2] = 'X';
        }
        else
        {
            print();
            goto k;
        }
    }
    box();
    if (pos[0][0] == pos[0][1] && pos[0][1] == pos[0][2] && pos[0][2] == 'X')
    {
        print1();
        goto q;
    }
    if (pos[1][0] == pos[1][1] && pos[1][1] == pos[1][2])
    {
        if( pos[1][2] == 'X' )
        {
            print1();
            goto q;
        }
    }
    if (pos[2][0] == pos[2][1] && pos[2][1] == pos[2][2])
    {
        if( pos[2][2] == 'X' )
        {
            print1();
            goto q;
        }
    }
    if (pos[0][0] == pos[1][0] && pos[1][0] == pos[2][0] && pos[2][0] == 'X')
    {
        print1();
        goto q;
    }  
    if (pos[0][1] == pos[1][1] && pos[1][1] == pos[2][1])
    {  
        if (pos[2][1] == 'X')
        {
                                                                                                               
            print1();                                                  
            goto q;
        }                                                     
    }                         
    if (pos[0][2] == pos[1][2] && pos[1][2] == pos[2][2])
    {  
        if (pos[2][2] == 'X')
        {
            /* code */                                                                                                   
            print1();                                                  
            goto q;
        }                                                     
    }                         
    if (pos[0][0] == pos[1][1] && pos[1][1] == pos[2][2])
    {
        if (pos[2][2] == 'X')
        {
            print1();
            goto q;
        }
    }
    if (pos[0][2] == pos[1][1] && pos[1][1] == pos[2][0])
    {
        if (pos[2][0] == 'X')
        {
            print1();
            goto q;
        }
    }
    if (pos[0][0] != ' ' )
    {
        if (pos[0][1] != ' ')
        {
            if (pos[0][2] != ' ')
            {
                if (pos[1][0] != ' ' && pos[1][1] != ' ' && pos[1][2] != ' ')
                {
                    if (pos[2][0] != ' ' && pos[2][1] != ' ' && pos[2][2] != ' ')
                    {
                        printf("\n😶 match draw 😶.\n");
                        goto q;
                    }
                }
            }
        }
    }
    printf("PLAYER 2 make your choies\n->");
u:
    scanf("%d",&pl2);
    if (pl2 < 10 && pl2 > 0)
    {
        goto f;
    }
    else
    {
        printf("Enter a choise within 1 to 9.\n->q");
        goto u;
    }
    
f:        
    if (pl2 == 1)
    {
        if (pos[0][0] == ' ')
        {
            pos[0][0] = 'O';
        }
        else
        {
            print();
            goto u;
        }
    }
    else if (pl2 == 2)
    {
        if (pos[0][1] == ' ')
        {
            pos[0][1] = 'O';
        }
        else
        {
            print();
            goto u;
        }
    }
    if (pl2 == 3)
    {   
        if (pos[0][2] == ' ')
        {
            pos[0][2] = 'O';
        }
        else
        {
            print();
            goto u;
        }
    }
    if (pl2 == 4)
    {
        if (pos[1][0] == ' ')
        {
            pos[1][0] = 'O';
        }
        else
        {
            print();
            goto u;
        }
    }
    if (pl2 == 5)
    {
        if (pos[1][1] == ' ')
        {
            pos[1][1] = 'O';
        }
        else
        {
            print();
            goto u;
        }
    }
    if (pl2 == 6)
    {
        if (pos[1][2] == ' ')
        {
            pos[1][2] = 'O';
        }
        else
        {
            print();
            goto u;
        }   
    }
    if (pl2 == 7)
    {
        if (pos[2][0] == ' ')
        {
            pos[2][0] = 'O';
        }
        else
        {
            print();
            goto u;
        }   
    }
    if (pl2 == 8)
    {
        if (pos[2][1] == ' ')
        {
            pos[2][1] = 'O';
        }
        else
        {
            print();
            goto u;
        }   
    }
    if (pl2 == 9)
    {
        if (pos[2][2] == ' ')
        {
            pos[2][2] = 'O';
        }
        else
        {
            print();
            goto u;
        }   
    }
    box();

    if (pos[0][0] == pos[0][1] && pos[0][1] == pos[0][2] && pos[0][2] == 'O')
    {
        print2();
        goto q;
    }
    if (pos[1][0] == pos[1][1] && pos[1][1] == pos[1][2])
    {
        if( pos[1][2] == 'O' )
        {
            print2();
            goto q;
        }
    }
    if (pos[2][0] == pos[2][1] && pos[2][1] == pos[2][2])
    {
        if( pos[2][2] == 'O' )
        {
            print2();
            goto q;
        }
    }   
    if (pos[0][0] == pos[1][0] && pos[1][0] == pos[2][0] && pos[2][0] == 'O')
    {
        print2();
        goto q;
    }   
    if (pos[0][1] == pos[1][1] && pos[1][1] == pos[2][1])
    {  
        if (pos[2][1] == 'O')
        {
                                                                                                               
            print2();                                                  
            goto q;
        }                                                     
    }                             
    if (pos[0][2] == pos[1][2] && pos[1][2] == pos[2][2])
    {  
        if (pos[2][2] == 'O')
        {
            /* code */                                                                                                   
            print2();                                                  
            goto q;
        }                                                     
    }                        
    if (pos[0][0] == pos[1][1] && pos[1][1] == pos[2][2])
    {
        if (pos[2][2] == 'O')
        {
            print2();
            goto q;
        }
        
    }
    if (pos[0][2] == pos[1][1] && pos[1][1] == pos[2][0])
    {
        if (pos[2][0] == 'O')
        {
            print2();
            goto q;
        }
        
    }
    if (pos[0][0] != ' ' && pos[0][1] != ' ' && pos[0][2] != ' ')
    {
        if (pos[1][0] != ' ' && pos[1][1] != ' ' && pos[1][2] != ' ')
        {
            if (pos[2][0] != ' ' && pos[2][1] != ' ' && pos[2][2] != ' ')
            {
                printf("\n😶 match draw 😶.\n");
                goto q;
            }
        }
    }
    
    }
   
q:
    printf("Wanna paly again ? \nEnter 1 for yes \nEnter a ny key for exit.\n>>");
    scanf("%c",&yn);
    if (yn == 1)
    {
        goto h;
    }
    else
    {
        goto q;
    }
    return 0;
}