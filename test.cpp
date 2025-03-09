#include <algorithm>
#include <cstring>
#include <iostream>
#include <iterator>
#include <limits>
#include <vector>
#include <initializer_list>
#include <type_traits>
#include <bitset>
#include <array>
#include<cctype>
#include<memory>
/*fn overloading depends on parameters given to Fn */
/*
commands to check
-t --demangle | grep mul
objdump -t  | grep mul
objdump -t a.out  | grep mul
c++filt _Z8multiplyii
c++filt _Z8multiplyii
*/

/*
int multiply (int a ,int b){
return a * b ;
}

int multiply(double x, double y){
    return x * y ;
}

int main(){
    int result1 = multiply(1,2);
    int result2 = multiply(1.2,1.6);

std::cout << result1 << std::endl;
std::cout << result2 << std::endl;

return 0; 
} 
*/

/*    2 Types of Insert <fn overloading>   */
/*
int main (){

std::string v("Hello World");
std::string v2("Hashes::");
// v.insert(v.begin(),5,'$');
v.insert(v.begin(),v2.begin(),v2.end());
std::cout << v <<std::endl;
return 0;
}
*/
/*//ptr to func 
void func() {std::cout << "Hello";}
int main(){
void (*func_ptr)() = &func;
(*func_ptr)(); 
}*/
/*
int main (){

int a =10;
char c = 'a' ;

int* q = (int*)&c;// no error (avoid)
// int *p = static_cast<char*>(&c); //invalid

int value = 10 ;
float x = static_cast<float>(value);
std::cout << value << std::endl;
}*/
/*
int main (){
//const_cast is used to cast away the constness of variables
//MISRA RULE : A cast shallnot remove any const or volatile
//qualifacation from the type of a pointer or reference .
const int val = 10;
const int *ptr=&val;
//int *ptr1 = ptr; // error
int *ptr1 = const_cast <int *>(ptr);
}*/
/*
int main(){
//Lambda exp
std::vector<int>v{1,2,3,4,5,6,7,8,9};
//lambda to print vector 
std::for_each(v.begin(),v.end(),[](int i)
{
    std::cout << i << "" ;
});
}*/
/*
int main (){

int x = 10;

int &reftox = x;

int *ptr = &x ;

std::cout << x << std::endl;
std::cout << reftox << std::endl;
std::cout << *ptr << std::endl;
std::cout << &x << std::endl;
std::cout << &reftox << std::endl;
std::cout << &ptr << std::endl;

}*/
//lamdbda

 
// int main () {
// int offset = 100 ;
// auto func = [/*capture*/offset](/*parameters*/int x,int y)->int {

//     std::cout << "Hello" <<std::endl;
//     return x+y+offset;
// };
// std::cout << func(5,4) << std::endl ;
// return 0;

// } 

//lambda
/*
int main (){
    int offset ;
    std::cin >> offset;
    std::vector<int>v{0,59,12,16,11,48,57};

    std::sort(v.begin(),v.end(),[offset](int num1 ,int num2){
        return (num1+offset) < (num2+offset) ;
    });
    std::for_each(v.begin(),v.end(),[](int num){std::cout<< num << " " ;});

}
*/
/*
int main (){

int temp = 10; 
int thirdvar = 15;
[temp]()mutable{ // mutable to change in temp when captured by value 
    temp = 12 ;
    std::cout << temp <<std::endl;
return   temp   ;
}();
}
*/
/*C++11: constexpr fn = one statement -> one return */
/*C++14: constexpr fn can be written as below*/
/*unitialized variables in constexpr fn is a C++20 */
/*
constexpr int fun(){
    for (int i=0; i<5 ;i++){
        if (i==3)
        {
            //std::cin >> i ; // Runtime 
            return 5;
        }
        }
    return 10;    
} 

int main (){
constexpr int x = fun();
std::cout << x << std::endl;
}
*/
//OOP
//NULL vs nullptr
//whenever you are gonna use (NULL) -> please use nullptr
// void fn (int var) {std::cout  << "variable paramater fn" <<std::endl;}
// void fn (int *var) {std::cout  << "variable paramater fn" <<std::endl;}
// int main(){
// fn(NULL); // ambiguous (can be passed to both functions)
// fn(nullptr); // passed to the fn that is receiving ptr. 
// }
/*
int main(){
    // user defined { struct class union enum} (more effected by type of intialization)
    // trivial data types {int float double char bool} -> 
int x =0; // copy
int x2{};// value == uniforn
int x3 {0}; // direct intialization

int value; // garbage
int value2{}; //zero
int value3 = int{}; //not commonly used
std::cout << x<< " " << x2 <<" "<< x3 <<std::endl;
std::cout << value << " " <<value2 << " " << value3 <<std::endl;

// narrow conversion 
float decimal=3.14;
int number = decimal; //implicit cast will covert float to int
int number2{decimal};//its better to use the uniform intialization // narrowing conversion will cause error
 //to solve error
 int number3{static_cast<int>(decimal)}; // cast it yourself   
}
*/
/*
enum class Traffic :unsigned char{
    RED, //0
    YELLOW, //1
    GREEN //2
};
int main (){ 

Traffic obj{};
std::cout << obj << std::endl; // willnot print with enum class unless we make the ostream
std::cout << Traffic::YELLOW << std::endl;

int number = RED; // will print in classic enum
int number3 = Traffic::RED; //and still will need a cast
//covert from data type to another data type(problem)
// Traffic obj2 = 4; // ERROR (RED,YELLOW,GREEN)
std::cout << sizeof(obj) <<std::endl; // Memory waste -> use enum class or classic enum < enum traffic : unsigned char >

}
*/
//struct fn will be in .text section
//default in struct is public 
//default in class is private
/*
struct mydata {
    //packing (SIZE)
int ID ; //4
char c;//8
char a; //8
char d;//8
char k;//8
char t;//12
// 3 wasted bytes

// fn go to .text (will make no difference in size)
mydata(){
    std::cout << "constructor " <<std::endl; 
    ID = 0 ;
    
}

~mydata(){
    std::cout<< " destructor " << std::endl;
}

};
*/

