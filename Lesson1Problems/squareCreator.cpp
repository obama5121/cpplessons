#include <iostream>

int main() {

    int userInput = 0;    
    
    std::cout << "please enter a number ";
    std::cin >> userInput;
     
    for(int i = 0; i < userInput; i++) {
      std::cout << std::endl;
    for(int x = 0; x < userInput; x++){
    std::cout << "* ";
       }
    }
}