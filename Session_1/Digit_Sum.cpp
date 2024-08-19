#include <iostream>

int main(){
int number = 0;
int sum =0;
std::cout << "please enter a number: " ;
std::cin >> number ;
// Convert the integer to a string
std::string num_string = std::to_string(number);
//Method_1 for addition
// for(char Digit_char : num_string){
//      int digit = Digit_char - '0'; // Converting character back to integer
//       sum += digit ;
// }
//Method_2 for addition
for(auto digit : num_string){
    sum+= std::stoi(std::string(1,digit)); // 1 -> multiply digit by 1
}
std::cout << "Sum of digits of "  << number << " is " << sum <<std::endl;
}