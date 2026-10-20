//Задание 8
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int difference(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int main()
{
    int x;
    int y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    int result = sum(x, y);
    int Res = difference(x ,y);
    int R = multiply(x ,y);

    cout << "Sum: " << result << "\n";
    cout << "Difference: " << Res << "\n";
    cout << "Product: " << R << "\n";

    return 0;
}