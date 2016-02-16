#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int k,l,m;
	cin>>k>>l>>m;
	int arr[m];
	int max=-1;

	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i];
		if (arr[i]>max)max = arr[i];
		/* code */
	}

	char myarr[max+1];
	myarr[0]='B';
	myarr[1]='A';
	for (int i = 2 ; i <=max ; ++i)
	{
		if(myarr[i-1]=='B' || (i-k>=0 && myarr[i-k]=='B' ) || (i-l>=0  && myarr[i-l]=='B'))
			myarr[i]='A';
		else myarr[i]='B';

		/* code */
	}

	for (int i = 0; i < m; ++i)
	{
		cout<<myarr[arr[i]];
		/* code */
	}
	cout<<endl;
	/* code */
	return 0;
}