/*
int main(){

// {
mydata data;
// std::cout << data.ID <<std::endl;
// std::cout << data.name << std::endl;
// }
// std::cout << "Hello" << std::endl;

std::cout << sizeof (mydata) << std::endl;

}
*/
// class myData {
// private:

// int ID;
// char name[10];

// public:
// myData(){
//     std::cout << "Constructor" <<std::endl;
//     ID =1;
//     strcpy(name, "default");
// }
// ~myData(){

//     std::cout << "Destructor" <<std::endl;
//     ID=0;
//     strcpy(name,"");
// }
// void print (){ // hard to debug when not called in main  so its better to be wwritten outside (as it is in the .text section)
// std::cout << "ID: "<< ID << std::endl;
// std::cout << "name: " << name << std::endl;

// }
/*
void print(); // easier for debugging
myData(int ID);
};
myData::myData(int ID){this->ID = ID; }

void myData::print(){
std::cout << "ID: "<< ID << std::endl;
std::cout << "name: " << name << std::endl;
}



int main (){
    //{
myData obj(10);
//in gdb you can call the obj.print fn even tho its not called here. (because it was wwritten external not inline ) 
//obj.print();
  //  }// calling destructor in the middle
// in gdb we cannot call the print fn as the destructor came  
std::cout << "hello " << std::endl; 

}

*/

/*
// class myData {
//     public:
    // myData()=delete; // delete constructor
    // myData()=default; // calling default instructor
    // myData(): l(l){ // default const... without it you cannot intialize "la" down in main fn
    // std::cout << "default constructor" << std::endl;
    // }

    // myData(int a){
    //     std::cout << " delegation a only constructor" <<std::endl;
    //     this -> a =a ;
    // }
    // int a;
    // int b;
    
    // myData(int a,int b) : myData(a)  { //parameterized constructor
    //     std::cout <<"parameterized a&b constructor " << std::endl;
    //     // this->a=a;
    //     this->b=b;
    // }
  /*myData(bool a, /*int&*/ //, int); */
//     bool a;
//     // int &number; //must be in intializer list
//     const int l; //must be in intializer list
// };
// myData::myData(bool a, /*int &number*/ int l) :a(a) ,/*number(number)*/ l(l) {
//     std::cout << "myData :: myData (bool a , int number)" <<std::endl;
//     std::cout << "a: " << a << std::endl;
//     // std::cout << "number: " <<number << std::endl;
//     std::cout << " l: " <<l << std::endl;
// }

