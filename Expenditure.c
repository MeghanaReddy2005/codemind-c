#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=(x-(y*30));
    if(z>y)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}