#include<bits/stdc++.h>

using namespace std;

// simple hashing and implementation 

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int n=s1.length();
    int p=s2.length();
    map<char,int>m;
    for(int i=0;i<n;i++) m[s1[i]]++;
    bool ok=true;
    for(int j=0;j<p;j++)
    {
        if(s2[j]==' ') continue;
        if(m[s2[j]]>0) m[s2[j]]--;
        else ok=false;
    }
    if(ok) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    return 0;
}