/*
// int main (){
// myData my2(2,3);// parametrized
// myData my3 = myData(2, 3); //parametrized
// myData la ; //default
// myData m4 = myData(2); //will print delegation a only
// myData m5(2,3);
// std::cout << m5.a << "   " << m5.b <<std::endl;
// int x = 20;
// myData test_obj;
// myData obj (false,10);
// return 0;
// }
*/
/*
class myData {
public:
myData(int a, int b) : a(a) , b(b), ptr(&this->a), number(this->a) {} 
    int getter (int temp_const) const{
    //  a=10; // 1- you cannot modify any variable(members) as the fn is const
    int myvalue = 10;
    myvalue++; // 2- you can create local var and change them
    temp_const++; //3- you can modify the parameter
    classmember++; //4 you can modify static member
    number =100 ;//4.1 - you can modify refrence member
    // ptr = &a; // 4.2- this doesnot match wwith pointers <even if a is mutable>
    return a;
}
void const_fun()const{}
void non_const_test(){}
int getter (int temp_nonconst) {return a;}
// MISRA RULE 9-3-1
//const member functions shall not return non-connst refrenece or pointer to class member
int *getptr()const{return ptr;} //ISSUE
int &getnumber()const{return number;}//ISSUE 

private:
 int  a; // #5 - you can use mutable if you would like to modify in const fn (bad practice) 
int b;
int &number;
int *ptr;
static int classmember;
static int a7;
};
int myData::classmember =0;

int main(){

const myData data (1,2); // 6- const instance can call only const member function
// data.non_const_test(); // error 
data.const_fun();
data.getter(5); // smart enough to go to the const fn
myData data2(4,5);
data2.const_fun(); // 7- non const instance can call both const and non const fns
data2.non_const_test();

data2.getter(6); //8- smart enough to go to the NON-const fn (will call the non const between 2 getters 
//but it can also call the const fn as in rule 7 

data2.getnumber()=15; //accessed a private member and change it RULE 9-3-1 (Bad Practice)
std::cout << data2.getter(2) <<std::endl;
return 0;
}
*/
/*
class temp; // forward declaration
void fun (); // forward declaration
class myData {
public:
    myData(int a, int b ) : a(a) , b(b) {}


private:
friend class temp; // - friend class
friend void fun(); //{ 
//      myData data_fun(4,5);
// std::cout << data_fun.a <<std::endl;
// std::cout << data_fun.b << std::endl;
// }
friend std::ostream &operator<<(std::ostream &os, const myData &data_fun){ // friend operator
os << data_fun.a << " " << data_fun.b;
return os;
}
int a;
int b; 
};

void fun(){ // can be written inside the class
myData data_fun(4,5);
std::cout << data_fun.a <<std::endl;
std::cout << data_fun.b << std::endl;
}

class temp{
    public:
    temp(){
        myData data (1,2);
        std::cout <<data.a << std::endl;
        std::cout << data.b << std::endl;
    }
};

int main(){
temp t;
fun();
return 0;
}

*/
/*
class myData {
public:
    myData () { counter++; }
static int counter;
static const int MAX =5; //SPECIAL (not in rodata) it will be replaced by the value and cannot be passed by reference
static const int MIN; //  related to class and also it is const
// static const int temp; //Error if you would like to define in constructor
static const float PI;//=3.14; // error of intialized here as it is integral type
private:
    //static member isnot related to instance, its related to the class itself
};

int myData::counter ; //=0 ->  (not intialized)bss
// int myData::counter =1; // =1 -> data segment // 1- definition should be outside class
const float myData::PI = 3.14; //(.rodata) it should be intialized outside the class && not integral type 
const int myData::MIN =9;//became in rodata

void getbyref(const int &a){} // incase not a referance it will work for MAX which is static const intialized inside the class

int main(){
// // std::vector<myData>v(5);
// myData d1;
// myData d2;
// myData d3;
// myData d4;
// myData d5;

// std::cout 
//     << myData::counter //2- you can access static member from class name 
//     <<std::endl; 
// std::cout 
//     <<d3.counter // 3- you can access static member object
//     <<std::endl;
// std::cout
//     <<myData::MAX
//     <<std::endl;
// std::cout
//     << d1.MIN
//     <<std::endl;

// getbyref(myData::MAX); 
// std::cout << myData::MAX <<std::endl; // error as MAX was replaced by 5 so its a value not reference
return 0;
}
*/

/*
class myData {
public:
    myData(){}
    static void myfun(){ //1-static function isnot related to instance but related to class 
    std::cout << "Hello Static Fn " <<std::endl;
    // normal_variable =10; // 2-Error cannot access normal integer variable as it is instance related smh
    Static_Variable =10; //3-OK (can be accessed as it is static(related to class not instance))
    }
int normal_variable;
static int Static_Variable;
static void test(); // fn to say that no need to mention static when defining the fn below
};

void myData::test() {} // NO STATIC MENTIONED only( void myData::test(){})

int main(){
myData d1;
myData d2;

myData::myfun(); //4-Can be called from class & instance as the following line
d1.myfun();

}
*/

