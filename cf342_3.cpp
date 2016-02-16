#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int mat[n+1][n+1];
	int elementsBefore = n*(k-1);
	int start=1;
	if(start<=elementsBefore){

		for (int i=1;i<=n;i++){
			for (int j=1; j<k; ++j)
			{
			mat[i][j]=start;
			start++;
			/* code */
			}
		}
	}

	if(start!=elementsBefore+1)start=elementsBefore+1;
	for (int i = 1; i<=n; ++i)
	{
		for (int j = k; j<=n ; ++j)
	{
			mat[i][j]=start;
			start++;
			/* code */
		}
		/* code */
	}
	long long sum =0;
	for (int i = 1; i<=n ; ++i)
	{
		sum+=mat[i][k];
		/* code */
	}

	cout<<sum<<endl;
	for (int i = 1; i<=n ; ++i)
	{
		for (int j = 1; j<=n; ++j)
		{
			cout<<mat[i][j]<<" ";
			/* code */
		}
		cout<<endl;
		/* code */
	}

}