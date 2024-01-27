#include<stdio.h>
int main()
{
    int m;
    printf("\n Enter the number of days the member is late:");
    scanf("%d",&m);
    if(m<=5)
    printf("\n The fine is 1 rs.");
    else if(m>=6&&m<=10)
    printf("\n The fine is 2 rs.");
    else if(m>10&&m<=30)
    printf("\n The fine is 5 rs.");
    else
    printf("\n Sorry! You're membership is cancelled");
    return 0;
}