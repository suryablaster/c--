#include<iostream>
using namespace std;

int subarraysum(int a[],int n){


    int maxsum=a[0];
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum =sum +a[j];
          maxsum = max(sum,maxsum);
        }
       
    }
   return maxsum;
}

int main(){

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

cout<<subarraysum(a,n);

    return 0;
}