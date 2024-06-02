#include<stdio.h>
void fun(int *p)
{
    *p=200;
}
int main()
{
    int x=50;
    fun(&x);
    printf("%d\n",x);
    return 0;
}