/*Q&A*/
/*
int main(){
    
    //Convert decimal to binary 
    // int x=10;
    // std::cout << std::bitset<8>(x) <<std::endl;

    //Find number in array 
    // int s[]={5,8,9,6,3,8,5,94,6,13,6,4};
    // auto find = std::find(std::begin(s),std::end(s),94);
    // std::cout << *find << std::endl; //94

    //Convert from string to datatype
    // auto i = std::stof("123456"); // std::<stol/stod/stof....etc>
    // std::cout << typeid(i).name()<<std::endl; //float
}
*/

/*Study Tasks*/
/*
int &f(){ // if & is removed -> not assignable
     static int x=0; // if static removed it will return reference to stack memory associated with local variable
    std::cout << "now this is X: " << x <<std::endl; 
    return x ;
}
int main(){
f() = 10; //return then assign 
f()= 20;
}
*/
/*
int main (){
    int a =10;
    if(a<20 and a>5){ // We can use 'and' and 'or'
    std::cout << " Yes " << std::endl;
    }
    return 0;

}
*/
/*Operator Overloading*/
/*
class LCD{
public:
    std::string msg;
    int curser = 0;
    void display(){std::cout << msg << std::endl;}

    //datatype operator op (argument-list) {body}
    LCD &operator+=(const std::string argu_added_message){
        this->msg+=argu_added_message;
        return *this;//lcd1
    }
LCD &operator++(){
        std::cout << "pre increment ++x is called" <<std::endl;
     this->curser++ ;
     return *this;} //pre increment

// void operator++(int){ this->curser++;} //post increment (it has issue as it should be assigned somewhere before incrementing )
//correct mindset for post increment
int operator++(int){
    std::cout << "post increment x++ is called" <<std::endl;
    int temp = this->curser; //mindset->assign somewhere then increment
    this->curser++;
    return temp;
    }

LCD &operator=(int x){
    std::cout << "assigning called" <<std::endl;
    this->curser = x;
    return *this;
}



bool operator<(const LCD &lcd){return  lcd.msg< this->msg ; }
};

std::string operator+(const LCD &lcd, const std::string &message){
std::cout << "called" <<std::endl;
return lcd.msg + message ;
}



int main(){

LCD lcd1{"LCD_1_Display_more_more"} ;
LCD lcd2{"LCD_2_Display"} ;
std::string added_message {"+added_message"};

lcd1+=added_message; //lcd1.operator+=(added_message);
lcd1.display();

std::string result = lcd1 + added_message; //operator+( LCD , std::string )
std::cout << result << std::endl;

if(lcd1 < lcd2){
    std::cout << "lcd1 is less than lcd2" <<std::endl;
}else{
    std::cout <<"lcd1 is greater than lcd2" <<std::endl;
}
++lcd1; //pre increment

std::cout << lcd1.curser <<std::endl;

// lcd1++; //post increment
//correct mindset for post increment
int c = lcd1++;
int l=c++;

std::cout << l <<std::endl;

LCD lcd4{"Fourth_LCD"};

++lcd4 = 1 ; // 2 operators -> ++ and assign..

}
*/
/*
class Data {
    private:
    std::string msg;
    int curser =0;

    public:
    Data(std::string msg, int curser):msg(msg),curser(curser) {}
bool operator==(const Data &d) const{
    return msg == d.msg && curser == d.curser ;
    //Another Method 
    // return std::tie(msg,curser) == std::tie(d.msg,d.curser);
}
friend std::ostream &operator<<(std::ostream &os,const Data &dt);
bool operator<(const Data &temp){return this ->msg.length()  < temp.msg.length();} //this->curser < temp.length
};

std::ostream &operator<<(std::ostream &os,const Data &dt){
    os << dt.msg << " " <<dt.curser;
    return os;
}

int main(){

Data d2{"second Data",1};

if(d1==d2){
    std::cout << "they r equal" <<std::endl;
}else{
    std::cout << "they arenot equal" <<std::endl;
}

Data d1{"first Data",0};
std::vector<Data> v{
    {"shortest",0} ,{"Mostafa Youssef",1},{"embedded linux longgggg",2}
    };
 
std::sort(v.begin(),v.end());

std::copy(v.begin(),v.end(),std::ostream_iterator<Data>(std::cout,"\n"));

// std::cout << v[0] <<std::endl;


}
*/


