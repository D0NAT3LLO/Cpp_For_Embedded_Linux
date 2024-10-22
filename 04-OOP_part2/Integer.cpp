#include <iostream>

class Integer{
private:
int value;
public:
Integer():value(0){} // constructor 
explicit Integer(int param_value) : value(param_value){} // paramaterized constructor
Integer(const Integer &instance) : value(instance.value){}// copy constructor
Integer(Integer &&instance_mov) : value(std::move(instance_mov.value)){}//move constructor
~Integer(){this->value = 0 ;}//destructor

//Copy assignment operator
Integer& operator=(const Integer& instance){
    if(this != &instance){ //avoid self copy
    this->value = instance.value;
    }
    return *this ;
}
//move assignment operator
Integer& operator=(Integer &&instance){
    if (this != &instance){
        this->value =std::move(instance.value);
    }
    return *this;
}
//preincrement and predecrement operators
Integer& operator++(){++this->value ; return*this;}
Integer& operator--(){--this->value ; return*this;}
// +-/* operators
Integer operator+(const Integer& instance) const {return Integer(this->value + instance.value);}
Integer operator-(const Integer& instance) const {return Integer(this->value - instance.value);}
Integer operator/(const Integer& instance) const {return Integer(this->value / instance.value);}
Integer operator*(const Integer& instance) const {return Integer(this->value * instance.value);}
// operators for float
Integer operator+(const float& instance) const {return Integer(this->value + instance);}
Integer operator-(const float& instance) const {return Integer(this->value - instance);}
Integer operator/(const float& instance) const {return Integer(this->value / instance);}
Integer operator*(const float& instance) const {return Integer(this->value * instance);}
//comparison operators
bool operator==(const Integer& instance) const {return this->value == instance.value;}
bool operator>=(const Integer& instance) const {return this->value >= instance.value;}
bool operator<=(const Integer& instance) const {return this->value <= instance.value;}
bool operator!=(const Integer& instance) const {return this->value != instance.value;}
bool operator>(const Integer& instance) const {return this->value > instance.value;}
bool operator<(const Integer& instance) const {return this->value < instance.value;}

void print_val(){std::cout << this->value <<std::endl;}
};

int main (){

}