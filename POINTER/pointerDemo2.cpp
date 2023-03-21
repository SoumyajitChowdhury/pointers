#include<iostream>
using namespace std;
int main(){

    int x,y;//declare x and y ,so x and y has garbeg value

    cin>>x>>y;//takinng input of x and y

    int *ptrx = &x;//&x fatches address of x and then stores in ptrx

    int *ptry = &y;//&y fatches address of y and then stores in ptry

    int result;//declare result so it has garbage value

    int *ptr_result = &result;

    *ptr_result = *ptrx + *ptry;//adding the content of ptrx and ptry and stores in ptr_result

    cout<<"Sum is "<<*ptr_result<<" "<<result<<endl;
    return 0;
}