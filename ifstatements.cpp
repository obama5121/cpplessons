#include <iostream>

int main()
{

for(int i = 0; i < 10; i++){

int userinput = 1;

std::cout << "please enter a number between 1-2"<< std::endl;

std::cout << "1 for pizza and 2 for chicken"<< std::endl;

std::cin >> userinput;

if (userinput == 1) {
    std::cout << "heres ya pizza" << std::endl;
}
else if (userinput == 2) {
    std::cout << "take ya chicken" << std::endl;
}
 else {       
    std::cout << "NOTHING FOR YOU!" <<std::endl;

}
}

    std::string wepond = "";

std::cout << "did you have fun?" << std::endl;
std::cout << "YES or NO!" << std::endl;

std::cin >> wepond;

if (wepond == "YES!" ) {
    std::cout << "yay" << std::endl;
}
else if (wepond == "NO!") {
    std::cout << "KILL YOURSELF NOW" << std::endl;
}
 else {       
    std::cout << "YOU CHOSE NOTHING!!" <<std::endl;
 }

}