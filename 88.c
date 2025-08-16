#include<stdio.h>
int main()
{
    printf("Enter the limit for print pattern:");
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
    
}