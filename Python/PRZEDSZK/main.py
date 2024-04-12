
def nwd(a, b):

    c = 1
    while b != 0:
        c = b
        b = a % b
        a = c

    return c

t = int(input())

for i in range(t):

    ab = input()

    a = int(ab[:ab.find(" ")])
    b = int(ab[ab.find(" ") + 1:])

    step_1 = nwd(a, b)

    result = a*b/step_1

    print(int(result))
