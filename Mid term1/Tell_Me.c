#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        int a[m];
        for(int i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        int x;
        scanf("%d",&x);
        int cnt=0;
        for(int i=0;i<m;i++)
        {   
            if(a[i]==x)
            {
                cnt++;
                break;
        
            }
        }
            if(cnt==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }


    }
    return 0;
}    