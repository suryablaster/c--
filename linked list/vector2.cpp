#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
}
cout<<endl;
}

int main (){


vector<int> v;

int n;
cin>>n;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}

v[4]=10;

printvector(v);















    return 0;
}