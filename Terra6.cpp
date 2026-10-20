// задание 6
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter number: ";
    cin >> N;

    int count = 0;
    int sum = 0;

    while (N > 0)
    {
        sum += N%10;
        count++;
        N/=10;
    }
    cout << "Digit count: " << count << " ";
    cout << "Digit sum: " << sum << " ";

    return 0;
}