
t = int(input())

for i in range(t):
    suma = 0
    n = int(input())
    s = input()

    s = s.split(' ')
    for j in s:
        suma += int(j)
    print(suma)


