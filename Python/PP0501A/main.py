
def nwd(a, b):

    while b != 0:
        temp = b
        b = a % b
        a = temp
    return a

t = int(input())

for i in range(t):
    s = input().split(' ')
    print(nwd(int(s[0]), int(s[1])))
