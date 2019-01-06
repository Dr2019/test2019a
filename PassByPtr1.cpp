// C++ program to swap two numbers using
// pass by pointer.
#include <iostream>
using namespace std;
 
void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
 
int main()
{
    int a = 45, b = 35;
    cout << "\n Before Swap:\n";
    cout << "   a = " << a << " b = " << b << "\n";
 
    swap(&a, &b);
 
    cout << "\n After Swap with pass by pointer:\n";
    cout << "   a = " << a << " b = " << b << "\n";
}
