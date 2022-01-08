#include<stdio.h>

int dayofweek(int d, int m, int y)
{
	int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int numberofdays(int m,int y)
{
    switch (m)
    {
        case 1:
            return (31);
            break;
        case 2:
            if (y%4 == 0 ||y % 400 == 0)
            {
                return (29);
            }
            else
            {
                return (28);
            }
            break;
        case 3:
            return (31);
            break;
        case 5:
            return (31);
            break;
        case 7:
            return (31);
            break;
        case 8:
            return (31);
            break;
        case 10:
            return (31);
            break;
        case 12:
            return (31);
            break;
        default :
            return (30);
            break;
    }
}
void calander(int year)
{
    int z;
    for (int month = 1; month <= 12; month++)
    {   
        int n = numberofdays(month,year);
        char *m;
        if (month == 1) m = "January";
        if (month == 2) m = "February";
        if (month == 3) m = "March";
        if (month == 4) m = "April";
        if (month == 5) m = "May";
        if (month == 6) m = "June";
        if (month == 7) m = "July";
        if (month == 8) m = "August";
        if (month == 9) m = "September";
        if (month == 10) m = "October";
        if (month == 11) m = "November";
        if (month == 12) m = "December";
        printf("\n%s :-\n\n    sun   mon   tue   wed   thi   fri   sat   \n",m);
        z = dayofweek(1,month,year);
        for (int i = 0; i < z; i++)
        {
            printf("      ");
        }
        for (int day = 1; day <= n; day++)
        {
        
            printf("%6d",day);
            switch (z)
            {
            case 6:
                if(day == 1 || day == 8 || day == 15 || day == 22 || day == 29)
                printf("\n");
                break;
            case 3:
                if(day == 4 || day == 11 || day == 18 || day == 25 )
                printf("\n");
                break;
            case 2:
                if(day == 5 || day == 12 || day == 19 || day == 26 )
                printf("\n");
                break;
            case 4:
                if(day == 3 || day == 10 || day == 17 || day == 24 || day == 31)
                printf("\n");
                break;
            case 0:
                if(day == 7 || day == 14 || day == 21 || day == 28 )
                printf("\n");
                break;
            case 5:
                if(day == 2 || day == 9 || day == 16 || day == 23 || day == 30)
                printf("\n");
                break;
            case 1:
                if(day == 6 || day == 13 || day == 20 || day == 27 )
                printf("\n");
                break;
            }
        }
        printf("\n\n");
    }
}
int main()
{
	int year ;
    printf("\n\nEnter a year that you need a calander : ");
    scanf("%d",&year);
	calander(year);
	return 0;
}
