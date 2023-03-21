#include<iostream>
using namespace std;
int main(){

    int x = 9;
    int y = 2;
    int *ptr = &x;

   // ptr = 5; we cant do this as ptr only stores address nothing else

   //*ptr = &y; this wont work as we can't store address in int bucket

    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address stored inside ptr : "<<ptr<<endl;
    cout<<"Address of ptr itself : "<<&ptr;//points the address of the ptr bucket not the address stored in the ptr bucket

    return 0;
}