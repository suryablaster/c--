#include<bits/stdc++.h>
using namespace std;

int ceiling(int a[],int n,int target){

    int s=0;
    int e=n-1;

    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==target){
            return a[mid];
        }else if(a[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }

    return a[s];

}

int main(){
 
int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

int target;
cin>>target;

int ans = ceiling(a,n,target);
cout<<ans;
 return 0;
}
