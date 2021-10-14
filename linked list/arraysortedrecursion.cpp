#include<iostream>
using namespace std;


bool sorted(int a[],int n){
    int i=0;
    if(i==n){
        return true;
    }

    if(a[i]<a[i+1]){
       return sorted(a+1,n-1);
    }else{
        return false;
    }

}

int main(){



int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

cout<<sorted(a,n);






















    return 0;
}