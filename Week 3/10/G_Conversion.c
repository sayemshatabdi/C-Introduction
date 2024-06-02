#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    fgets(a,100001,stdin);
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]>=65 && a[i]<=96){
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122){
            a[i]=a[i]-32;
        }
        if(a[i]==','){
           a[i]=' ';
        }
    }
    printf("%s",a);
    return 0;
}