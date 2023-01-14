#include <iostream>

int main() {
    int a, b, c;

    while (true) {
        a = 0; /* set the starting values of A and B */
        b = 1;
        do {
            std::cout << a << std::endl;
            
            c = a + b;
            a = b;
            b = c;
        } while (a < 317811);
    }

    return 0;
}