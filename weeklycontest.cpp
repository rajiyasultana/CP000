#include <iostream>
using namespace std;

int main() {
    string name;

    cin >> name;
    string password = "";
    
    for (char c : name) {
        int value = c - 'A' + 1;  // Convert character to corresponding number
        password += to_string(value);
    }

    cout << password << endl;
    
    return 0;
}
