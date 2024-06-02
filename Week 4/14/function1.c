#include<stdio.h>
int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    printf("%d\n",sum(100,200));
    printf("%d\n",sum(40000,1000));
    return 0;
}