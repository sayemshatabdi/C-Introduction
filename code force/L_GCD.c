#include<stdio.h>
#include<limits.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    if(a>b)
    {
        for(int i=b;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("%d",i);
                break;
            }
            else
            {
                continue;
            }
        }
 
    }
    else if(a==b)
    {
        printf("%d",a);
    }
    else
    {
        for(int i=a;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("%d",i);
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}