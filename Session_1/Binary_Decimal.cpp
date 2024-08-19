#include <iostream>
#include <iomanip>
#include <bitset>

int main(){
int Number=0;
// Intiating Bits to be converted later.
std::bitset<8> bits;
// Scan decimal Number
std::cout << "please enter a Decimal number: " ;
std::cin >> Number ;
// Convert to Binary Using Bitset
std::bitset<8> Binary (Number); //Conversion 
std::cout << Binary << std::endl ;
// Scan Binary Number
std::cout <<"please enter a Binary number:  " ;
std::cin >> bits ;
// Convert Bits to Unsigned long decimal 
unsigned long Decimal_Number = bits.to_ulong(); //to_ulong() is in Bitset Library
std:: cout << Decimal_Number << std :: endl ;

}