#include <stdio.h>

long long int minimum(long long int a, long long int b) {
    if (a < b)
		{
    	return a;
		}
    else 
    {
    	return b;
		}
}

int main() {
    long long eyes, mouth, body;
    scanf("%lld %lld %lld", &eyes, &mouth, &body);
    
    long long counter = 0;
    
    if (eyes == 0 || body == 0) {
        printf("0");
        return 0;
    }

    

    if (mouth > 0) {
        long long min_ = minimum(eyes, minimum(body, mouth)); // eye = 2, body = 3, mouth = 5 //// eye   min 2 = 3

        counter += min_; // counter = 2
        eyes -= min_;
        mouth -= min_;
        body -= min_;
    }

    if (eyes > 0 && body > 0) {
        eyes /= 2;
        long long min_ = minimum(eyes, body);
        counter += min_;
    }

    printf("%lld", counter);
}