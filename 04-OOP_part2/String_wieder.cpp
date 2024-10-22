#include <cassert>
#include <iostream>
#include <cstring>

class String{
private:
char* str ;
size_t size ;
public:
String()=default;
String(char* str){ //Paramaterized constructor
    size = strlen(str);
    this->str = new char [size+1];
    strcpy(this->str,str);
}
//Copy Constructor
String(const String &obj){
    this->size = obj.size;
    this->str = new char [size+1];
    strcpy(this->str,obj.str);
}
//Move Constructor
String(String &&obj){
    this->size=obj.size;
    obj.size = 0;
    this->str = obj.str;
    obj.str=nullptr;
}
//Copy assignment Operator
String &operator=(const String &obj){
    //handling self assignment
    if (this == &obj){
    assert(false);
    return *this;
    }
    if (this->str){
        this->size=obj.size;
        delete this->str ;
        this->str = obj.str;
    }
    return *this;

}
//Move assignment operator
String &operator=(String &&expired){
    if(this!=&expired){
        this->size = expired.size;
        expired.size =0;
        this->str = expired.str;
        expired.str=nullptr; 
    }
    return *this;
}
//print fn
void print_str(){std::cout << str << std::endl;}
//Append
void append(const String &added_msg){
    int new_size = size+ added_msg.size;
    char *new_str_app = new char [new_size +1];
    std::strcpy(new_str_app,str);
    std::strcat(new_str_app,added_msg.str);
    delete[] str;
    this->str = new_str_app;
    this->size = new_size;
}
//Add operator
String operator+(const String &added_message){
    int new_size = this->size + added_message.size ;
    char* new_str = new char[new_size+1];
    std::strcpy(new_str,str);
    std::strcat(new_str,added_message.str);
    return String(new_str);
}
~String(){
    std::cout << "Destructor is called" <<std::endl;
    this->str = nullptr;
}
};
int main(){
    char array[] = "First_array";
    char second_array[] = "Second_array";
    char third_array[] ="third_array";
    String t2(array);
    t2.print_str();
    String t3(t2);//Copy Constructor
    t3.print_str();
    String t4(second_array);
    t4.print_str();
    String t5(std::move(t4)); //Move Constructor
    t5.print_str();
    // t4.print_str(); //nothing !!
    String t6(third_array);
    t5=t6;//Copy assignment
    t5.print_str();
    t6.print_str();
    t5=std::move(t6); //Move assignment
    t5.print_str();
    // t6.print_str();// nothing !!
    t5=t3+t2;
    t5.print_str();
    t5.append(t2);
    t5.print_str();
}