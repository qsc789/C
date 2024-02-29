#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int> s;//不能插重复的 
	pair<set<int>::iterator,bool> ret=s.insert(10);
	if(ret.second)
	{
		cout<<"第一次插入成功"<<endl; 
	}
	else
	{
		cout<<"第一次插入失败"<<endl; 
	}
    ret=s.insert(10);
    if(ret.second)
	{
		cout<<"第二次插入成功"<<endl; 
	}
	else
	{
		cout<<"第二次插入失败"<<endl; 
	}

    multiset<int>ms;//可以插重复的 
	ms.insert(10);
	ms.insert(10);
	for(multiset<int>::iterator it=ms.begin();it!=ms.end();it++)
	{
		cout<<*it<<" "; 
	} 
	 cout<<endl;
	 
    

	return 0;
 } 




