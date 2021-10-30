#include<bits/stdc++.h>
using namespace std;


int main(){

stack<int> s;

int n;
cin>>n;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s.push(a);
}



while(s.size() != 0){
    cout<<s.top()<<" ";
    s.pop();
}





















    return 0;
}