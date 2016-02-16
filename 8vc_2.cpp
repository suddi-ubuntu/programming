#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

	int n;
	cin>>n;
	string s;
	cin>>s;
	int R=0,B=0,G=0;
	for (int i = 0; i < n; ++i)
	{
		switch(s[i]){
			case 'R':R++;break;
			case 'B':B++;break;
			case 'G':G++;break;
		}

		/* code */
	}
	//cout<<"R:"<<R<<"G:"<<G<<"B:"<<B<<endl;

	if(R>0 && B>0 && G>0)cout<<"BGR"<<endl;
	else if((R>1 && B>1)||(R>1 && G>1)||(B>1 && G>1))cout<<"BGR"<<endl;
	else if(R==1 && B>1)cout<<"GR"<<endl;
	else if(R==1 && G>1)cout<<"BR"<<endl;
	else if(B==1 && R>1)cout<<"BG"<<endl;
	else if(B==1 && G>1)cout<<"BR"<<endl;
	else if(G==1 && R>1)cout<<"BG"<<endl;
	else if(G==1 && B>1)cout<<"GR"<<endl;
	else if(R==1 && B==1)cout<<"G"<<endl;
	else if(R==1 && G==1)cout<<"B"<<endl;
	else if(B==1 && G==1)cout<<"R"<<endl;
	else if(R>0)cout<<"R"<<endl;
	else if(B>0)cout<<"B"<<endl;
	else if(G>0)cout<<"G"<<endl;


	/* code */
	return 0;
}