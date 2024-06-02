#include<stdio.h>
void fun(int i)
{
    if(i==0) return;
    int x=i%10;
    fun(i/10);
    printf("%d ",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        fun(a);
        if(a==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}