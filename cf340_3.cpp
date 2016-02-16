#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	long long int xcentre1,ycentre1,xcentre2,ycentre2;
	cin>>n;
	cin>>xcentre1>>ycentre1>>xcentre2>>ycentre2;
	long long x,y;
	long long dist1[n];
	long long dist2[n];
	long long r1= -1;
	long long r2= -1;
	long long max =10e+18;

	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		dist1[i]=(xcentre1-x)*(xcentre1-x) + (ycentre1-y)*(ycentre1-y);
		dist2[i]=(xcentre2-x)*(xcentre2-x) + (ycentre2-y)*(ycentre2-y);
		/* code */
	}
if (n>1){
	for (int i = 0; i <n; i++)
	{
			
		r1=dist1[i];
		r2=0;	
			for (int j = 0; j < n; ++j)
			{

				if (i!=j){

					if(dist1[j]<=r1)continue;
					if(r2>=dist2[j])continue;
					r2=dist2[j];
				}
				/* code */
			}
			if (r1+r2 < max) max=r1+r2;

			//cout<<"i="<<i<<" "<<r1<<" "<<r2<<endl;

			/* code */
	}
}
else max= min(dist1[0],dist2[0]);
//cout<<r1<<" "<<r2<<endl;
cout<<max<<endl;
	

	


	/* code */
	return 0;
}