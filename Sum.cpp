#include<iostream>

using namespace std;

int main()
{
    int sum=0, i,n;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cout << i << endl;
        sum = sum + i;
    }

    cout << sum << endl;
}