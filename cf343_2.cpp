#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	int M[367],F[367];
	char S;
	int Arrive,Depart;
	for (int i = 1; i < 367; ++i)
	{
		M[i]=0;
		F[i]=0;
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{

		cin>>S>>Arrive>>Depart;
		if(S=='M')
		{
			for (int day = Arrive; day<=Depart; ++day)
			{
				M[day]++;
				/* code */
			}
		}
		else
		{
			for (int day = Arrive; day<=Depart; ++day)
			{
				F[day]++;
				/* code */
			}
		}


		/* code */
	}


	
	int pos=0,ans=-5;

	for (int i = 1; i < 367; ++i)
	{
		//cout<<"day"<<i<<"male:"<<M[i]<<"female:"<<F[i]<<endl;
		if(F[i]>0 && M[i]>0)
		{
			pos=2* min(F[i],M[i]);
		//	cout<<"pos:"<<pos<<endl;
		}

		if(pos>ans)ans=pos;
		//cout<<"ans:"<<ans<<endl;

		/* code */
	}
	cout<<ans<<endl;
	return 0;
}