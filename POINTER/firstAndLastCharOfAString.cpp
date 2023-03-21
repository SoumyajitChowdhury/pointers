//W.A.P to find the first and last occurance of a char of a string
#include<iostream>
using namespace std;

void findFirstAndLastOccurance(string s,char ch,int *first,int *last){
    for(int i = 0;i<s.size();i++){
        if(s[i]==ch){
            *first=i;
            break;
        }
    }
    for(int i = s.size()-1;i>=0;i--){
        if(s[i]==ch){
            *last=i;
            break;
        }
    }
}
int main(){

    string s = "aaabac";
    char ch = 'a';
    int first = -1;
    int last = -1;
    int *ptr_first = &first;
    int *ptr_last = &last;

    findFirstAndLastOccurance(s,ch,ptr_first,ptr_last);
    cout<<first<<" "<<last<<endl;

    return 0;

} 