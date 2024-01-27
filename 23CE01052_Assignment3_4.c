#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3;
    printf("\n Enter 1st coordinate:");
    scanf("%f %f",&x1,&y1);
    printf("\n Enter 2nd coordinate:");
    scanf("%f %f",&x2,&y2);
    printf("\n Enter 3rd coordinate:");
    scanf("%f %f",&x3,&y3);
    if((y1-y2)/(x1-x2)==(y2-y3)/(x2-x3))
    printf("\n The three points are on a straight line");
    else
    printf("\n The three points are not on a straight line");
    return 0;
}