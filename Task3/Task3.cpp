#include <iostream>

int age;
int young = 20;
int grownUp = 40;
int old = 60;

int main()
{
    std::cout << "How old are you? ";
    std::cin >> age;

    if (age < young) {
        std::cout << "You are young";
    }
    if (age <= grownUp && age >= young) {
        std::cout << "You are an adult" << std::endl;;
    }
    if (age <= old && age > grownUp) {
        std::cout << "You are old" << std::endl;;
    }
    if (age > old) {
        std::cout << "You are really old" << std::endl;;
    }
    
    return 0;
}
