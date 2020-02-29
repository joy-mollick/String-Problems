    // You can do it by O(n^2) , but this is worthy ,So you have to use binary search which will cost O(nlogn) 
    
    #include<bits/stdc++.h>
    using namespace std;

    long int mod=1e9+7;
    #define N 200005
    typedef long long int ll;

    int pos[N];
    int n,m;
    bitset<N>has;// it will make set or unset ith value of this array
    string t,s;

    bool isSubSequence(int range)
{
   has.reset();
   for(int p=1;p<=range;p++) has.set(pos[p]-1);// which are  erased
   int j=0;
   for (int i=0; i<n&&j<m; i++) {
       if (!has.test(i)&&(s[j] == t[i]))
         j++;
   }

   return (j==m);
}

    int main()
    {
       cin>>t>>s;
       int i;
       n=t.size();
       m=s.size();
       for( i=1;i<=n;i++) cin>>pos[i];
       int ans=-1;
       int low=0;
       int high=n;
       int mid;
       while(low<=high)
       {
           mid=(low+high)>>1;
           if(isSubSequence(mid)) {low=mid+1;ans=mid;}// That means from 1 to mid all numbers she can erased, still subsequence possible so increase low limit
           else high=mid-1;
       }
       cout<<(ans)<<'\n';// we have counted 1 indexed value
    }
