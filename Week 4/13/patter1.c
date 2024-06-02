#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int k=a;
    for(int i=0;i<a;i++)
    {
        for(int j=k;j>=1;j--)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }
    return 0;
}