#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int x,y;
	map<int, int> Mmap;
	map<int,int>Smap;
	cin>>n;
	for (int i = 0; i < n ; ++i)
	{
		cin>>x>>y;
		Mmap[x+y]++;
		Smap[(x-y)]++;
		/* code */
	}
	long long count=0;
	map<int,int>::iterator it;
	for(it=Mmap.begin();it!=Mmap.end();it++){
		//cout<<"key :"<<it->first<<"val:"<<it->second<<endl;
		int val =it->second;
		count+= (val*(val-1))/2;

	}

	for(it=Smap.begin();it!=Smap.end();it++){
		//cout<<"key S:"<<it->first<<"val S:"<<it->second<<endl;
		int val =it->second;
		count+= (val*(val-1))/2;

	}

	cout<<count<<endl;
	/* code */
	return 0;
}