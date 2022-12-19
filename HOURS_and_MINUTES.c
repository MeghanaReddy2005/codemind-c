#include<stdio.h>
int hour(int mins)
{
    int h;
    h=mins/60;
    return h;
}
int min(int mins)
{
    int h,m;
    h=mins/60;
    m=(mins-(h*60));
    return h,m;
}
int main()
{
    int ms,m,h;
    scanf("%d",&ms);
    int x1,x2;
    x1=hour(ms);
    x2=min(ms);
    printf("%d Hour(s) %d Minute(s)",x1,x2);
}