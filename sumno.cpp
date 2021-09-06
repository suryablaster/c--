#include<iostream>
#include<climits>
using namespace std;

void selectionSOrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n;j++){
            if(a[j]<a[i]){
                swap(a[j],a[i]);
            }
        }
    }
}

int main(){
    
int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

selectionSOrt(a,n);

for(int i=0;i<n;i++){
    cout<<a[i];
}







}