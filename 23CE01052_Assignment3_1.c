#include<stdio.h>
int main()
{
    int m;
    printf("\n Enter a number:");
    scanf("%d",&m);
    if(m==0)
    printf("\n The number is zero");
    else if(m>0)
    printf("\n The number is positive");
    else
    printf("\n The number is negative");
    return 0;
}