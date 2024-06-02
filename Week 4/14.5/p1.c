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
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=s;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s--;
        k++;
        printf("\n");
    }
    return 0;
}