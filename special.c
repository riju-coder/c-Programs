#include<stdio.h>

int main()
{
    int row = 0, col = 0, b, c, d = 1;
    int n, m, a[100][100];
    printf("how many rows do you want:");
    scanf("%d",&n);
    printf("how many column do you want:");
    scanf("%d", &m);
    printf("Enter numbers:\n\n");
    
    for(b=0; b<m; b++)
    {
        for(c=0; c<n; c++)
        {
            printf("eliment no.%d :",d);
            scanf("%d", &a[c][b]);
            d++;
        }
    }
    
    printf("\nThe matrix is :-\n");
    
    for(b=0; b<m; b++)
    {
        for(c=0; c<n; c++)
        {
            printf("%d ",a[c][b]);
        }
        printf("\n");
    }
    
    d = 0;
    for(b=0; b<m; b++)
    {
        for(c=0; c<n; c++)
        {
            row = row + a[c][b];
        }
        d++;
        printf("sum of row %d is %d \n",d,row);
        row=0;
    }
    
    d = 0;
    for(b=0; b<m; b++)
    {
        for(c=0; c<n; c++)
        {
            col = col + a[b][c];
        }
        d++;
        printf("\nsum of column %d is %d",d,col);
        col=0;
    }

    return 0;
}
    