#include<stdio.h>
int main()
{
    int n,i,sum=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}