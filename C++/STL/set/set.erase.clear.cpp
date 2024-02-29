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
    s.erase(s.begin());
    s.erase(30);
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
	   cout<<*it<<endl;
	}
    s.clear();
    if(s.empty())
    {
    	cout<<"NULL";
	}
    

	return 0;
 } 
