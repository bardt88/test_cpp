#include <iostream>

using namespace std;

void getNumbers()
{
    int x = 0;
    cout << "int" << endl;
    cin >> x; // read number from console and store it in x
    double y = 0;
    cout << "double" << endl;
    cin >> y;
    long z = 0;
    cout << "long" << endl;
    cin >> z;
    float z2 = 0;
    cout << "long" << endl;
    cin >> z2;


    cout << "You entered " << x << endl;
    cout << "You entered " << y << endl;
    cout << "You entered " << z << endl;
    cout << "You entered " << z2 << endl;
}
