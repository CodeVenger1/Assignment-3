#include<stdio.h>
int main()
{
    float x1,x2,x3;
    printf("\n Enter three lengths:");
    scanf("%f %f %f",&x1,&x2,&x3);
    if(x1+x2>x3&&x1+x3>x2&&x2+x3>x1)
        printf("\n Three sides represent a triangle");
    else
        printf("\n They doesnt form triangle");
    return 0;

}
