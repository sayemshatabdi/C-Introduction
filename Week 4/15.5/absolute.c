#include<stdio.h>
void my_abs(int x)
{
    int a=abs(x);
    printf("%d",a);
}
int main()
{
    int n;
    scanf("%d",&n);
    my_abs(n);
    return 0;
}