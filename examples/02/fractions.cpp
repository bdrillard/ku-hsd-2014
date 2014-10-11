#include <iostream>
#include <string>

using namespace std;

int find_gcd(int num, int den) {
    int smallest;
    if (num >= den) {
        smallest = den;
    } else {
        smallest = num;
    }

    int gcd;
    for (int i = 1; i <= smallest; i++) {
        if (num % i == 0 && den % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int numerator;
    int denominator;
    int gcd;

    while(true) {
        cin >> numerator;
        if (numerator == 0) {
            break;
        } else {
            cin >> denominator;
            if (numerator % denominator == 0) {
                cout << numerator / denominator << endl;
            } else {
                
                gcd = find_gcd(numerator, denominator);

                if (gcd == 1) {
                    cout << numerator << "/" << denominator << endl;
                } else {
                    int simple_num = numerator / gcd;
                    int simple_den = denominator / gcd;
                    cout << simple_num << "/" << simple_den << endl;
                }
            }
        }
    }

    return 0;
}
