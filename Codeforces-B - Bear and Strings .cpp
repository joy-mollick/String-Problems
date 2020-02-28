    #include<bits/stdc++.h>
    using namespace std;

    long int mod=1e9+7;

    typedef long long int ll;

    int main()
    {
      ll ans=0ll;
      int i,j;
      string s;
      cin>>s;
      ll n=s.size();
      string h="";
      ll last=-1;
      for( i=0;i<s.size();i++)
      {
          for( j=i;j<=i+3&&j<s.size();j++)
          {
              h=h+s[j];
          }
          if(h=="bear")
          {
              ll pos=i+3;
              ll dist=n-pos;// from pos to n all indices will be included into pair with i 
              dist=dist*(i-last);// and 0 to new i all indices will be paired up to dist but already i to last has been paired
              ans=ans+dist;
              last=i;
          }
          h="";
      }
      cout<<ans<<'\n';
    }
