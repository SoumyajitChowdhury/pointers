#include<iostream>
using namespace std;
int main(){
    int x = 20;
    int *ptr = &x;
    cout<<ptr<<" "<<(ptr+1)<<endl;
    return 0;
}