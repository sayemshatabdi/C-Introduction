#include<stdio.h>
int my_len(char *a)
{
    int len=0;
    for(int i=0;a[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char a[50];
    scanf("%s",a);
    int s=my_len(a);
    printf("%d ",s);
    return 0;
}