#include<stdio.h>
#include<string.h>
void fun(char a[])
{
    printf("%d",strlen(a));
}
int main()
{
    char a[20]="Hello";
    fun(a);
    return 0;
}