#include<bits/stdc++.h>
using namespace std;

long int mod=1e9+7;

typedef long long int ll;

int main()
{
  int n;
  cin>>n;
  string s;
  map<string,int>m;
  int mx=0;
  //
  while(n--)
  {
      cin>>s;
      m[s]++;
      mx=max(m[s],mx);
  }
  cout<<mx<<'\n';

}
