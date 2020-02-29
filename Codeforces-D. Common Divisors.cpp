    #include<bits/stdc++.h>
    using namespace std;

    string s1,s2;
    int main()
    {
      ios_base::sync_with_stdio(0);

      int ans=0;
           getline(cin, s1);
           getline(cin, s2);
       string s;
       s.erase();
       int n=s1.length();
       int m=s2.length();
       int cont=0;
       for(int i=0;i<n;i++)
       {
           s+=s1[i];
           if(i>=m) break;
           if(n%(i+1)!=0) continue;
           if(m%(i+1)!=0) continue;

    //if(ok(s,s1) && ok(s,s2) ) cont++;
    bool yes1 = true, yes2 = true;
    int kol = n / (i + 1);
    string ss1 = "";
    for(int k = 0; k < kol; k++)
    ss1 += s;
    if(ss1 != s1)
    yes1 = false;
    kol = m / (i + 1);
    string ss2 = "";
    for(int k = 0; k < kol; k++)
    ss2 += s;
    if(ss2 != s2)
    yes2 = false;
    if(yes1 && yes2)
    ans++;
       }
       cout<<ans<<'\n';
    }
