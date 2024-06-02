#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
        }
        int ans;
        for(int i=0;i<3;i++)
        {
            ans=a[2]-((a[2]*a[0])/(a[0]+a[1]));
        }
        printf("%d\n",ans);
    }
    return 0;
}