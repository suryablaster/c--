#include<bits/stdc++.h>
using namespace std;


void print(int n){
    if(n==0) return;

    cout<<n<<" ";
    print(n-1);
}

void print1(int n){
    if(n==0) return;

    print1(n-1);
    cout<<n<<" ";
}


int fact(int n){
    if(n==0 || n==1){
        return n;
    }

    return n*fact(n-1);
}

int fib(int n){
if(n<=1) return n;

return fib(n-1)+fib(n-2);

}

int main(){

// print(5);
// cout<<endl;
// print1(5);






// int ans=fact(5);

// cout<<ans;

int ans = fib(1);
cout<<ans;
    return 0;
}