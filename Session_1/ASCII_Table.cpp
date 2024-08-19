#include <iostream>
#include <iomanip>


int main(){
    std::cout << "ASCII Code Table :" << std::endl;
    std::cout << "|" << std::setw(3) << "Char" << "|"  << std::setw(3) 
                     << std::setw(3) << "ASCII"<< "|"  << std::endl;

for (int i =0; i < 128 ; i++)
{
        std::cout << "|" << std::setw(4) << char(i) << "|"  << std::setw(3) 
                     << std::setw(4) << i << "|"  << std::endl;
}

return 0;
}