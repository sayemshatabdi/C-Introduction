#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a>10000)
    {
        printf("gucchi bag\n");
        if(a>20000)
        {
            printf("gucchi belt");
        }
    }
    
    else if (a>5000)
    {
        printf("Levis bag");
    }
    else{
        printf("something");
    }
}