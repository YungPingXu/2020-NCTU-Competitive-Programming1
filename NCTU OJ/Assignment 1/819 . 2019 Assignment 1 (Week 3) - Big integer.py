from sys import stdin
for line in stdin:
    s = line.split()
    sum = 0
    for n in s:
        sum += int(n)
    print(sum)