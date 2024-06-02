#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        long long int factorial=1;
        for(int i=a;i>0;i--)
        {
            factorial=factorial*i;
        }
        printf("%lld\n",factorial);
    }
    return 0;
}