// class Data{
// private:
// int curser =0;
// public:
// explicit Data(std::string msg) : msg(msg){} // MISRA RULE (single arguments must add explicit before it)
// std::string msg;
//     void operator()(std::string msg , int curser){ 
//         std::cout<<"Functor called"<<std::endl;
//         std::cout << "old values were: " << *this <<std::endl; //wasnot updated
//         this->msg=msg;//update
//         this->curser=curser;//update
//         std::cout<< "New values are : "<< *this <<std::endl;
//         }
// bool operator==(const Data &d) const{
//     return msg == d.msg && curser == d.curser ; 
// }
//     Data(std::string msg, int curser) :msg(msg) , curser(curser) {}
//     friend int operator+(int param,Data &d);
//     friend std::ostream &operator<<(std::ostream &os , const Data &dt);
//     // friend std::string operator+(std::string msg, Data &d);
// // std::string to_string() {return msg;} // convert to std::string
// explicit operator std::string() {return msg;} //Convert to std::string//before explicit -> no static casting
// };

// std::string operator+(std::string msg, Data &d){return d.msg;}
// std::ostream &operator<<(std::ostream &os , const Data &dt){
// os << dt.msg << " " << dt.curser ;
//     return os;
// }

// int operator+(int param,Data &d){return d.curser + param;}

// int main(){

// Data d1{"Mostafa",10};
// // d1("new value",2); // call functor
// // Data("Temporary instance",5); //temporary instance

// std::string message =static_cast<std::string>(d1)  ;
// std::cout <<message <<std::endl;

// // Data d2 = std::string("check MISRA RULE"); // Implicit casting
// Data d3 = Data(std::string("check MISRA RULE"));


// int x =8 +d1 ; // operator+(std::string("string to add"),d1)
// // int x2 = d1 + std::string ("string to add");// d1.operator+(std::string("String to add"))
// std::cout << x <<std::endl;  
// return 0;
// } 

/*
class String{
private:
char *str; //need a copy constructor
int size;
//NO need for copy constructor for trivial datatypes
// {int , char,bool float,double , (struct,class without any constr or functions)}
public:
String(char* str) : str(str) {}
/*Implicit constructor is created
//1- why the copy constructor is must be to a referance
-> to avoid Infinite Loop
//2- why the copy constructor must be const ?
//referance to R value ?->NO referance to temp(lvalue) that holds r value
->safety// Copying of temporary functions (C++14 will tell u there is and error) C++17 will work without 
String (const String &obj){
str=obj.str;
size=obj.size;
}


String(String &obj){

    size = obj.size;
    str = new char[size]; //allocating in heap with respect to the size
    strcpy(str,obj.str);
    //memory leakage
}


void fun(){std::cout << str <<std::endl;}

void set1stchar(char value){*str = value ;}

};


int main(){

char array [] = "hello";
String t1 {array};
String t2(t1);
t1.set1stchar('A');//effect happened in t2 (normal  copy constructor not ours)
t1.fun();
t2.fun(); 

}

*/

class String{
private:
char *str ;
int size;
public:
String(){ std::cout <<"constructor called"<<std::endl;}
String(char* str){
    size = strlen(str);
    this ->str = new char[size +1];
    strcpy(this->str,str);
}
String(const String &obj){
    std::cout << "copy constructor is called" <<std::endl;
    size = obj.size;
    str = new char [size +1]; // +1 -> for the null ptr 
    strcpy(str, obj.str);
    }

void fun(){std::cout << str << std::endl;}

~String(){
    // delete [] str ;
    str = nullptr ;
    std::cout << "destructor is called" <<std::endl;

}
};

String /* TEMP */get_instance(){
    static char array[] ="hello";
    String t1;//1 constructor called
    return t1;//2 Copy constructor
    //temp(t1)
    //Destructor -> (1)
}

int main (){
char array[] ="hello";
// String t2(get_instance()); //3 t2 (temp) 
String t3{array};
String t4 (t3);
t4.fun();
// t3 = t2; // assigning means t3.operator=(t2) //no creation 
//creation -> constructors ...

return 0;
}

//      OUTPUT using Elide flag in  C++14
// g++ test.cpp -g -std=c++14 -fno-elide-constructors  && ./a.out 
// constructor called
// copy constructor is called
// destructor is called
// copy constructor is called
// destructor is called
// destructor is called

//      OUTPUT using Elide flag in C++17
// g++ test.cpp -g -std=c++17 -fno-elide-construct
// ors  && ./a.out 
// constructor called
// copy constructor is called
// destructor is called
// destructor is called

