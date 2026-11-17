#include <iostream>

using namespace std;

int main() {
    double r;
    cin >> r;
    double area = 3.141592653 * r * r;
    cout<<fixed;
    cout.precision(9);

    cout << area << endl;
    return 0;
}
