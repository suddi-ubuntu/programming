#include <iostream>
using namespace std;
int main(){

	long long n,a,b,c;
	cin>>n;
	cin>>a>>b>>c;
	long long numberGlassBottle =0;
	long long numberPlasticBottle=n/a;
	if (b>n)numberGlassBottle=0;
	else {
		numberGlassBottle=(n-b)/(b-c);
		numberGlassBottle+=1;
		long long restAmount = n- numberGlassBottle*(b-c);
		numberGlassBottle+=restAmount/a;


	}
	cout<<max(numberGlassBottle,numberPlasticBottle)<<endl;

	return 0;

}