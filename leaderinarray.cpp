#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}


for(int i=0;i<n;i++){
    int flag=false;
    for(int j=i+1;j<n;j++){

        if(a[i]<=a[j]){
            flag=true;
            break;
        }
    }
    if(flag==false) cout<<a[i];
}







    return 0;
}