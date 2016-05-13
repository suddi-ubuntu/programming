#include <iostream>
#include <set>
using namespace std;
#define MOD 1000000007;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	set<int>myset;
	long long M=1;
	for (int length = 1; length <=n; ++length)
	{
		for (int i = 0; i+length-1 < n; ++i)
		{
			myset.insert(arr[i]);
			M=1;
			for (int j = i; j < i+length; ++j)
			{
				M=(M*arr[j])%MOD;
				/* code */
			}
			myset.insert(M);

			/* code */
		}
		
		/* code */
	}


	set<int>::iterator it;
	long long int MUL=1;

	for (it=myset.begin(); it!=myset.end(); ++it)
    MUL=(MUL*(*it))%MOD;

	cout<<MUL<<endl;
	/* code */
	return 0;
}