import fileinput
import sys

num = sys.stdin.readline()

for line in fileinput.input():
    print("Hello " + line.strip() + "!")
