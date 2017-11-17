#include<iostream>
using namespace std;
class B; // pre declaation of th class 
class A 
{
	int x;
	public:
		A()
		{
			x=0;
		}
		A(int x)
		{
			this ->x=x;
		}
		friend int sum (A,B); // this is the friend function of the both the class  
};
class B
{
	int y ;
	public :
		B ()
		{
			y=0;
		}
		B(int y)
		{
			this -> y=y;
		}
		friend int sum (A,B);
};
int sum ( A a1 , B b1) // in this , we are passing the object as the argument in the friend function 
{
	int c;
	c= a1.x + b1.y;
	return c;
}
int main ()
{
		A a1(10) ;
		B b1(20) ;
		cout <<sum( a1 , b1);
		return 0;
}
