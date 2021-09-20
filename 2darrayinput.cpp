#include<iostream>
using namespace std;

int main(){
//2d array input and output row wise 
//we can do it colomun wise also 
int m,n;
cin>>m>>n;

int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
}



















    return 0;
}