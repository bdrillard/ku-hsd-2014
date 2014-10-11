import java.io.*;
import java.util.Scanner;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        int numerator;
        int denominator;
        int gcd;

        while(true) {
            numerator = in.nextInt();
            if (numerator == 0) {
                break;
            } else {
                denominator = in.nextInt();
                if (numerator % denominator == 0) {
                    System.out.println(numerator / denominator);
                } else {

                    gcd = findGCD(numerator, denominator);

                    if (gcd == 1) {
                        System.out.println(numerator + "/" + denominator);
                    } else {
                        int simple_num = numerator / gcd;
                        int simple_den = denominator / gcd;
                        System.out.println(simple_num + "/" + simple_den);
                    }
                }
            }
        }
    }

    public static int findGCD(int num, int den) {
        int smallest;
        if (num >= den) {
            smallest = den;
        } else {
            smallest = num;
        }

        int gcd = 1;
        for (int i = 1; i <= smallest; i++) {
            if (num % i == 0 && den % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
}
