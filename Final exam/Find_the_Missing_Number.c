#include<stdio.h>
int main()
{    
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {   
        long long int m;
        int a,b,c;
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        int x=a*b*c;
        if(m%x==0)
        {
            printf("%lld\n",m/x);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}