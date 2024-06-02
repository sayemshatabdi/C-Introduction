#include<stdio.h>
int main()
{
    int a;
    
    for(a=1;a<=10;a=a+1)
    {
        if(a%2==0)
        {
            printf("%d - Even\n",a);
        }
        else
        {
            printf("%d - Odd\n",a);
        }
    }
}