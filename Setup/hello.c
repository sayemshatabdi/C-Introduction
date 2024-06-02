#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    printf ("%d + %d = %d\n", a,b,sum);
    int sub = a-b;
    printf("%d - %d = %d\n" ,a,b,sub);
    int multi = a*b;
    printf("%d * %d = %d\n",a,b,multi);
    float div = a*1.0/b;
    printf("%d / %d = %.2f", a,b,div);

}