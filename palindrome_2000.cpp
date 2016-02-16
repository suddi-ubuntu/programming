#include <iostream>
using namespace std;

int arr[5001][5001];
int findMinInsert(string word,int start,int end){

	cout<<"called ,start="<<start<<"end="<<end<<endl;
	if (start>=end)return 0;
	if (arr[start][end]!=-1) return arr[start][end];
	int ans;
	if (word[start]==word[end])
		ans = findMinInsert (word ,start+1,end-1);
	else 
		ans = min (findMinInsert(word,start+1,end),findMinInsert(word,start,end-1)) +1 ;

	arr[start][end]= ans;
	return ans;

}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string word;
	cin>>word;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n ; ++j)
		{
			if(i==j)arr[i][j]=0;
			else arr[i][j]=-1;
			/* code */
		}
		/* code */
	}
	cout<<findMinInsert(word,0,n-1)<<endl;

	/* code */
	return 0;
}