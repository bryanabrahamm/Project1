//code to find out what day it was on a specific date//

#include<stdio.h>
int main()
{   
    int k, m, d, c, f, i;

    Printf("Enter the Day of the month, month number, first two digits of the year and the last two digits of the year");
    scanf("%d%d%d%d", &k, &m, &c, &d);

    //using Zeller's rule//
    f = k + ((13*m - 1)/5) + d + d/4 + c/4 - 2*c;
    i = f%7;

    if(i==1) printf("Monday");
    else if(i==2) printf("Tuesday");
    else if(i==3) printf("Wednesdsay");
    else if (i==4) printf("Thursday");
    else if (i==5) printf("Friday");
    else if (i==6) printf("Saturday");
    else printf("Sunday");

    return 0;
}
