#include<iostream>
using namespace std;

void reverse(int a[],int start,int end){
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main(){

int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}


int d;
cin>>d;

reverse(a,0,d-1);
reverse(a,d,n-1);
reverse(a,0,n-1);




for(int i=0;i<n;i++){
    cout<<a[i];
}



    return 0;
}