#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=n-1;
    int k=(n*2)-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=k;j>=1;j--)
        {
            printf("*");
        }
        s++;
        k=k-2;
        printf("\n");
    }
    return 0;
}