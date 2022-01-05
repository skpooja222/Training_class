Definition :Function Prototyping is the process of declaring a function for the compiler to understand the function name, arguments, and return type.

Program :
#include<iostream>

using namespace std;

int add(int x,int y); // Function Declaration

int main() {
   int a=10,b=20,c;
   c = add(a,b); // Function Call
   cout<<"Addition : "<<c;
}

int add(int x,int y) // Function Definition
{
   int z;
   z = x+y;
   return z;
}



