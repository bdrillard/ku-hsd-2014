#include <stdio.h>

int main() {
    int numerator;
    int denominator;
    int gcd;

    while(1) {
        scanf("%d ", &numerator);
        if (numerator == 0) {
            break;
        } else {
            scanf("%d\n", &denominator);
            if (numerator % denominator == 0) {
                printf("%d\n", numerator / denominator);
            } else {

                gcd = find_gcd(numerator, denominator);
                
                if (gcd == 1) {
                    printf("%d/%d\n", numerator, denominator);
                } else {
                    int simple_num = numerator / gcd;
                    int simple_den = denominator / gcd;
                    printf("%d/%d\n", simple_num, simple_den);
                }
            }
        }
    }

    return 0;
}

int find_gcd(int num, int den) {
    int smallest;
    if (num >= den) {
        smallest = den;
    } else {
        smallest = num;
    }

    int i;
    int gcd;
    for (i = 1; i <= smallest; i++) {
        if (num % i == 0 && den % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}
