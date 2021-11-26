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

int sum(int n){
    if(n==0) return 0;

    return  sum(n-1)+n;




}


bool fun(string str ,int s,int e)
{
    if(s>=e/2) return true;


        if(str[s]==str[e]){

           return fun(str,s+1,e-1);
            
        }else{
            return false;
        }


}


int sumof(int n){
    if(n/10==0) return 0;

    return sumof(n/10)+n%10;
}



int main(){

// print(5);
// cout<<endl;
// print1(5);






// int ans=fact(5);

// cout<<ans;

// int ans = fib(1);
// cout<<ans;


// int ans= sum(3);
// cout<<ans;

// cout<<fun("racecarx",1,5);


cout<<sumof(1234);

    return 0;
}