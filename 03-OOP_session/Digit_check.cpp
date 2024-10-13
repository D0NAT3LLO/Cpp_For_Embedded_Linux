#include <iostream>

class character{
public:
character(char input): input(input){
  std::cout << "parameterized constructor is called" <<std::endl;
}
int check();
char input;
~character(){
  std::cout << " Destructor is called " <<std::endl;
}
};

int character::check(){
if (std::isdigit(this->input)){ 
   std::cout << "the member is digit" <<std::endl;
  return true; }
else  {std::cout << "the member is character" << std::endl;
return 0;}
}

int main(){
character test1('a');
character test2('5');
std::cout << test1.check() <<std::endl;
std::cout << test2.check() <<std::endl;
return 0;
}
