#include<iostream>
using namespace std;
#include<string>//用C++风格字符串得包头文件

int* func1()
{
	int* a = new int(10);//整形值为10；
	//int* a = new int;
	return a;
}
int* func2()
{
	int* arr = new int[10];//数组
	return arr;
}
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int& test1()
{
	static int a = 10;
	return a;
}
int main()
{
	int a = 10;
	cout << "a=" << a << endl;//自动加\n,输出a=10;
	cin >> a;
	cout << "a=" << a << endl;

	const char b = 'a';//const声明的是常量，不可更改
	cout << (int)b << endl;//输出ASCLL码

	string str = "aaaa";
	cout << str << endl;

	int* p = func1();
	cout << *p << endl;
	delete p;//free

	int* q = func2();
	delete[] q;

	int x = 10;
	int& y = x;//引用，y是x的别名,xy控制同一块内存
	y = 20;
	cout << x << endl;

	int num1 = 10, num2 = 20;
	swap(num1, num2);
	cout << num1 << ' ' << num2 << endl;

	int& ref = test1();
	cout <<"ref="<<ref << endl;
	test1() = 1000;
	cout << "ref=" << ref << endl;

	system("pause");
	return 0;
}