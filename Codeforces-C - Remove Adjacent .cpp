#include<bits/stdc++.h>

using namespace std;

// greedy and brute force

int main()

{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    string s;
    cin>>n;
    cin>>s;
    int len=s.length();
    int cont=0;
    // first check from the reverse (from z to a) then it is greedy and find if there any adjacent before then remove these

    for(char c='z';c>='a';c--)
    {
        // check for the c now whole total array
        for(int i=0;i<len;i++)
        {
            char ch=s[i];
            if(ch!=c) continue; // we are finding our character c ,if not then ignore it
            bool found=false;
            if(i==0&&(s[i]==s[i+1]+1)) // if such adjacent found for i=0;
            {
                found=true;
            }
            else if(i==len-1 && (s[i]==s[i-1]+1)) // if such adjacent found for i=len-1
            {
                found=true;
            }
            else if((s[i]==s[i-1]+1)||((s[i]==s[i+1]+1))) // if such adjacent found for i!=0 && i!=len-1
            {
                found=true;
            }

            if(found)
            {
                s.erase(s.begin()+i);// erase it
                i=-1;//now search from the beginnning and other occurence for the character c
                cont++;
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}
