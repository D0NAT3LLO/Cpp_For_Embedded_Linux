#include <iostream>
#include <algorithm>
int main(){
std::vector<int>v= {15,29,11,56,88,99,45,12};
//Ascending
std::sort(v.begin(),v.end(),[](int num1 ,int num2){
return num1 < num2 ;
});
std::cout << "Ascending order:" << " ";
std::for_each(v.begin(),v.end(),[](int num){
    std::cout << num <<" ";
});
std::cout << std::endl;
//Descending
std::sort(v.begin(),v.end(),[](int num1,int num2){
return num1 > num2;
});
std::cout<< "Descending Order:" <<" ";
std::for_each(v.begin(),v.end(),[](int num){
    std::cout << num << " ";
});
std::cout << std::endl;

/*Method (Reverse printing without sorting) for Descending
std::cout<< "Descending Order:" <<" ";
for(int i = 7; i < v.size(); --i){
    std::cout << v[i] << " ";
}
std::cout << std::endl;
*/
}