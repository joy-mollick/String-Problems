#include<bits/stdc++.h>

using namespace std;

// greedy and prefix

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	int n,p;
	cin>>n>>p;
	string s;
	cin>>s;

	for(int q=n-1;q>=0;--q){
		string t=s;
		while(t[q]<'a'+p-1){
			++t[q];
			if((q>=1 && t[q-1]==t[q]) ||
			   (q>=2 && t[q-2]==t[q]))
				continue;
			bool ok=true;
			for(int i=q+1;i<n;++i){
				t[i]='a';
				while((i>=1 && t[i-1]==t[i]) ||
					  (i>=2 && t[i-2]==t[i]))
					++t[i];
				if(t[i]>='a'+p){
					ok=false;
					break;
				}
			}
			if(ok){
				cout<<t;
				return 0;
			}
		}
	}

	cout<<"NO";

	return 0;
}
