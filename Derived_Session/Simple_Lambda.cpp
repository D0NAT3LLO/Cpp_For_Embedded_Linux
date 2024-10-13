#include <iostream>
// Code to calculate the square of given number using lambda
int main (){
int num ;
std::cout << "please enter the number: " ;
std::cin >> num ;     
[num]() {
int square = num*num;
std::cout << square << std::endl;
}();
}