#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<long long,pair<int,int>> mp;
    for(int i=1;i<=n;i++){
        long long x;
        cin>>x;
        if(mp.find(x)==mp.end()) mp[x]={i,i};
        else mp[x].second=i;
    }
    for(auto& p:mp)
        cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<"\n";
}