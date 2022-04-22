#include <iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		int arr[N];
		for(int i=0;i<N;i++)
		{
			cin>>arr[i];
		}
		bubblesort(arr,N);
		int diff=N-M;
		int maxsum=0;
		int minsum=0;
        for(int i=0; i<diff; i++)
        {
            minsum=minsum+arr[i];
        }

        for(int i=N-1; i>=N-diff; i--)
		{
			maxsum=maxsum+arr[i];
		}

		int d=(maxsum-minsum);
		cout<<d<<endl;
		}
	
}