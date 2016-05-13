#include <iostream>
#include <iomanip>
using namespace std;
long double fast_pow(int n)
{
    long double result = 1.0;
    long long power = n;
    long double value = 1.000000011;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            }
        value = value*value;
        value = value;
        power /= 2;
        //power >>= 1;
    }
    return result;
}
int main(int argc, char const *argv[])
{
	/* code */
	long long n,t;
	cin>>n>>t;
	cout<<setprecision(30)<<n*fast_pow(t)<<endl;
	return 0;
}