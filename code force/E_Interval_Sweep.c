#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int y=abs(b-a);
    if(a==0 &b==0)
    {
        printf("NO");
    }
    else if(y>=0 && y<2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}