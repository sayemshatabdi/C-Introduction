#include<stdio.h>
#include<string.h>
int main()
{
    int e;
    scanf("%d",&e);
    for(int i=0;i<e;i++)
    {
        int n;
        scanf("%d",&n);
        char a[100001];
        scanf("%s",a);
        int t=0,p=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='T')
            {
                t++;
            }
            else if(a[i]=='P')
            {
                p++;
            }
        }
        if(t>p)
        {
            printf("Tiger\n");
        }
        else if(p>t)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}