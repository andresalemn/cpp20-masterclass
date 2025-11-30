#include <iostream>
#include "chopper.h"

int main(){

    int age{ 16 };
    int bounty{ 100000000 };

    std::cout << "Sanji" << std::endl;
    std::cout << "Zoro" << std::endl;
    std::cout << "Luffy's age is: " << age << " and it's bounty is: " << bounty << std::endl;

    say_hello();

    return 0;
}