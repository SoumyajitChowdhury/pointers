#include<iostream>
using namespace  std;
int main(){

    int arr[2]={5,4};

    int *ptr = &arr[0];
    cout<<(*ptr)++<<endl;//here (*ptr) exicute first and go to the address ptr then return it and updet it
    cout<<arr[0]<<" "<<arr[1]<<endl;

    return 0;
}