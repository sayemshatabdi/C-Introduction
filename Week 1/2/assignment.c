#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int N;
    scanf("%lld", &N);
    if(N>1000){
        printf("I will buy Punjabi\n");
        if(N>=1500){
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    
    }
    else{
        printf("Bad luck!");
    }
    return 0;
}