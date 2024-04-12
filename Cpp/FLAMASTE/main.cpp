#include <iostream>

void word(std::string str){

    char ch = str[0];
    int times = 1;

    for (int i = 1; i < str.size() + 1; ++i) {
        if (str[i] == ch){
            ++times;
        } else{

            switch (times) {
                case 1:
                    std::cout<< str[i-1];
                    break;
                case 2:
                    std::cout<< str[i-1] << str[i-1];
                    break;
                default:
                    std::cout<< str[i-1] << times;
                    break;
            }
            times = 1;
            ch = str[i];

        }
    }

}

int main() {

    int t;
    std::string str;

    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        std::cin >> str;
        word(str);
        std::cout << '\n';
    }

    return 0;
}
