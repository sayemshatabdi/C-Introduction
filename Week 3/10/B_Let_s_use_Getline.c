#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    fgets(a,1000001,stdin);
    scanf("%s",a);
    int i=0; 
    while(a[i]!='\\'){
        printf("%c",a[i]);
        i++;
    }

    return 0;
}