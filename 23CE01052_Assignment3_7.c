#include<stdio.h>
int main()
{
    float t,n,k,m,w;
    printf("\n Number of classes conducted in total:");
    scanf("%f",&k);
    printf("\n Number of classes you attended:");
    scanf("%f",&n);
    printf("\n Your marks in PDS exam:");
    scanf("%f",&m);
    w=n/k;
    t=m*w;
    if(m>=0&&m<=100)
    {
    printf("\n Your final score is=%f",t);
        if(t>=90)
        printf("\n Grade=EX ");
        else if(t>=80&&t<89)
        printf("\n Grade=A");
        else if(t>=70&&t<79)
        printf("\n Grade=B");
        else if(t>=60&&t<69)
        printf("\n Grade=C");
        else if(t>=50&&t<59)
        printf("\n Grade=D");
        else if(t>=40&&t<49)
        printf("\n Grade=P");
        else if(t<40)
        printf("\n Grade=F");  
         }
    else
    printf("\n Wrong Entry");
    return 0;
}