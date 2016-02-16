#include <iostream>
using namespace std;


int F(int x,int N,int C,int pos[])
{
  //We can always place the first cow in the leftmost stall
  int cowsplaced=1,lastpos=pos[0];
  for(int i=1;i<N;i++)
  {
    if(pos[i]-lastpos>=x)
    {
      //We are at least x away from last placed cow
      //So we can place one here
      if(++cowsplaced==C)return 1;
      lastpos=pos[i];
    }
  }
  return 0;
}

int main(int argc, char const *argv[])
{
int tc;
cin>>tc;
int N,C;
while(tc--){

cin>>N>>C;
int pos[N];
for (int i = 0; i < N; ++i)
{
	cin>>pos[i];

	/* code */
}


sort(pos,pos+N);

int start=0,end=pos[N-1]-pos[0]+1,mid;
while(end-start>1)
{
	//cout<<"start="<<start<<" end="<<end<<endl;
  mid=(end+start)>>1;
  //cout<<"mid:"<<mid<<endl;
  (F(mid,N,C,pos)?start:end)=mid;
}
cout<<start<<endl;


}


	/* code */
	return 0;
}
