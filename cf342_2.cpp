#include <iostream>
using namespace std;
int main()
{

	string big;
	string small;
	cin>>big;
	cin>>small;
	int small_size = small.length();
	int big_size = big.length();
	if(big_size<small_size)
		{cout<<"0"<<endl;return 0;}
	int count = 0;
	for (int i = small_size-1 ; i < big_size ; ++i)
	{
		int flag=1;
		for (int j = 0; j < small_size ; ++j)
		{
			if(small[j]!=big[i-small_size+j+1])
				{
				flag=0;
				break;
				}
			/* code */
		}
		if(flag==1)
			{count++;i=i+small_size-1;}
		/* code */
	}
	cout<<count<<endl;
	return 0;
}