#include<iostream>
#include<map>
using namespace std;

int main()
{
   map<int,int> m;
   m.insert(pair<int,int>(1,10));
     m.insert(pair<int,int>(2,20));
       m.insert(pair<int,int>(3,30));
    if(!m.empty())
    {
    	cout<<"not NULL"<<endl;
	 } 
	 cout<<m.size()<<endl;
	 
	 map<int,int> p;
	 p.insert(pair<int,int>(4,40));
     p.insert(pair<int,int>(5,50));
     p.insert(pair<int,int>(6,60));
     m.swap(p);//m与p交换 
     
     for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
     {
     	cout<<it->first<<" "<<it->second<<endl;
	 }
   
	return 0;
 } 