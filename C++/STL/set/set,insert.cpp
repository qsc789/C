#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
	   cout<<*it<<endl;
	}
	
	set<int>s1;
	s1=s;
	s1.insert(20);//不允许重复 
	for(set<int>::iterator it=s1.begin();it!=s1.end();it++)
	{
	   cout<<*it<<endl;
	}
	return 0;
 } 