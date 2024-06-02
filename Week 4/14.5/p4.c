#include<stdio.h>
void small_to_capital(int x)
{
    if(x>='a' && x<='z')
    {
        x=x-32;
    }
    printf("%c",x);
}
int main()
{
    char a;
    scanf("%c",&a);
    small_to_capital(a);
    return 0;
}