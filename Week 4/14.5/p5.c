#include<stdio.h>
void capital_to_small(int x)
{
    if(x>='A' && x<='Z')
    {
        x=x+32;
    }
    printf("%c",x);
}
int main()
{
    char a;
    scanf("%c",&a);
    capital_to_small(a);
    return 0;
}