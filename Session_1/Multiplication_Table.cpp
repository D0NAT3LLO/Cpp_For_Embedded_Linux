#include <iostream>

int main(){
for (int i = 0; i <11 ; i++){
            std::cout << "Table of :" << i <<std::endl;
            std::cout << "+-----------+" << std::endl; 
        for (int j =0; j<11 ; j++){
            std:: cout << i << " * " << j << " = " << i*j << std::endl ;
            std::cout << "+-----------+" << std::endl;
        }
} 
}