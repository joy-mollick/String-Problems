#include<bits/stdc++.h>

using namespace std;

// greedy and two pointers

typedef long long ll;

#define inf 1e9

int S[26];
int P[26];

int main()

{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    string s;
    string p;

    cin>>s;
    cin>>p;

    int s_lngth=s.length();
    int p_lngth=p.length();
    if(p_lngth>s_lngth)
    {
        cout<<"0"<<endl;
        return 0;
    }
    int q=0;

    for(int i=0;i<p_lngth;i++)
    {
        P[p[i]-'a']++;
         if(s[i]=='?') q++;
        else S[s[i]-'a']++;
    }

    ll cont=0ll;
    int qstn=0;
    int i=0;
    int j=p_lngth-1;

    // we will iterate through the i to j check substr(i,j) is a substring ? or not ? keeping distance between i and j equal to p length .Beacuse it is substring not subsequence
    while(j<s_lngth)
    {
        qstn=0;
        for(int c=0;c<26;c++)
        {
            if(S[c]>P[c]) // substring of i to j will hold some charcters those are not in p ,so it is not possible to make substring p
            {
                qstn=inf;
                break;
            }
            else {qstn=qstn+P[c]-S[c];}
        }
        if(qstn<=q) {cont++;}

        if(s[i] == '?') q--;
        else S[s[i] - 'a']--;
        i++;// it is left index of substr(i,j)

        j++;
        if(j==s_lngth) break;// otherwise it will cause out of bound error
        if(s[j]=='?') q++;
        else S[s[j]-'a']++;
    }
    cout<<cont<<endl;
}
