#include<stdio.h>
#include<math.h>
int main()
{
    int s;
    scanf("%d",&s);
    float sa,vol;
    sa=6*s*s;
    vol=pow(s,3);
    printf("Surface area = %.f and Volume = %.f",sa,vol);
}