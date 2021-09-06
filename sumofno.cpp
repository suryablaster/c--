#include<iostream>
using namespace std;
int sumno(int n){
    if(n==0) return 0;

    int lastdigit=n%10;

    return lastdigit+sumno(n/10);
}

int main(){


    int n;
    cin>>n;

   cout<<sumno(n);


   return 0;

}