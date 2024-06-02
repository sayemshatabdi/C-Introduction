#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    long long int sum=0;
    for(i=0;i<n;i++)
        sum = sum + s[i]-'0';
    printf("%d\n",sum);
}