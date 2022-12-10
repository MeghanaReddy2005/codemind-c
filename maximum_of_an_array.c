#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,max=-9999;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}