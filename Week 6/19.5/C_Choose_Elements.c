// #include<stdio.h>
// int main()
// {
//     long long int n,k;
//     scanf("%lld %lld",&n,&k);
//     long long int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%lld",&a[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=1;j<n;j++)
//         {
//             if(a[i]<a[j])
//             {
//                 int tmp=a[i];
//                 a[i]=a[j];
//                 a[j]=tmp;
//             }
//             else
//             {
//                 continue;
//             }
//         }
//     }
//     long long int sum=0;
//     for(int i=0;i<k && a[i]>0;i++)
//     {
//         if(a[i]>0){
//         sum=sum+a[i];}
//     }
//     printf("%lld",sum);
//     return 0;
// }


#include <stdio.h>

int main() {
    int size, maxSum;
    scanf("%d %d", &size, &maxSum);

    long long arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%lld", &arr[i]);
    }

    
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                long long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    long long sum = 0;
    for (int i = 0; i < maxSum && arr[i] > 0; i++) {
        sum += arr[i];
    }

    printf("%lld\n", sum);

    return 0;
}
