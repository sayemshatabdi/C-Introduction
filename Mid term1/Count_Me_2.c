#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    scanf("%s",a);
    int cnt=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            continue;
        }
        else{
            cnt++;
        }
    }
    printf("%d",cnt);
    
    return 0;
}