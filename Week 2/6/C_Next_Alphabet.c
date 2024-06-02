#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a<'z'){
        printf("%c",a+1);
    }
    else{
        printf("%c",'a');
    }
    return 0;
}