#include<stdio.h>
int main()
{
    int limit;
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        for(int j=i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}