#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;i<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}