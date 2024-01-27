#include<stdio.h>
int main()
{
    int m,n,o;
    printf("\n Enter three numbers:");
    scanf("%d %d %d",&m,&n,&o);
    if(m>n&&m>o)
    printf("\n %d is the largest number",m);
    else if(n>o)
    printf("\n %d is the largest number",n);
    else
    printf("\n %d is the largest number",o);
    return 0;
}