#include<bits/stdc++.h>

using namespace std;

// two pointer problem
// bad problem not standard

int main()

{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    int k;
    cin>>n;
    k=n;
    string s;
    string heart="";
    while(n--)
    {
        cin>>s;
        heart+="<3"+s;
    }
    heart=heart+"<3";
    cin>>s;
    int i=0;
    int j=0;
    // i for iterating final message
    // j for iterating exact message
    for(;i<s.size(); i++)
    {
        if(j<heart.size() && heart[j]==s[i]) j++;
    }
    int len=heart.size();
    if(j==len) {cout<<"yes"<<endl;}
    else cout<<"no"<<endl;
}
