#include <iostream>
using namespace std;

int main() {
    double d = 0;
    while (cin >> d) {
        int i = d;
        char c = i;
        cout << "d==" << d
            << " i==" << i
            << " c==" << c    // seems like he meant (int)c or static_cast<int>(c) at the end???
            << " char(" << c << ")\n";
    }
}
