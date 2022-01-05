Definition : An inline function is one for which the compiler copies the code from the function definition directly into the code of the calling function rather 
than creating a separate set of instructions in memory. 

Program :

#include<iostream.h>
#include<conio.h>

class line {
public:
    inline float mul(float x, float y) {
        return (x * y);
    }
    inline float cube(float x) {
        return (x * x * x);
    }
};

void main() {
    line obj;
    float val1, val2;
    clrscr();
    cout << "Enter two values:";
    cin >> val1>>val2;
    cout << "\nMultiplication value is:" << obj.mul(val1, val2);
    cout << "\n\nCube value is          :" << obj.cube(val1) << "\t" << obj.cube(val2);
    getch();
}