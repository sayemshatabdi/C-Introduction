#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=4*n;i++)
    {
        if(i%4==0)
        {
            printf("PUM\n");
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}