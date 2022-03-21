#include<iostream>

using namespace std;

int noOfDigits(int n){
  static  int cnt=0;
if(n!=0){
    cnt++;
    noOfDigits(n/10);
}

return cnt;
}
 
int main(){
int n,count;
cout<<"Enter the number: "<<endl;
cin>>n;
count=noOfDigits(n);
cout<<"No. of digits are: "<<count;
return 0;
}