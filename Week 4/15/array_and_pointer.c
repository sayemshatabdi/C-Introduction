#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    printf("0th index er value - %d\n",a[0]);
    printf("0th index er value - %d\n",*a);
    printf("1th index er value - %d\n",*(a+1));
    printf("1th index er value - %d\n",*(1+a));
    printf("1th index er value - %d\n",1[a]);
    return 0;
}