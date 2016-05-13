#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
string s;
cin>>s;
int len = s.length();
if(len<=6){cout<<0;return 0;}
map<string, int> M;
string subs = s.substr(5);
//cout<<"subs= : "<<subs<<endl;
int subslen = len-5;
//cout<<"subslen:"<<subslen<<endl;

string twoLen,threeLen;
for (int i = 0; i < subslen-1 ; ++i)
 {
 	
 		if(i!=subslen-3){
	 	twoLen = subs.substr(i,2);
	 	M[twoLen]++;
	 	}

	 	if((i<subslen-2)&& (i!=subslen-4))
	 		{ threeLen = subs.substr(i,3);M[threeLen]++;}
	
 	/* code */
 } 

 cout<<M.size()<<endl;

 map<string ,int >::iterator it;
 for (it = M.begin(); it!=M.end(); ++it)
 {
 	cout<<it->first<<endl;
 	/* code */
 }

}