#include <iostream>
using namespace std;
int main(){

	string inp;
	cin>>inp;
	int l=inp.length();
	int i=0;
	int plus=1;
	int minus=0;
	while(inp[i]!='='){
		if(inp[i]=='+')plus++;
		else if(inp[i]=='-')minus++;
		i++;

	}
	if(inp[i+1]==' ')i++;
	int n= stoi(inp.substr(i+1));
	
	//cout<<n<<endl;
	if(n*plus >=n+minus){
		cout<<"Possible"<<endl;
		int a=n+minus-(plus-1);
		int i=1;
		cout<<a;
		while(i<l){
			if(inp[i]=='?')cout<<1<<" ";
			else cout<<inp[i];
			i++;

		}
	}
	else
		cout<<"Impossible"<<endl;

	//if(plus==1 && minus ==0)cout<<
}