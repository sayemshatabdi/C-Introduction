#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    scanf("%s",a);
    char b[21];
    scanf("%s",b);
    int val=strcmp(a,b);
    if(val>0){
        printf("%s",b);
    }
    else if(val<0){
        printf("%s",a);
    }
    else{
        printf("%s",a);
    }
    return 0;
}