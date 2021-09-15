#include<iostream>
using namespace std;

int findpeak(int a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]>a[mid+1] && a[mid-1]<a[mid]){
            return mid;
        }
        else if(a[mid]<a[mid+1]){
            s=mid+1;
        }
        else{
            e=mid-1;
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

cout<<findpeak(a,n);


    return 0;
}