/*

class String{
private:
// int size;
public:
int *ptr;
String(){} // you need the if for deletion below
//but in this case (default constructor)the good practice is to set the ptr to nullptr;
// like this int*ptr = nullptr; //above when (default constructor)
//if there is no default constructor do the if for deletion ...
String(int value) {
    this->ptr = new int (value); // with this -> no need for if check below for deletion
    std::cout << " constructor called" << std::endl;
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "value: " <<value<< std::endl;
}
~String(){ std::cout << " destructor called" << std::endl;}

String &operator=(const String &obj){
     std::cout << " Assignment operator called" << std::endl;
    //handling self assignment

    if(this == &obj){
    // assert(false); //khaleh yedrab...
    return *this;
    }
    //clean before assigning
    if(this->ptr){ // not mandatory (delete is smart enough)
        delete this->ptr;
        // this->ptr=nullptr;
        this->ptr = new int (*obj.ptr);
    }
     return *this;
}

};

int main(){

String t2(5);
String t3(10);

t3=t2;
t3=t3; // self assignment
std::cout << (*t3.ptr) <<std::endl;
}
*/
/*
int &fun(){
    static int Mostafa = 5;
    return Mostafa;
}

int fun2(){
    static int Mostafa =5;
    return Mostafa;
}

// struct mydata
// {
//     int x;
//     int y;
//     // mydata(int x , int y) : x(x) , y(y) {}
// };

// // mydata D1 = { 1 , 2 } ; //.bss section as it has constructor // .data if no constructor
// mydata d2; //.bss <i guess because of default constructor..>
int main(){

// fun()/*Lvalue (returns referance)*/ /*= 10*//*R value*///;
// int x /*Lvalue*/= fun()/*R value*/;

// std::cout << fun() <<std::endl;
    
// fun2()/*R value*/ =6/*R value*/; // Error 
    
    // int left = fun2();

    // std::string name{"mostafa"};
    // std::string name2 = std::move(name);

    // std::cout << name2 <<std::endl; //Lvalue
    // std::cout << name <<std::endl; //Xvalue // its is empty , moved 

    // int y =10;
    // int &x = y;

    // int &temp = 10 ; // it has to be referance to L value
// int &&rvalueref=10; // value category of rvalueref is a L value
// //type category is a right value referance

// printf("the address of r value ref is: %p\n",&rvalueref);

// const int &ref2 =10; // temp=10; , ref2 is an alias to temp.
//     std::cout << &ref2 << std::endl;
//     return 0;
// }

// /*Move constructor*/
// class String{
// private:
// char *str;
// int size;
// public:
// String() = default;
// String(char * str){
//     size =strlen(str);
//     this->str = new char[size+1];
//     strcpy(this->str,str);
// }

// String(const String &obj){
//    this->size = obj.size;
//    str = new char [size +1];
//    strcpy(this->str,obj.str); 
// }


// String(String &&obj){
//     this->size = obj.size;
//     obj.size =0;
    
//     this->str = obj.str;
//     obj.str=nullptr;
// }
// void fun(){std::cout <<str <<std::endl;}
// };

// int main (){
// char array [] = {"mostafa"};
// String name(array);
// String name2(std::move(name));
// name2.fun();
// name.fun();

// }

/*
class base{
std::string name;
public:
base(std::string name) : name(name){
    std::cout << " [base] Constr" <<std::endl;
}
base(){std::cout << "[base]default const" <<std::endl;}
void print (){std::cout << "print anything instead of name" <<std::endl;}
~base(){std::cout << "[base]default Destru" <<std::endl;}
};
 

class derived : public base {
    public:
    derived(std::string name) : base(name) {
        std::cout << "[Derived] constr" <<std::endl;
    }
    derived(){std::cout << " [Derived] Default constr" <<std::endl;}
~derived(){std::cout << " [Derived] Default Destr" <<std::endl;}
};

int main (){

derived d ;

d.print();
}
*/
/*
class base{
public:
void fun(){std::cout << "base-->1" <<std::endl;}
};

class base2{
public:
void fun(){std::cout << "base-->2" <<std::endl;}
};
*/
/*Multiple inheritance*/
/*
class child : public base , public base2 {
public:
};

int main (){
child obj;

// obj.fun();// which one ?
obj.base::fun();
obj.base2::fun(); //declaration... fun isnot static fun 
}
*/

