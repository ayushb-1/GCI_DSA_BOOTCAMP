#include<iostream>

using namespace std;

void solve(int s, int d, int h, int n)
{
    if(n==1)
    {
        cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(s,h,d,n-1);
    cout<<"move "<<n<<" from "<<s<<" to "<<d<<endl;
    
    solve(h,d,s,n-1);
    return;
}
int main(){
int N;
cin>>N;
int s=1,h=2,d=3;
solve(s,d,h,N);

}