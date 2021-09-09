#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key){
    int ans;
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            ans= mid;
        }else if(key<a[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }

    if(a[ans]==a[ans-1]){
      ans=ans-1
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