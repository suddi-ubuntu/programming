#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	char arr[n][n];
	int row[n],col[n];
	for (int i = 0; i < n; ++i)
	{
		row[i]=0;
		col[i]=0;
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='C')
				{
					row[i]++;
					col[j]++;
				}
			/* code */
		}
		/* code */
	}

long long sum=0;
	for (int i = 0; i < n; ++i)
	{

		sum+=(row[i]*(row[i]-1)/2);
		sum+=(col[i]*(col[i]-1)/2);

		/* code */
	}
	cout<<sum<<endl;


	return 0;
}