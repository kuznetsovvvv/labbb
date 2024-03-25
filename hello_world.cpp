#include <iostream>
#include <string>//libraries
int main() {
//введите имя
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
std::cout << "Hello world from " << name << std::endl;
return 0;
}
