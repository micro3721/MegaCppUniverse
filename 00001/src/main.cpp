/**
 * Author: github.com/micro3721
 * E-mail: mysolution@qq.com
 * Provide software outsourcing services
 * 我承接软件定制开发服务,欢迎垂询
 */

#include "stack.h"
#include <iostream>
#include <cstdlib>     // for rand(), srand()
#include <ctime>       // for time>
#include <array>
#include <string>

const int Num = 10;

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // randomize rand()
    std::cout << "Please enter stack size: ";
    int stackSize;
    std::cin >> stackSize;

    Stack<std::string> stack(stackSize);

    std::array<std::string, Num> in = {
            " 1: Alice Wonder", " 2: Bob Builder",
            " 3: Charlie Alpha", " 4: Daisy Bravo",
            " 5: Edward Echo", " 6: Fiona Foxtrot",
            " 7: George Golf", " 8: Hannah Hotel",
            " 9: Isaac India", "10: Julia Juliet"
    };

    std::array<std::string, Num> out;

    int processed = 0;
    int nextIn = 0;
    while (processed < Num) {
        if (stack.isEmpty()) {
            stack.push(in[nextIn++]);
        } else if (stack.isFull()) {
            stack.pop(out[processed++]);
        } else if (std::rand() % 2 && nextIn < Num) {
            stack.push(in[nextIn++]);
        } else {
            stack.pop(out[processed++]);
        }
    }

    for (const auto &item: out) {
        std::cout << item << std::endl;
    }

    std::cout << "Bye\n";
    return 0;
}
