#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
 

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.length();
        stack <char>st;
        int index=0;
        int flag=1;
        while(index<len){
            if(s[index]=='{' || s[index]=='[' || s[index]=='('){
                st.push(s[index]);
                //cout<<"on top:"<<st.top()<<endl;
            }
            else {
                if(!st.empty()){
                    char c = st.top();
                    if((c=='(' && s[index]==')')||(c=='{' && s[index]=='}') || (c=='[' && s[index]==']'))st.pop();

                    else {flag=0;break;}
                    }
                else {flag=0;break;}
            }
            index++;
        }
        if(st.empty() && flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}