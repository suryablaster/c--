#include<iostream>
using namespace std;
#include<string>

void reverse(string s){
    if(s.length()==0){
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}




int main(){

string str = "surya";

reverse(str);

    return 0;
}