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
    int k;
    scanf("%d",&k);
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cnt++;
            }
            else
            {
                continue;
            }
            // printf("%d %d\n",a[i],a[j]);
        }
    }
    if(cnt>0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}