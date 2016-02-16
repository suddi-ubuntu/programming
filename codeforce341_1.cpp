#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	

	int arr[100001];
	int n;
	cin>>n;
	long long sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	sort(arr,arr+n,greater<int>());

	int a=-1;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]%2==0)sum+=arr[i];
		else
		{
			if(a!=-1){
				sum=sum+a+arr[i];
				a=-1;
			}
			else a=arr[i];
		}
		/* code */

	}

	cout<<sum<<endl;

	return 0;
}