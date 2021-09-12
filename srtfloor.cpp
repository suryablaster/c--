#include<iostream>
using namespace std;

int sqrt(int n){

    if(n==0 || n==1){
        return n;
    }

    int low=1;
    int high=n;
    int ans;

    while(low<=high){
        int mid=(low+high)/2;

        if(mid*mid==n) return mid;

        if(mid<=n/mid){
            low=mid+1;
            ans=mid;
        }else{
            high=mid-1;
        }

    }

    return ans;

}

int main(){

int n;
cin>>n;

cout<<sqrt(n);





    return 0;
}
