#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define PI 3.1415926535897
int main(int argc, char const *argv[])
{
	int n;
	int x,y;
	int px,py;
	cin>>n>>x>>y;
	long long max=-1,min=10e+18,dist;
	for (int i = 0; i < n; ++i)
	{
		cin>>px>>py;

		dist = (x-px)*(x-px)+(y-py)*(y-py);
		if (dist>max)max=dist;
		if (dist<min)min=dist;


		/* code */
	}
	//cout<<setprecision (15)<<M_PI<<endl;
	double ans =M_PI*(max-min);
	cout<<setprecision (15)<<ans<<endl;
	/* code */
	return 0;
}