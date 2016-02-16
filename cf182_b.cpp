#include <iostream>
using namespace std;
int isvalid(string s,int start,int end){
	int R=0,L=0,U=0,D=0;
	for (int i = start; i <=end; ++i)
	{
		switch(s[i]){
			case 'R':R++;
					break;
			case 'L': L++;
					break;
			case 'U': U++;
					break;
			case 'D': D++;
					break;
		}

		/* code */
	}
	if((R==L)&&(D==U))return 1;
	else return 0;
}



int main(int argc, char const *argv[])
{
	int n;

	cin>>n;
	string command;
	cin>>command;
	long long ans=0;
	for (int length = 2; length <=n; length=length+2)
	{
	
		for (int i = 0; i+length-1 < n; ++i)
		{
			//cout<<"i="<<i<<" "<<"end"<<i+length-1<<endl;
			if(isvalid(command,i,i+length-1))
				{//cout<<"valid,ans = "<<ans+1<<endl;
				ans++;
			}

		/* code */
		}

	}
	cout<<ans<<endl;
	

	/* code */
	return 0;
}