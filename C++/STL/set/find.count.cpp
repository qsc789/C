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
    s.insert(50);
    
    set<int>::iterator pos=s.find(30);
    if(pos!=s.end())
    {
    	cout<<*pos<<endl;
	}
	
	if(s.find(20)!=s.end())
	{
		cout<<"sure"<<endl;
	}
	//统计要不是1，要不是0 
	cout<<s.count(40)<<endl;
    
    

	return 0;
 } 