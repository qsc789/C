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
	if(!s.empty())
	{
		cout<<s.size()<<endl;
	}
    
    
	set<int>s1;
	s1.insert(60);
	s1.insert(80);
	s1.insert(70);
	s1.insert(90);
	s.swap(s1);
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
	   cout<<*it<<endl;
	}
	return 0;
 } 
