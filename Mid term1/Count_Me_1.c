#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    int m2=0,m3=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i]%3==0)
        {
            m2++;
        }
        else if(a[i]%3==0){
            m3++;
        }
        else if(a[i]%2==0){
            m2++;
        }
 
    }
    printf("%d %d",m2,m3);
    return 0;
}