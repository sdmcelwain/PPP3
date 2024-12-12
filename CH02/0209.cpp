// Seems like the author made an error at this line:
// << " c==" << c
// Not in errata at this time, however.
// Try input of 65 for the ASCII 'A' character
// Not sure what he intended; revert to original code if desired

#include <iostream>
using namespace std;

int main() {
    double d = 0;
    while (cin >> d) {
        int i = d;
        char c = i;
        cout << "d==" << d
            << " i==" << i
            //<< " c==" << c                 //original text
            //<< " c==" << (int)c            //old syle cast
            << " c==" << static_cast<int>(c) //modern
            << " char(" << c << ")\n";
    }
}
