#include <iostream>

int main(){
char vowels[]={'a','e','i','o','u'} ;
char input ;
std::cout << "please enter a character:  " ; 
std::cin >> input ;

for (char i : vowels ){
    if ( i == input ){
        std::cout<< "The character is a vowel" << std::endl;
        return 0; // Will prevent the "NOT Vowel Status Below" from execution
    }
}
        std::cout << "The character isnot a vowel" << std::endl;
} 
