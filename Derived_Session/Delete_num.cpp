#include<iostream>

int Remove(int arr[],int size, int number){
    int index = 0;
    int flag = 1; // raise flag in case the number is not in the array
    for (index = 0; index < size ; index++ ){
        if(arr[index] == number ){
            std::cout << " the index of the number is : " << index << std::endl ; 
            --flag;
            break;      
        }
    }
    if(flag==1){ 
            std::cout << "The number is not found in the array " <<std::endl;
            return 0;
    }
    if(index<size){
        size = size - 1; // reduce the size of the array 
        //to shift elements
        for (int j = index; j < size; j++){
            arr[j]=arr[j+1];
        }
    }
std::cout << "Array after removal : " ; 
        return size;
}



int main (){
int arr[]={1,2,3,4,5,6,7,8,9};
int size = sizeof(arr) / sizeof(arr[0]);
int number = 0;
std::cout << "Enter the number to be removed: " ;
std::cin >> number ;
int newsize = Remove(arr,size,number); 
for (int i =0; i < newsize; i++){
    std::cout << arr[i] << " ";
}
std::cout << std::endl;
}
