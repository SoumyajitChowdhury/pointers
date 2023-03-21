#include<iostream>
using namespace  std;
int main(){
    int arr[5]={2,5,9,1,6};
    int *ptr = (arr + 2);
    cout<<*ptr<<endl;
    return 0;
}