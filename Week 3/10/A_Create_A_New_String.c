#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    char b[1000];
    scanf("%s",a);
    scanf("%s",b);
    int sz1=strlen(a);
    int sz2=strlen(b);
    printf("%d %d\n",sz1,sz2);
    printf("%s %s",a,b);
    return 0;
}