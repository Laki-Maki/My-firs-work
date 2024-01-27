#include <iostream>
using namespace std;

void pr(int x, int y) {
    cout << "x * y = " << x * y << endl;
}

int main()
{
    int a = 45;
    int b = 10;
    
    cout << a << endl;
    cout << b << endl;
    pr(a, b);

    return 0;
}
