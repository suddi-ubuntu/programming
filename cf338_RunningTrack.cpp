#include <iostream>
#include <vector>
#include <iterator>

using namespace std;
int st_for,st_back;
int max_forward_matching(string s,string des,vector<int>v[],int cur,int m,int n)
{

	vector<int>::iterator it=v[des[cur]].begin();
	int len=0;
	int MaxLen=0;
	int des_ind;
	int s_ind ;
	int index;

	while(it!=v[des[cur]].end()){

		len=0;
		s_ind=*it;
		des_ind=cur;
		index= *it;
		while((des[des_ind]==s[s_ind]) && (des_ind<m) && (s_ind<n))
			{
				len++;
				des_ind++;
				s_ind++;
			}

			if(len>MaxLen){
				MaxLen=len;
				st_for=index;

			}

			it++;


	}
	return MaxLen;
}




int max_backward_matching(string s,string des,vector<int>v[],int cur,int m,int n)
{

	vector<int>::iterator it=v[des[cur]].begin();
	int len=0;
	int MaxLen=0;
	int des_ind;
	int s_ind ;
	int index;

	while(it!=v[des[cur]].end()){

		len=0;
		s_ind=*it;
		index=*it;
		des_ind=cur;
		while((des[des_ind]==s[s_ind]) && (des_ind<m) && (s_ind>=0))
			{
				len++;
				des_ind++;
				s_ind--;
			}

			if(len>MaxLen){
				MaxLen=len;
				st_back=index;


			}

			it++;


	}
	return MaxLen;
}




int main(int argc, char const *argv[])
{
	string s;
	string des;
	cin>>s;
	cin>>des;
	int n=s.length();
	int m=des.length();
	int start_index;
	vector<int> v[130];
	for (int i = 0; i < n; ++i)
	{
		v[s[i]].push_back(i);
		/* code */
	}
	//for (int i = 97; i < 122; ++i)
	//{
	//	cout<<char(i)<<" ";
	//	for(vector<int>::iterator it=v[i].begin();it!=v[i].end();it++)
	//		cout<<(*it);
	//	/* code */
	//}
	//cout<<endl;
	vector<pair<int,int> >VP;

	for (int i = 0; i < m; ++i)
	{
		if(v[des[i]].empty()){
			cout<<-1<<endl;
			return 0;
		}
		//get_longest_matching(des,s,)
		/* code */
	}

	int a,b;
	for (int i = 0; i < m;i++)
	{
		int forward =max_forward_matching(s,des,v,i,m,n);
		int back = max_backward_matching(s,des,v,i,m,n);
		//cout<<"forward:"<<forward<<" "<<"back:"<<back<<endl;
		//int maxLength= max(forward,back);//length_of_max_matching()
		if(forward>back){
			start_index=st_for +1;
			a=start_index;
			b=start_index+forward-1;
			//cout<<start_index<<" "<<start_index+forward-1<<endl;
			VP.push_back(make_pair(a,b));
			i=i+forward-1;
			//cout<<"maxFor:"<<forward<<"i:"<<i<<endl;
		}
		else {

			start_index=st_back +1;
			a=start_index;
			b=start_index-back+1;
			VP.push_back(make_pair(a,b));
			//cout<<start_index<<" "<<start_index-back+1<<endl;
			i=i+back-1;
			//cout<<"maxBack:"<<back<<"i:"<<i<<endl;
		}


		/* code */
	}



	cout<<VP.size()<<endl;
	vector<pair<int,int> >::const_iterator iit;
	for(iit=VP.begin();iit!=VP.end();iit++){
		cout<<iit->first<<" "<<iit->second<<endl;
	}
	/* code */
	return 0;
}