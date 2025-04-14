#include<bits/stdc++.h>
using namespace std;

int main (){
	set<int>st;
	st.insert(1);
	st.insert(2);
	st.insert(1);
	st.erase(1);
	if(st.count(1)){
		cout<<"yes"<<endl;
	}
	for(auto &ele : st){
		cout<<ele<<endl;
	}
	return 0 ;
}
