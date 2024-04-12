
def palindrome(word, times):
    if word!=word[::-1]:
        times+=1
        word = str(int(word) + int(word[::-1]))
        return palindrome(word, times)

    return word, times


t = int(input())
for i in range(t):
    n = input()

    word, times = palindrome(n, 0)
    print(word, times)
