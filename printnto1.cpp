#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;
    cout<<n;
    print(n-1);
    
}

int main(){

int n;
cin>>n;



print(n);










    return 0;
}