    #include<bits/stdc++.h>
    using namespace std;

    long int mod=1e9+7;

    typedef long long int ll;

    int main()
    {
       int n;
       string s,s1;
       cin>>n;
       string arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       bool fnd=true;
       int res=INT_MAX;
       map<string,int>m;
       s=arr[0];
       s1=s;
       while(true)
       {
           if(m[s]>0) break;
           m[s]++;
           s1=s;
           char c=s[0];
           s.erase(s.begin(),s.begin()+1);
           s=s+c;
       }
       for(int i=0;i<n;i++) arr[i]=arr[i]+arr[i];
       map<string,int>::iterator it;
       for(it=m.begin();it!=m.end();it++)
       {
           int ans=0;
           string p=(it->first);
           for(int i=0;i<n;i++)
           {
                int iter=arr[i].find(p);
               if(iter!=string::npos)
               {
                   ans=ans+iter;
               }
               else fnd=false;

           }
           res=min(res,ans);
       }
       if(!fnd) cout<<"-1"<<endl;
       else
       cout<<res<<endl;
    }
