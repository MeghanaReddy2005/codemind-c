#include<stdio.h>
int capacity(int,int,int);
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int cd=capacity(s,t,b);
    printf("%dKB",cd);
    }
    int capacity(int s,int t,int b)
    {
        int tc=s*t*b;
    return tc;
}