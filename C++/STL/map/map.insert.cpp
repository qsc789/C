#include<iostream>
#include<map>
using namespace std;

int main()
{
   map<int,int> m;
   m.insert(pair<int,int>(1,10));
   m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(4,40));
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	//拷贝构造 
	map<int,int>m2(m);
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	//赋值 
	map<int,int>m3;
	m3=m2;
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	return 0;
 } 