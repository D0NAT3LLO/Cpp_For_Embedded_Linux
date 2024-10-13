#include <iostream>
#include <numeric>


int main (){

int size = 9991; //from 10 to 1000
int arr[size];

std::iota(arr,arr+9991,10);

for (auto i : arr)
    std::cout << ' ' << i ;
std::cout << std::endl;

return 0;
}