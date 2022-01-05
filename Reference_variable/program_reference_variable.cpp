Definition : When a variable is declared as reference it becomes an alternative name for an existing variable.

Syntax : int x;
         int& r=x;


Program :

#include<iostream>
using namespace std;

int main()
{
int x= 10;
int & r=x;

cout <<"x" << x <<endl;
cout <<"r" << r <<endl;
return 0;
}