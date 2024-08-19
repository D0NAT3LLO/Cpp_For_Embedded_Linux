#include <iostream>

int main(){
float Numbers[3]={0.0};
for (int i=0; i<3 ; i++)
{
    std::cout << "please enter number" << std::endl ;
    std::cin >> Numbers[i];
}
int Maximum_Number = std::max(Numbers[0],std::max(Numbers[1],Numbers[2]));
std::cout<< "Maximum number is :  " <<  Maximum_Number << std::endl;
}