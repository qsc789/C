#include<iostream>
#include<set>
#include<string>
using namespace std;
class Person{
	public:
		Person(string name,int age)
		{
			this->m_Name=name;
			this->m_Age=age;
		}
		string m_Name;
		int m_Age;
};
class comparePerson
{
	public:
		bool operator()(const Person&p1,const Person&p2)
		{
			//降序 
			return p1.m_Age>p2.m_Age;
		}
 };
int main()
{
	//自定义数据类型，指定排序规则 
	set<Person,comparePerson>s;
	Person p1("t1",20);
	Person p2("t2",30);
	Person p3("t3",40);
	Person p4("t4",50);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	
	for(set<Person,comparePerson>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<it->m_Name<<" "<<it->m_Age<<endl;
	}
	
	return 0;
 } 