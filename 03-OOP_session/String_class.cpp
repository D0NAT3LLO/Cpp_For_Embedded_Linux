#include <iostream>

class MyString{
private:
    char *str;
    size_t length;
public:
//default constructor
MyString(): str(nullptr), length(0) {}
//parameterized constructor
MyString(const char* input){

this->length = mystr_length(input);
this->str = new char [length+1];
mystr_copy(input);

}
//Calculate Length 
int mystr_length(const char* string_for_length){
    int local_length =0;
    while(string_for_length[local_length] != '\0'){
        local_length++;
    }
    return local_length;
}
//to get length without passing the string to it
int getlength(){return this->length;}
//Copy string
void mystr_copy(const char* string_for_copy){
for(int i =0; i<length; i++){
    str[i]=string_for_copy[i];
}
str[length]='\0';
}
//Print fn
void print(){
    for(int i =0; i< length; i++){
        std::cout << str[i] << " ";
    }
    std::cout << std::endl;
}
//Destructor
~MyString(){clear();}
void clear (){
    delete[] this->str ; //deallocate (Free allocated memory)
    // this->str =nullptr;
    // this->length = 0;
    // delete this; //--> segmentation fault
}
};

int main(){
MyString instance ("Mostafa");
std::cout << "Length: "  << instance.getlength()<<std::endl;
instance.print();
}