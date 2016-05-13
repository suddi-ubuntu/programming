#include <iostream>
using namespace std;
char mat[2][101];

int get_min_source (char mat[2][101],int n){
int all_set=1;
int x,y;
for (int i = 0; i < 2; ++i)
{
	for (int j = 0; j < n ; ++j)
	{
		if (mat[i][j]=='.')
			{all_set=0;
				x=i;y=j;
			break;
			}
		/* code */
	}


	/* code */
}
if(all_set) return 0;
mat[x][y]='X';

	for (int i = y+1 ; i < n,mat[x][i]!='X'; ++i)
	{
		mat[x][i]='X';
		/* code */
	}
	for (int i = y-1; i>=0,mat[x][i]!='X'; --i)
	{
		mat[x][i]='X';
		/* code */
	}

mat[0][y]='X';
mat[1][y]='X';

return ( get_min_source(mat,n) + 1 );

}
int main(int argc, char const *argv[])
{

	int n;
	cin>>n;
	
	cin>>mat[0];
	cin>>mat[1];

	cout<<mat[0]<<endl;
	cout<<mat[1]<<endl;
	int val = get_min_source (mat,n);
	cout<<"minimumval number of post : "<<endl;
	int M =9999999;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < n ; ++j)
		{
			if (mat[i][j]=='.')
				{
				mat[i][j]='X';
				
				
				M=min (M,get_min_source(mat,n));

				}
			/* code */
		}


		/* code */
	}

	/* code */
	return 0;
}