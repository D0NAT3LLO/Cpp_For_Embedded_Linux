#include<iostream>

int search (int arr[],int size, int number){
    for (int index = 0; index < size ; index++ ){
        if(arr[index] == number ){
            std::cout << " the index of the number is : " << index << std::endl ;
            return 0;
        }
    }
        std::cout << "Number is not found in the array " << std::endl;
        return 0;
}

int main (){
int arr[]={1,2,3,4,5,6,7,8,9};
int size = sizeof(arr) / sizeof(arr[0]);
int number = 0;
std::cout << "Enter the number to be searched: " ;
std::cin >> number ;
search(arr,size,number); 
}