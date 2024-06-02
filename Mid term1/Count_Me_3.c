#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[10001];
    for(int i=0;i<n;i++){
        scanf("%s",a);
        int ca=0,sa=0,na=0;
        for(int i=0;i<strlen(a);i++){
            if(a[i]>64 && a[i]<91){
                ca++;
            }
            else if(a[i]>96 && a[i]<123){
                sa++;
            }
            if(a[i]>47 && a[i]<58){
                na++;
            }
        }
        printf("%d %d %d\n",ca,sa,na);
    }
}
    // int cb=0,sb=0,nb=0;
    // for(int i=0;i<strlen(b);i++){
    //     if(b[i]>64 && b[i]<91){
    //         cb++;
    //     }
    //     else if(b[i]>96 && b[i]<123){
    //         sb++;
    //     }
    //     if(b[i]>47 && b[i]<58){
    //         nb++;
    //     }
    // }
    // printf("%d %d %d\n",ca,sa,na);
    // printf("%d %d %d\n",cb,sb,nb);
//     return 0;
// }