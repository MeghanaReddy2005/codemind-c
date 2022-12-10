#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,a[N],s=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}