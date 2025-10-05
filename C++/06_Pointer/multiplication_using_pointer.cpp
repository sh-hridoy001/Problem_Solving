#include <iostream>
using namespace std;

int main() {
    int value1 = 5, value2 = 10;
    int* p1 = &value1, *p2 = &value2;
    int** dp1 = &p1, **dp2 = &p2;
    cout << "Before modification:" << endl;
    cout << "value1: " << value1 << ", value2: " << value2 << endl;
    *dp1 = *dp2;
    **dp2 = 20;
    cout << "After modification:" << endl;
    cout << "value1: " << value1 << ", value2: " << value2 << endl;
    cout << "p1 points to: " << *p1 << endl;
    cout << "p2 points to: " << *p2 << endl;
}