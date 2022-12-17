#include<stdio.h>
float pf(float b,float hra,float da)
{
    float p;
    p=(0.12*b);
    return p;
}
float gross(float b,float hra,float da)
{
    float p,gs;
    p=0.12*b;
    gs=(p+hra+b+da);
    return gs;
}
int main()
{
    float b,hra,da,xl;
    scanf("%f%f%f",&b,&hra,&da);
    float x1,x2;
    xl=pf(b,hra,da);
    printf("%0.2f
",xl);
    x2=gross(b,hra,da);
    printf("%0.2f",x2);
}