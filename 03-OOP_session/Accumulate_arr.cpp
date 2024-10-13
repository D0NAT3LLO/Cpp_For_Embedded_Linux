#include <iostream>
#include <numeric>

int main (){

int arr [] = {5,4,10,1,6,3,1,7,3};
int size = sizeof(arr) / sizeof(arr[0]);

int SUM = std::accumulate(arr,arr+size,0);
std::cout << SUM << std::endl;

}