#include<bits/stdc++.h>

using namespace std;

// greedy approach and dp
// make si so that till si+1 there is no same consecutive characters

int main()
{
    string s;
    cin>>s;
    int sz=s.length();
    for(int i=1;i<sz;i++)
    {
        if(s[i-1]!=s[i]) continue;
        else if(s[i-1]!='a' && (i==sz-1||(s[i+1]!='a'))) s[i]='a';
        else if(s[i-1]!='b' && (i==sz-1||(s[i+1]!='b'))) s[i]='b';
        else if(s[i-1]!='c' && (i==sz-1||(s[i+1]!='c'))) s[i]='c';
        else if(s[i-1]!='d' && (i==sz-1||(s[i+1]!='d'))) s[i]='d';
    }
    cout<<s<<endl;
    return 0;
}
