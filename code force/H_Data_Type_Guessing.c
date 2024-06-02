#include<stdio.h>
#include<math.h>
int main()
{
    
    double a,b,c;
    scanf("%llf %llf %llf",&a,&b,&c);
    double y=(a*b)/c;
    if(y>=-2147483648 && y<=2147483647)
    {
        printf("%llf",y-(long long int)y);
        // if(y-(long long int)y==0)
        // {
        //     ;
        // }
        // else
            printf("%llf",y);
    }
    else
    {
        printf("long long");
    }
    
    // double a=3,b=6,c=9;
    // // scanf("%llf %llf %llf",&a,&b,&c);
    // double y=(a*b)/c;
    // printf("%d",y-(long long int)y);
    return 0;
}