#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return(1);
    }
    int res;
    res = n + sum(n-1);
    return(res);
}
int main(){
int n,calculatesum;
cout<<"Enter the last number of the range starting from 1 : "<<endl;
cin>>n;
calculatesum=sum(n);
cout<<"The sum of numbers from 1 to "<<n<<" is: "<<calculatesum;
return 0;
}