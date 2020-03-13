#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

// this is greedy one

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1;
    cin>>s;
    int q;
    cin>>q;
    int ans=0;
    int first_char=0;
    int last_char=0;
    // finding the substring consisting of only s1 or reverse of s1 then delete minimum character
    while(q--)
    {
        cin>>s1;
        first_char=0;
        last_char=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s1[0]) first_char++;
            else if(s[i]==s1[1]) last_char++;
            else
            {
                ans=ans+min(first_char,last_char);
                first_char=0;
                last_char=0;
            }
        }
        ans=ans+min(first_char,last_char);// if till last character also contains substring of s1
    }
    cout<<ans<<'\n';
}