/*
class base {
public:
virtual void print(){std::cout <<"base" <<std::endl;}
virtual void test(){std::cout <<"test" <<std::endl;}
// vtable ==> virtual table (dynamic binding) (late binding)
};

class derived: public base {
public:
void print(){std::cout <<"derived" <<std::endl;}
};

class derived2: public base {
public:
void print(){std::cout <<"derived2" <<std::endl;}
};

int main(){
    //concept of polymorphism is based on pointer to base class

    derived d;
    derived2 d2;
    base *b = &d;
    b->print();
    b=&d2;
    b->print();
return 0;
}
*/
/*
// Interface Class (after C++ =>)
class base {
public:
virtual void print() = 0; //pure..
virtual void print2() = 0;
virtual void print3() = 0;
};
// abstract class
class base_abstract{
public:
virtual void print () {std::cout << " base abstract " <<std::endl;}
virtual void print2() =0;
};

class data : public base_abstract{
public:
void print() override {std::cout << " data " <<std::endl;}
void print2() override{}
};



class derived : public base {
 void print() override {}

 void print2() override {}

 void print3() override {}
};

int main(){
// data d;
// d.print();
// data d2 =data();
// d2.print();
}
*/
/*
class base {
    public:
virtual void print() {std::cout <<"print_base"<<std::endl;}
};

class derived :public base {
    public:
    void print() override {std::cout <<"print_derived"<<std::endl;}
    void print2();
};

void derived::print2(){std::cout <<"print2"<<std::endl;} 

class derived2 :public base {
    public:
    void print() override {std::cout <<"print_derived_2"<<std::endl;}
    void fun(){}
};

int main(){

base *ptr_base = new derived2();
ptr_base->print();
// ptr_base->print2(); // Error before dynamic casting.
derived2 *ptr_derived_2 = dynamic_cast<derived2 *>(ptr_base);
// ptr_base->print2();
if(ptr_derived_2){
    ptr_derived_2->fun();
    }

}
*/
/*
class mydata{
public:
int x;
int y;
mydata(int param1, int param2) : x(param1) , y(param2) {}
mydata(std::initializer_list<int>v){
    std::cout << "mydata intializer list constr" <<std::endl;
    for(auto i : v){
        std::cout << i << std::endl;
    }
}

};
int main(){
    mydata d{1,2};// aggregate or to intializer list.
    mydata d2 (5,6);// to my own construc
}
*/

// class EnhancedString : public std::string {
// public:
// using std::string::string;

// bool starts_with(std::string prefix){
//     if(this->find(prefix)==0){
//         return true ;
//     } else { return false ;}
// }
// };



// int main(){

// using namespace std::literals; // without this ... raw string  is normal const char *
//     auto raw_string =R"(hello)"s;
//     std::cout << raw_string << std::endl;

// EnhancedString s = "Hello, World";
// std::cout << s.starts_with("Hello") <<std::endl;

// return 0;
// }

/*
int main (){

std::array<int,5> arr ={1,2,3,4,5};
std::cout << arr.size() <<std::endl;
std::cout << arr.max_size() <<std::endl;
// std::cout << arr.at(12) <<std::endl; //check 
arr.at(2)=12;


return 0;
}
*/

/*Practice Std !!!!*/

