#include<bits/stdc++.h>

using namespace std;

// greedy and prefix

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    s1.erase();
    string s="abcd";
    while(s1.length()<100001)
    {
        s1=s1+s;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cout<<s1[i];
    cout<<endl;
}
