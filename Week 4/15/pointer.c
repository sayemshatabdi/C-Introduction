#include<stdio.h>
int main()
{
    int x=10;
    int *p=&x;
    *p=200;
    int *p2=p;
    printf("%d\n",*p);
    printf("%d\n",*p2);
    return 0;
}