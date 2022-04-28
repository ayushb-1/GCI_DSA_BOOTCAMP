#include <iostream>
using namespace std;
int BubbleSort(int arr[],int n)
{
	int count=0;
	bool swapped=true;
	while(swapped!=false)
	{
		int temp;
		swapped=false;
		count++;
		for(int i=1;i<n-1;i++){
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				swapped=true;
			}
		}
	}
	return count;

}
int main(){
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	
	cout<<BubbleSort(arr,N)<<endl;
	return 0;
}
