#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int m;
    scanf("%d",&m);
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==m)
        {
            ans=i;
            break;
        }
    }
    printf("%d",ans);
}


        

