// #include<stdio.h>
// void fun(int *ar, int n)
// {
//     ar[0]=500;
// }
// int main()
// {
//     int ar[5]={10,20,30,40,50};
//     fun(ar,5);
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",ar[i]);
//     }
//     return 0;
// }
#include<stdio.h>
void fun(char *ar, int n)
{
    ar[0]='g';
}
int main()
{
    char ar[5]="hello";
    fun(ar,5);
    for(int i=0;i<5;i++)
    {
        printf("%c ",ar[i]);
    }
    return 0;
}