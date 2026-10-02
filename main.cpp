#include "lib.h"

#include <iostream>

int main (int, char **) {
    std::cout << "Версия: 1.0." << version() << std::endl;
    std::cout << "Привет, Мир!" << std::endl;
    system("pause");
    return 0;
}
