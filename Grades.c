#include<stdio.h>
int main()
{
    int phy,che,bio,mat,com,a;
    scanf("%d%d%d%d%d",&phy,&che,&bio,&mat,&com);
    a=(phy+che+bio+mat+com)/5;
    if(a>=90)
    {
        printf("Grade A");
    }
    else if(a>80&&a<=90)
    {
        printf("Grade B");
    }
    else if(a>=70&&a<=80)
    {
        printf("Grade C");
    }
    else if(a>=60&&a<=70)
    {
        printf("Grade D");
    }
    else if(a>=40&&a<=60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}