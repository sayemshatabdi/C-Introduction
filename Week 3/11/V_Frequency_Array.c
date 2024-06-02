#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int cnt[100001]={0};
    for(int i=0;i<n;i++)
    {
        int val=ar[i];
        cnt[val]++;
    }
    for(int i=1;i<=m;i++){
         printf("%d\n",cnt[i]);
    }
    return 0;
}