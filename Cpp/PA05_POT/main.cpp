#include <iostream>
#include <cmath>

int last_digit_power(int n, int p){
    n = n % 10;
    p = p % 4;

    if (p == 0){
        p = 4;
    }

    int result = std::pow(n,p);

    return result % 10;

}

int main() {

    int t,n,p;

    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        std::cin >> n >> p;
        std::cout<< last_digit_power(n, p) << '\n';
    }

    return 0;
}
