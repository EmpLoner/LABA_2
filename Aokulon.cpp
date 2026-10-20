#include <iostream>
using namespace std;               
 
bool isPositive(int number)
{
    return number > 0;
}   
bool isThreeDigit(int number)
{
    int TN = abs(number);
    return TN >= 100 and TN <= 999;
}

int main()
{
    int x;

    cout << "Enter number: " << '\n';
    cin >> x;

    cout << "Positive: " << (isPositive(x) ? "yes" : "no") << '\n';
    cout << "Three-digit: " << (isThreeDigit(x) ? "yes" : "no") << '\n';

    return 0;
}
//9
