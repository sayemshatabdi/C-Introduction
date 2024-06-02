#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int num;
    for(int i=3;i<=1;i=i-1){
        num=a%i;
    }
    printf("%d",num);
    
    
    return 0;
}