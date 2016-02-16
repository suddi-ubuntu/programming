#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	long long tower2,tower3,tower2C,tower3C;
	tower2 = 2*n;
	tower3 =3*m;
	int collision = tower2/6;
	
	long long maxH=100000000;
	for (int C = 0; C <=collision ; ++C)
	{
		tower2C=tower2 + 2*C;
		tower3C= tower3 + 3*(collision-C);
		maxH= min ( maxH , max(tower2C,tower3C));
		/* code */
	}

	cout<<maxH<<endl;
	/* code */
	return 0;
}
