#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int min=INT_MAX;
    int max=INT_MIN;
    int x,y;
    for(int i=0;i<n;i++){
        if(ar[i]<min){
            min=ar[i];
            x=i;
        }
        if(ar[i]>max){
            max=ar[i];
            y=i;
        }
    }
    ar[y]=min;
    ar[x]=max;
    for(int i=0;i<n;i++){
        
        printf("%d ",ar[i]);
    }
    
    return 0;
}