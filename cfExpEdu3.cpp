#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	

	int n;
	cin>>n;
	long long result=0;
	long long NUM_OF=1;
	for (int i = 1; i <=n; ++i)
	{
		NUM_OF=NUM_OF*2;
		result=result+NUM_OF;

		/* code */
	}
	cout<<result<<endl;
	return 0;
}