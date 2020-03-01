#include<bits/stdc++.h>

using namespace std;

// greedy and prefix

typedef long long ll;

int main()

{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    map<char,ll>m;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++) m[s[i]]++;
    map<char,ll>::iterator it;
    ll ans=0;
    for(it=m.begin();it!=m.end();it++)
    {
        ll freq=(it->second);
        ans=ans+(freq*(freq-1ll))+(freq);
    }
    cout<<ans<<'\n';
}
