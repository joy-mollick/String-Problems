#include<bits/stdc++.h>

using namespace std;

// greedy and two pointers

typedef long long ll;

// concatenation lexicographically small

bool comp(string &a,string &b)
{
    return (a+b)<(b+a);
}


int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n;
    cin>>n;
    vector<string>v;
    while(n--)
    {
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++) cout<<v[i];
    cout<<endl;
}
