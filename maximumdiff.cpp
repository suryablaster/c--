#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

int maxdiff=INT_MIN;

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int diff=a[j]-a[i];
        if(diff>maxdiff){
            maxdiff=diff;
        }
    }
}

cout<<maxdiff;



    return 0;
}