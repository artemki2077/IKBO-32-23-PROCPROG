#include <iostream>


using namespace std;

int main()
{
    int b, c;
    cin >> b >> c;
    if (b != 0) {
        cout << -c / b << endl;
    }
    else if (c != 0) {
        cout << 0 << endl;
    }
    else {
        cout << "A" << endl;
    }
}
