#include <iostream>

void merge(int arr1[],int n,int arr2[],int m ,int arr3[])
{
    int k =0;
for (int i =0; i < n; i++){
    arr3[k]=arr1[i];
    k++;
    }
for(int j=0 ; j < m ; j++){

    arr3[k]=arr2[j];
    k++;
    }
}

int main (){
int arr1[]={1,2,3,4,5};
int n = sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={6,7,8,9,10,11};
int m = sizeof(arr2)/sizeof(arr2[0]);
int arr3[n+m];

merge(arr1,n,arr2,m,arr3);
//printing the result
for(int i =0; i<n+m ; i++){
std::cout << arr3[i] << " " ;
}
std::cout << std::endl;
}