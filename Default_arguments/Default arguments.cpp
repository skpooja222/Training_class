definition : What is a default argument in C++?
A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the caller of the function doesn't 
provide a value for the argument with a default value.


Program :

#include <iostream>
using namespace std;


int sum(int x, int y, int z = 0, int w = 0)
{
	return (x + y + z + w);
}

int main()
{
	// Statement 1
	cout << sum(10, 15) << endl;

	// Statement 2
	cout << sum(10, 15, 25) << endl;

	// Statement 3
	cout << sum(10, 15, 25, 30) << endl;
	return 0;
}
