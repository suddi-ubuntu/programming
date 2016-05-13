#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int L,M,N;
	cin>>N>>L>>P;
	int matL[L][N];
	int matR[P][N];
	for (int i = 0; i <L; ++i)
	{
		for (int j = 0; j <N; ++j)
		{
			cin>>matL[i][j];
			/* code */
		}
		/* code */
	}

	for (int i = 0; i <P; ++i)
	{
		for (int j = 0; j <N; ++j)
		{
			cin>>matR[i][j];
			/* code */
		}
		/* code */
	}


	int dpW_L[L][N],dpW_R[P][N];
	int dpS_L[L][N],dpS_R[P][N];
	for (int i = 0; i < L; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			dpW_L[i][j]
			/* code */
		}
		/* code */
	}


	return 0;
}