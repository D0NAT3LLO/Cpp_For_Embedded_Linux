#include<iostream>
//Fn to find the max of array
int find_max(int arr[],int n){
for(int  i=1; i <n; i++){
    if(arr[0] < arr[i]){
        arr[0] = arr[i];
    }
}
return arr[0];
}
int main(){
int arr[]={15,46,59,32,56,18,19,88,100};
int n = sizeof (arr) / sizeof (arr[0]);
int result = find_max(arr,n);
std::cout <<"The Maximum number in the array is : " << result << std::endl; 
}