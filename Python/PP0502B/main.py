t = int(input())
for i in range(t):
    s = ' '.join(input()[2:].split(' ')[::-1])
    print(s)