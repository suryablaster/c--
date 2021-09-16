#include<iostream>
using namespace std;

void selectionsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int mino = INT_MAX;
        for(int j=i+1;j<n;j++){

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

selectionsort(a,n);


for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}



    return 0;
}