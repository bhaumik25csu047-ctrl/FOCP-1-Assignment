#include<stdio.h>
int main()
{
    int u,v,A,sum=0;
    printf("Enter number : ");
    scanf("%d",&u);
    A=u;
    while (u>0)
    {
        v=u%10;
        v=v*v*v;  
        sum=sum+v;
        u=u/10;
    }
    printf("Sum of cube of entered number : %d\n",sum);
    if (sum==A)
    printf("armstrong number.");
    else
    printf(" not an armstrong number.");
    return 0; 
}
