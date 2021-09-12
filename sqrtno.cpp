#include<iostream>
using namespace std;

int sqrt(int n){
int i=1;
while(i*i<=n){
    i++;

}

return i-1; 

}

int main(){

int n;
cin>>n;

cout<<sqrt(n);





    return 0;
}
