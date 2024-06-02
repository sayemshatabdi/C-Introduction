#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a>=97 && a<=122)
    {
        int sum;
        sum=a-32;
        printf("%c",sum);

    }
    else{
        int min;
        min=a+32;
        printf("%c",min);
    }
    return 0;
}