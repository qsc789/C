#include<iostream>
#include<map>
using namespace std;
//利用仿函数改变排序规则
 
class MyCompare
{
	public:
		bool operator()(int v1,int v2)
		{
			return v1>v2;
		}
};
int main()
{
	
   map<int,int,MyCompare> m;
   //默认按key升序 
   m.insert(pair<int,int>(1,10));
	 m.insert(pair<int,int>(2,20));
	  m.insert(pair<int,int>(3,30));
	  m.insert(pair<int,int>(4,40));
	 m.insert(pair<int,int>(5,50));
	 m.insert(pair<int,int>(6,60));
	 for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
	 {
	 	cout<<it->first<<" "<<it->second<<endl;
	 }
	 
	 
	  
	  	return 0;
 } 