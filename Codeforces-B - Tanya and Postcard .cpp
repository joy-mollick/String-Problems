#include<bits/stdc++.h>
using namespace std;

long int mod=1e9+7;

typedef long long int ll;

int main()
{

  string s,t;
  cin>>s>>t;
  map<char,int>m;
  for(int i=0;i<t.size();i++) {m[t[i]]++;}
  int y=0,w=0;
  char C,c;
  for(int i=0;i<s.size();i++)
  {
       c=s[i];
      if(m[c])
      {
          y++;
          m[c]--;
          s[i]='?';// it is used
      }
  }

  // find oppossite maximum
  for(int i=0;i<s.size();i++)
  {
      if(s[i]!='?'){ // it is not used
       c=s[i];
      if(c>='a'&&c<='z'){
       C=c-32;}
      else {C=c+32;}

      if(m[C])
      {
          w++;
          m[C]--;
      }
      }
  }

  cout<<y<<" "<<w<<endl;
}
