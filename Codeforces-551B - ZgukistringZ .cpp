#include<bits/stdc++.h>

using namespace std;

// constructive algorithm and hashing


int B[26];
int A[26];
int C[26];

int main()

{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    string base;
    string a;
    string c;

    cin>>base;
    cin>>a;
    cin>>c;

    for(int i=0;i<base.size();i++) B[base[i]-'a']++;
    for(int i=0;i<a.size();i++) A[a[i]-'a']++;
    for(int i=0;i<c.size();i++) C[c[i]-'a']++;

    int tmsa=INT_MAX;// substring times of a
    int tmsc=INT_MAX;// substring times of b

    for(int i=0;i<26;i++)

    {
        if(A[i])
        tmsa=min(tmsa,(B[i]/A[i]));
    }

    // tmsa holds for maximum times a can be substring of A
    // But we need to maximize the tmsa + tmsb
    // So , we will iterate through all possible times of a string and check how many substring can be formed by c and which is maximize

    int tot_maximize=0;
    int final_times_of_a=0;
    int final_times_of_c=0;

    // this portion tries to find exact times of substring of a and c whose sum of times will be maximized
    for(int tms_of_a=0;tms_of_a<=tmsa;tms_of_a++)
    {
        tmsc = INT_MAX;

        for(int i=0;i<26;i++)
        {
            if(C[i])
            tmsc=min(tmsc,(B[i]-(tms_of_a*A[i]))/C[i]);

            if(tmsc<=0)
        {
            tmsc=0;
            break;
        }

        }

        if(tmsc+tms_of_a>tot_maximize)
        {
            final_times_of_a=tms_of_a;
            final_times_of_c=tmsc;
            tot_maximize=tmsc+tms_of_a;
        }

    }

    // now times for printing printing a & c string according to its times and clear it
   //cout<<final_times_of_a<<" "<<final_times_of_c<<endl;
    while(final_times_of_a--)
    {
        cout<<a;
        // clear it from initial first array
        for(int i=0;i<a.size();i++)
        {
            B[(a[i]-'a')]--;
        }
    }

     while(final_times_of_c--)
    {
        cout<<c;
        // clear it from initial first array
        for(int i=0;i<c.size();i++)
        {
            B[c[i]-'a']--;
        }
    }
    // After completing make of all substrings of a & c there will be if remaining charcters of first array
    for(int i=0;i<26;i++)
    {
        if(B[i])
        while(B[i]--)
        {
            cout<<(char)(i+'a');
        }
    }
    cout<<endl;
    return 0;
}
