#include <iostream>

using namespace std;

class A
{
	private:
		int z;
	protected:
		int y;
   	public:
    		int x;
};

class B : public A
{
   	public:
    	void display() 
	{
		x=10;
		y=20;
		//z=30;					//error thrown
		cout<<x<<" "<<y<<endl;
    	}
};


int main() 
{
    	B obj;
	obj.display();
    	return 0;
}
