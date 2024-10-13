#include<iostream>

int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int n = sizeof(arr)/sizeof(arr[0]);
std::cout << "Even Numbers : " ;
for (int i =0; i < n ; i++){
    if (arr[i] % 2 == 0){
        std::cout << arr[i] << " " ;
    }
}
std::cout << std::endl;
std::cout << "Odd Numbers : " ;
    for (int i =0; i < n ; i++){
    if(arr[i]%2){
         std::cout << arr[i] << " " ;

    }
    }
std::cout << std::endl;
}