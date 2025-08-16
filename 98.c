#include<stdio.h>
int main()
{
    int limit;
    int k='z';
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",k);
            k--;
        }
        printf("\n");
    }
}