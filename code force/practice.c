#include <stdio.h>

int main() {
    double number = 3.14;
    
    // Check if the fractional part is not zero
    if (number - (int)number != 0) {
        printf("The variable is a floating-point number.\n");
    } else {
        printf("The variable is not a floating-point number.\n");
    }
    
    return 0;
}