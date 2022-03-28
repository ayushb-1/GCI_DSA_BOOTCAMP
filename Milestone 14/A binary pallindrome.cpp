
// A BINARY PALINDROME

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;

#define endl "\n"
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define vb  vector<bool>
#define vvi vector<vi>
#define vvb vector<vb>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

string to_binary(ll num){
    if(num==0){
        return "0";
    }
    string s = "";
    while(num!=0){
        s+=('0' + num%2);
        num/=2;
    }
    return s;
}

ll get_value(string s){
    ll ans = 0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1'){
            ans+=(1LL<<i);
        }
    }
    return ans;
}

signed main()
{
    FIO;
    set<ll> store = {0,1};
    for(ll num=0;num<(1<<15);num++){
        string now = to_binary(num);
        string rev = now;
        reverse(all(rev));
        // making even length palindrome
        string curr = now + rev;
        if(curr.back()=='1'){
            store.insert(get_value(curr));
        }

        curr = rev + now;
        if(curr.back()=='1'){
            store.insert(get_value(curr));
        }

        // making odd length palindrome
        curr = now + "1" + rev;
        if(curr.back()=='1'){
            store.insert(get_value(curr));
        }

        curr = now + "0" + rev;
        if(curr.back()=='1'){
            store.insert(get_value(curr));
        }

        curr = rev + "1" + now;
        if(curr.back()=='1'){
            store.insert(get_value(curr));
        }

        curr = rev + "0" + now;
        if(curr.back()=='1'){
            store.insert(get_value(curr));
        }
    }

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans = inf;
        auto itr = store.upper_bound(n);
        if(itr!=store.end()){
            ans = min(ans,(ll)abs(n-(*itr)));
        }
        if(itr!=store.begin()){
            itr--;
            ans = min(ans,(ll)abs(n-(*itr)));
        }
        cout<<ans<<endl;
    }
}