/*Algorithms lec*/
/*
int main(){

    std::vector <int> n {13,12,49,56,95,311,499,64};
    std::vector <int> n2 {13,13,49,56,95,31,49,64};
    std::cout << std::all_of(n.begin(),n.end(),[](int i){return i > 10;})
              << std::endl;

     std::cout << std::any_of(n.begin(),n.end(),[](int i){return i > 10;})
              << std::endl;

     std::cout << std::none_of(n.begin(),n.end(),[](int i){return i > 10;})
              << std::endl;
    
    std::for_each(n.begin(),n.end(),[](int i){std::cout << i << std::endl;});
    std::cout << std::endl;
    std::cout << std::count(n.begin(),n.end(),49) << std::endl;
    std::cout << std::count_if(n.begin(),n.end(),[](int value){return value >=20;}) << std::endl;
    auto pair= std::mismatch(n.begin(),n.end(),n2.begin(),n2.end()); 
    std::cout << *pair.first << " " << *pair.second <<std::endl;
        auto pair2= std::mismatch(n.begin(),n.end(),n2.begin(),n2.end(),[](int a, int b){return a!=b ;}); 
    std::cout << *pair2.first << " " << *pair2.second <<std::endl;

    auto it = std::find (n.begin(),n.end(),12);
    if(it !=n.end())
    {
        std::cout << "found at: " <<std::distance(n.begin(),it) <<std::endl;
    }
    auto it2 = std::find_if(n.begin(),n.end(),[](int value){ return value>=100;});
    if(it2 != n.end())
    {
        std::cout << "found at: " << std::distance(n.begin(),it2) <<std::endl;
    }
    return 0;
}
*/
/*
class Mycustomexception : public std::exception {
    public:
    const char *what() const noexcept override {return "Mycustom exception";}
};


int main(){

try{
    throw Mycustomexception();
} catch( Mycustomexception &e){
    std::cout << " 1- caught exception: " << std::endl;
} catch (const std::exception &e){
    std::cout << "2- caught excep " <<std::endl;
}catch(...){
    std::cout << " 3- exception caught" << std::endl;
}
}
*/
/*
class Data{
int x;
int y;
public:
Data(int x, int y): x(x) ,y(y) {}

};

// void fun(std::unique_ptr<int>temp) { std::cout << *temp <<std::endl;}
void fun(const std::unique_ptr<int>&temp) { std::cout << *temp <<std::endl;}
int main(){
    // std::unique_ptr<Data> ptr_data = std::make_unique<Data>(2,3);
    // std::unique_ptr<int> ptr_int = std::make_unique<int>(1);
    // std::unique_ptr<int> ptr2_int = std::make_unique<int>(1);



// ptr_data =ptr_int ; // Error as copy const and assignment operator is deleted.
// ptr_int = std::move(ptr2_int); // ptr_int deleted and ptr2 is moved !

// fun(ptr2_int); // Error when the func isnot const and refrenced !! copy constructor is deleted !
// fun(std::move(ptr_int)); // will work in normal case line 1284
// fun(ptr_int); //this will work when temp is refrence
// std::cout << ptr_int.get() << std::endl;
// std::cout << ptr_int.release() << std::endl;




// auto fndeleter = [](int *p){
//     std::cout << "deleteing p \n" ;
//     delete p;
// };

// std::unique_ptr<int,decltype(fndeleter)> p4 (new int (3),fndeleter);

//best practice for sockets and file descriptor -> create class with desctructor to close socket or file descriptor
//otherwise u can use unique pointers

// std::shared_ptr<int> p = std::make_shared <int> (10);
// std::shared_ptr<int> p2 = p;

// std::cout << " p.use_count() = " << p.use_count() <<std::endl;
// p2.reset();
// std::cout << " p.use_count() = " << p.use_count() <<std::endl;
// p.reset();
// std::cout << " p.use_count() = " << p.use_count() <<std::endl;

return 0;
}
*/
/*
//1-basic template single argument
template <typename T> T division(T x ,T y) {return x / y ;}
//2-basic template multiple arguments
template<typename T, typename U> auto division(T x, U y) {return x / y;}
//3- class template
template <typename T> class container{ //generic
    public:
    T value;
    container(T val) : value(val) {}
    void print(){std::cout << value << std::endl;}
};
//4-class template with standalone fn
template<typename T>
class container2{
    public:
    T value;
    container2(T val ) : value(val) {}
    template<typename U>
    void add(U val){value += val;} 
        void print(){std::cout << value << std::endl;}

};
//5- explicit specialization
template <> class container<float>{ //priority for float ...
    public:
    float value;
    container (float val):value(val){}
};
//6-partial specialization
template<typename T, typename U> struct array { //primary template
array(T t, U u) {std::cout << " primary temp is called" <<std::endl;}
};
template<typename T> struct array<T,T> {//partial template
array(T t, T u) {std::cout << " partial temp is called" <<std::endl; }
};
//7-default template arguments
template<typename T, typename U = int> class A{
    public:
    T t;
    U u;
    A(T t,U u) : t(t) , u(u) {}
};
//8-const template expression
template<typename T , int Size> class Myarray{
public:
T data[Size];
Myarray(){
    for(int i =0; i<Size ; i++){
        data[i]= i;
        std::cout << data[i] <<std::endl;
    }
}
};
//9- variadic arguments
void print(){}
template<typename T , typename... Args> void print(T t, Args... arg){
    std::cout << t<<std::endl;;
    // std::cout << "Size : "<<sizeof...(arg) <<std::endl;
    print(arg...); //NOT Recursive --> Generation !!!
}
//t=1,arg=2.5, "hello" , 3.5f
//t=2.5 , arg="hello"
//t=hello , arg = 3.5f
//t=3.5f , arg=0
//t=0


// int main(){

// std::cout << division(3,2) <<std::endl;
// std::cout << division(3.5,2.6) <<std::endl;
// std::cout << division(3.6f,2.4f) <<std::endl;
// std::cout << division(3.4f,2) <<std::endl;

// container<int> c(15);
// c.print();

// container<std::string> c2 ("hello");
// c2.print();

// container2<int>c3(10);//auto detection c++17
// c3.add(5.5); //auto detection c++14 //no need for << <float> >>
// c3.print();

// array<int,float>a(1,1.25); // primary
// array<int,int> a2 (1,3);    //partial

// A<int>a5(2,3);
// A<int,double>a7(2,5.5); //override with double..

// Myarray<int,5> arr;

// print(1, 2.5,"Hello",3.5f);
// print(1, 2.5,"Hello",3.5f,5.5);
// print(1);
// return 0;
// }
*/








