#include<iostream>
using namespace std;
class ABC
{
	int x, y;
public:
	virtual void fun() = 0;// pure virtual function
	virtual void fun1(int m,int n) 

	{
		x = m;
		y = n;
		int sum = x + y;
		cout << sum << endl;

	}
	virtual void fun2()

	{
		cout << "Hello world" << endl;

	}
};
class xyz : public ABC
{
public:
	void fun() {
	}

};
void main()
{
	//ABC obj1;// we can not create object for abstract class
	xyz obj2;// in the derived class we can nnot derive pure cirtual function thats why we can not create object
	obj2.fun1(30, 40);// after deriving pure virtual function in derived class we can access all functions in base class and also create objects for derived class.

	obj2.fun2();
}