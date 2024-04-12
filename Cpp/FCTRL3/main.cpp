// https://pl.spoj.com/problems/FCTRL3/
#include <iostream>

int factorial(int n){
    if (n == 0){
        return 1;
    }
    if (n <= 2){
        return n;
    }else{
        int sum = 1;
        for (int i = 2; i <= n; ++i) {
            sum *= i;
        }
        return sum;
    }
}

int main() {

    int n, t;

    std::cin >> t;

    for (int i = 0; i < t; ++i){
        std::cin >> n;

        if (n < 10){
            std::cout << (factorial(n) % 100) / 10 << ' ' << factorial(n) % 10 << '\n';
        } else{
            std::cout << 0 << ' ' << 0 << '\n';
        }
    }
    return 0;
}
