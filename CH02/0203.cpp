#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Please enter your first name and age\n";
    string first_name = "???";
    int age = -1;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}
