#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define mp make_pair

#define pb push_back

#define pob pop_back()

#define mod 1000000007

#define max INT_MAX

#define min INT_MIN

#define fi 1000007

#define se second

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector<int> v;

int arr[fi]={0};

int p;

// to find primes

void seive()

{

    arr[0]=1;

    arr[1]=1;

    for(int i=2; i<fi; i++)

    {

        if(arr[i]==0)

        {

            v.pb(i);

            for(int j=i; j<fi; j+=i)

            arr[j]=1;

        }

    }

}

// np= different number of primes required for a given length array

// num= if num is odd then there is a place where only one prime will be kept for pallindromic array

// m= keeps the value less than P.

int solve(int np,int num, int m)

{

    if(np==0)

    return 1;

    int ans=0;

    for(int i=0; i<v.size(); i++)

    {

        // if num is odd then this will run (required only only once :-))

        if(num==1)

        {

            if(m*v[i]>p)

            break;

            ans+=solve(np-1, 0, m*v[i]);

        }

        // if num is even then two sam primes are required for maintaining palindromic array

        else

        {

            if(m*v[i]*v[i]>p)

            break;

            ans+=solve(np-1,0,m*v[i]*v[i]);

        }

    }

    return ans;

}

int main()

{

    fast_cin();

    seive();

    int q,n;

    cin>>p>>q;

    int ans[21]={0};

    // size =3,4 require 2 different array and size=5,6 require 3 different array hence there is need for i+1/2

    // i%2 to find the size of array is even or odd

    for(int i=1; i<21; i++)

    ans[i]=solve((i+1)/2, i%2, 1);

    // to sum all array sizes less than given size(all pallindrome)

    for(int i=2; i<21; i++)

    ans[i]+=ans[i-1];

    // for output as n can vary till 10^9

    while (q--)

    {

        cin>>n;

        if(n<21)

        cout<<ans[n]<<" ";

        else

        cout<<ans[20]<<" ";

    }

   

    return 0;

}