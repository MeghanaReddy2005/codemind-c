#include<stdio.h>
int main()
{
    int b1,b2,h;
    float ans;
    scanf("%d%d%d",&b1,&b2,&h);
    ans=0.5*(b1+b2)*h;
    printf("%.4f",ans);
}