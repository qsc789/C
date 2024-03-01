#include<iostream>
#include<map>
using namespace std;

int main()
{
	//不允许重复元素 
   map<int,int> m;
   m.insert(pair<int,int>(1,10));
	 m.insert(pair<int,int>(2,20));
	  m.insert(pair<int,int>(3,30));
	  map<int,int>::iterator pos=m.find(3);//返回迭代器 
	  if(pos!=m.end())
	  {
	  	cout<<pos->second<<endl;
	  }
	  else
	  {
	  	cout<<"NULL"<<endl;
	  }
	  
	  int num1=m.count(3);
	  cout<<num1<<endl;
	  
	  int num2=m.count(4);
	  cout<<num2<<endl;
	  
	  	return 0;
 } 