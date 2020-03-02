#include<bits/stdc++.h>

using namespace std;

// string matching

typedef long long ll;


int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    string S1="";
    string S2="";
    string S3="";
    for(int i=0;i<s1.size();i++)
    {
        char c=s1[i];
        c=tolower(c);
        if(s1[i]>='a' && s1[i]<='z') S1=S1+c;
        else if(s1[i]>='A' && s1[i]<='Z') S1=S1+c;
    }
    for(int i=0;i<s2.size();i++)
    {
        char c=s2[i];
        c=tolower(c);
        if(s2[i]>='a' && s2[i]<='z') S2=S2+c;
        else if(s2[i]>='A' && s2[i]<='Z') S2=S2+c;
    }
    for(int i=0;i<s3.size();i++)
    {
        char c=s3[i];
        c=tolower(c);
        if(s3[i]>='a' && s3[i]<='z') S3=S3+c;
        else if(s3[i]>='A' && s3[i]<='Z') S3=S3+c;
    }
    //cout<<S1<<" "<<S2<<" "<<S3<<endl;
     vector<string> arr(3);
     arr[0]=S1;arr[1]=S2;arr[2]=S3;
     sort(arr.begin(),arr.end());
    vector<string>v;
    v.push_back(arr[0]+arr[1]+arr[2]);
    while(next_permutation(arr.begin(),arr.end()))
    {
        string p;
        p=(arr[0]+arr[1]+arr[2]);
        v.push_back(p);
        //cout<<(p)<<endl;
    }
    int n;
    cin>>n;
    string q;
    while(n--)
    {
        cin>>q;
        string nw="";
        for(int i=0;i<q.size();i++)
        {
            char c=q[i];
            c=tolower(c);
            if(q[i]>='a' && q[i]<='z') nw=nw+c;
            else if(q[i]>='A' && q[i]<='Z') nw=nw+c;
        }
       // cout<<nw<<endl;
        bool ok=false;
        for(int k=0;k<v.size();k++)
        {
            if(nw==v[k]) ok=true;
        }
        if(ok) cout<<"ACC"<<endl;
        else cout<<"WA"<<endl;
    }
}
