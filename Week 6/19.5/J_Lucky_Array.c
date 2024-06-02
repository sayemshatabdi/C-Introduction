#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=INT_MAX;
    int cunt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        else
        {
            continue;
        }
    }
    // printf("%d",min);
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            cunt++;
        }
        else
        {
            continue;
        }
    }    
    if(cunt%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}