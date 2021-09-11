#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(key<a[mid]){
            e=mid-1;
        }else if(key>a[mid]) {
            s=mid+1;
        }else{
            if(mid==n-1 || a[mid]!=a[mid+1]){
                return mid;
            }else{
                s=mid+1;
            }
        }
    }

    return -1;
}

int main(){

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}


int key;
cin>>key;

cout<<binarySearch(a,n,key);



    return 0;
}