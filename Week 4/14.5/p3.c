#include<stdio.h>
void char_to_ascii(char x)
{
    printf("%d",x);
}
int main()
{
    char a;
    scanf("%c",&a);
    char_to_ascii(a);
    return 0;
}