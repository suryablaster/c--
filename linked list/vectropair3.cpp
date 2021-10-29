#include<bits/stdc++.h>
using namespace std;


int main(){



// vector<pair<int,int> > v={{1,2},{2,3},{3,4}};

// for(auto it : v){
//     cout<<(*it).first<<" "<<(*it).second<<endl;
// }

vector<int> v={1,2,3,4,5};

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

vector<int> :: iterator it;
for(it=v.begin();it!= v.end();it++){
    cout<<(*it)<<" ";
}


vector<pair<int,int> > vp={{1,2},{2,3},{3,4},{4,5}};
for(int i=0;i<vp.size();i++){
    cout<<vp[i].first<<" "<<vp[i].second<<endl;
}
vector<pair<int,int>> :: iterator ot;
for(ot=vp.begin();ot!=vp.end();ot++){
    cout<<(*ot).first<<" "<<(*ot).second<<endl;
}

cout<<endl;


for(auto &value : v){
    value++;
    cout<<value;
}
cout<<endl;
for(auto &value : v){
    value++;
    cout<<value;
}


    return 0;
}