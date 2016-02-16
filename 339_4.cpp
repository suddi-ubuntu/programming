#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool myComparator(const pair<int, int>& firstElem, const pair<int, int>& secondElem) {
  return firstElem.second < secondElem.second;

}

int main(int argc, char const *argv[])
{
	int n,A,cf,cm;
	long long m;
	cin>>n>>A>>cf>>cm>>m;
	vector<pair<int,int> >v;
	int val;
	long long sum=0;
	int numberMax=0,maxMax=0;
	long long result;
	int optimumMax;
	long long balance = m,tempBalance,addAmount;
	long long tempResult ,minimum;
	int j;
	long long nextElement;

	for (int i=0; i<n; ++i)
	{
		cin>>val;
		sum+=val;
		if(val==A)numberMax++;
		v.push_back(make_pair(val,i));
		/* code */
	}

	if(n*A-sum<=m){
		result = n*cf + A*cm;
		cout<<result<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<A<<" ";
			/* code */
		}
		cout<<endl;
		return 0;
	}


	sort(v.begin(),v.end());
	result = numberMax*cf ;
	tempBalance=m;
	for (int i = 1; i<=(n-numberMax) && tempBalance>=0 ; ++i)
		{
			if(i==n-numberMax)
				nextElement=A;
			else nextElement=v[i].first;
			
			tempBalance-=i*(nextElement-v[i-1].first);
			if(tempBalance>0)
				minimum=nextElement;
			else {

				tempBalance+=i*(nextElement-v[i-1].first);
				cout<<"1stTime"<<tempBalance<<" "<<tempBalance/i<<endl;
				minimum = v[i-1].first + tempBalance/i;
				tempBalance-=i*(tempBalance/i);
				//minimum =v[i-1].first;
			}

			cout<<"minimum:"<<minimum<<endl;
			/* code */
		}
	result+=minimum*cm;
	optimumMax = numberMax;
	cout<<"initial_result:"<<result<<endl;
	
	maxMax =numberMax;

	for (int i = n-1-numberMax ; i>=0 && balance>=0 ; i--)
	{

		if (A-v[i].first <= balance){
			maxMax++;
			balance-=(A-v[i].first);
		}
		/* code */
	}

	balance =m;
	
	for (int maxPerfect = numberMax+1; maxPerfect<=maxMax ; ++maxPerfect)
	{
		cout<<"maxPerfect:"<<maxPerfect<<endl;
		balance=balance-(A-v[n-maxPerfect].first);
		cout<<"balance:"<<balance<<endl;
		tempBalance =balance;
		for (int i = 1; i<=(n-maxPerfect) && tempBalance>=0 ; ++i)
		{
			if(i==n-maxPerfect)
				nextElement=A;
			else nextElement=v[i].first;
			
			tempBalance-=i*(nextElement-v[i-1].first);
			if(tempBalance>0)
				minimum=nextElement;
			else {

				tempBalance+=i*(nextElement-v[i-1].first);
				cout<<tempBalance<<" "<<tempBalance/i<<endl;
				minimum = v[i-1].first + tempBalance/i;
				tempBalance-=(i*(tempBalance/i));
				//minimum =v[i-1].first;
			}

			/* code */
		}
		cout<<"minimum:"<<minimum<<endl;
		tempResult = maxPerfect*cf + minimum*cm;
		cout<<"tempResult:"<<tempResult<<endl;
		if(tempResult>result)
			{
				result=tempResult;
				optimumMax =maxPerfect;
			}



		/* code */
	}

	cout<<result<<endl;
	balance =m;
	for (int i = n-optimumMax; i<(n-numberMax); ++i)
	{

		balance=balance-(A-v[i].first);
		v[i].first=A;
		/* code */
	}
	
	for (int i = 1; i<=(n-optimumMax); ++i)
	{
		tempBalance=balance;
		nextElement=v[i].first;

		tempBalance-=(i*(nextElement-v[i-1].first));

		if(tempBalance>=0){
			j=i;
			while(j-1>=0){
				v[j-1].first=nextElement;
				j--;
			}
		}
		else{
			tempBalance+=i*(nextElement-v[i-1].first);
			j=i;

			while(j-1>=0)
			{
				v[j-1].first+=(tempBalance/i);
				j--;
			}
			tempBalance-=i*(tempBalance/i);
			j=i;
			while((tempBalance>0)&&(j-1>=0)){
				addAmount=A-v[j-1].first;
				if(tempBalance-addAmount>=0){
					v[j-1].first+=addAmount;
					tempBalance-=addAmount;
				}
				else{
					v[j-1].first+=tempBalance;
					tempBalance=0;
				}
				j--;

			}


				
			
		}
	balance=tempBalance;


		/* code */
	}
	sort(v.begin(),v.end(),myComparator);
	for (int i = 0; i<n; ++i)
	{
		cout<<v[i].first<<" ";
		/* code */
	}
	cout<<endl;

	/* code */
	return 0;
}