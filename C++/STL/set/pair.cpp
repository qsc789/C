#include<iostream>

using namespace std;
int main()
{
	pair<string,int>p("tom",20);
	cout<<p.first<<" "<<p.second<<endl;
	
	pair<string,int>p2=make_pair("jerry",30);
	cout<<p2.first<<" "<<p2.second<<endl;

	return 0;
 } 