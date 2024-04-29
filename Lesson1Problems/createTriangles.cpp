#include <iostream>
int main() {
    int number = 0;
    char letter = 'a';
            for(int z = 0; z < 3; z++) {
std::cout << "please enter the dimensions of triangle. ";
        std::cin >> number;

std::cout << "please enter a number or a letter for the triangle to be made out of ";
        std::cin >> letter;
        
        for(int i = 0; i < number; i++) {
            std::cout << std::endl;
            
            for(int j = 0; j <= i; j++) {
                std::cout << letter;
            }
        }

        std::cout << std::endl << std::endl;
            }
        


    return 0;
}