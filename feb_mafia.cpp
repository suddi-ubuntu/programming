#include <iostream>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int arr[n+2];
	int a;
	for (int i = 0; i < n+1 ; ++i)
	{
		arr[i]=0;
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		arr[a]=1;

		/* code */
	}
	for (int i = 1; i <=n; ++i)
	{
		if(arr[i] !=1 )cout<<i<<" ";
		/* code */
	}
	cout<<endl;
	return 0;

	
}