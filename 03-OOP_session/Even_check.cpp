#include <iostream>

class Check_arr {
public:
Check_arr(int *array,int array_size): arr(array) , size(array_size) {}

//Using Recursion
//check if all Odd
bool hasEven(int index = 0 ){
// if index exceeds size therefore we checked the whole array
    if (index>=size){return false;} // base case
    if(arr[index]%2==0){return true ;}

return hasEven(index+1); // if index++ -> segmentation fault
}
//to check if all Even 
bool hasOdd(int index =0){
    if(index>=size){return false;}
    if(arr[index]%2 !=0){return true;}

return hasOdd(index+1);
}

private:
int *arr;
int size;
};

int main(){

int arr1[]={1,3,5,7,9};
int size_arr1 = sizeof(arr1) / sizeof(arr1[0]) ;
int arr2[]={3,5,8,9};
int size_arr2 = sizeof(arr2) / sizeof(arr2[0]) ;
int arr3[]={2,4,6,8};
int size_arr3 = sizeof(arr3) / sizeof(arr3[0]) ;

Check_arr instance1 (arr1,size_arr1);
Check_arr instance2 (arr2,size_arr2);
Check_arr instance3 (arr3,size_arr3);

if (instance1.hasEven()){
    std::cout << "the array has at least one even number" <<std::endl;
}
else {std::cout << "the array does not have an even number" << std::endl;}

if (instance2.hasEven()){
    std::cout << "the array has at least one even number" <<std::endl;
}
else {std::cout << "the array does not have an even number" << std::endl;}


if (instance3.hasOdd()){
    std::cout << "the array has at least one odd number" <<std::endl;
}
else {std::cout << "the whole array is even " << std::endl;}

}