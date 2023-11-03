#include <iostream>

using namespace std;

int main() {
    int n,i;
    cin >> n;

    int r=0;

    for(i=0;i<n;i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum>=2)
        {
            r++;
        }
    }
    cout << r << endl;
    return 0;
}

