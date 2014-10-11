import fileinput
import sys

for line in fileinput.input():
    if line.strip() == "0":
        break
    else:
        num, den = line.split(' ')
        numerator, denominator = int(num), int(den)
        if numerator % denominator == 0:
            print numerator / denominator
        else:
            smallest = numerator
            if numerator >= denominator:
                smallest = denominator

            gcd = 1
            for i in range(1, smallest):
                if numerator % i == 0 and denominator % i == 0:
                    gcd = i

            if gcd == 1:
                print str(numerator) + "/" + str(denominator)
            else:
                simple_num = numerator / gcd
                simple_den = denominator / gcd
                print str(simple_num) + "/" + str(simple_den)
