#include<stdio.h>
int l(int,int);
int m(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=l(a,b);
    printf("%d
",x);
    int y=m(a,b);
    printf("%d",y);
}
int l(int a,int b)
{
    int l;
    l=b;
    return l;
}
int m(int a,int b)
{
    int m;
    m=a;
    return m;
}