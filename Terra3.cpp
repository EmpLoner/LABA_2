#include <iostream>
using namespace std;               
 
int main()  
{
    int sum = 0;
    int P = 1;
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "sum: ";
for (int i = 1; i <= N; i++)
{
    sum = sum + i;
}
    cout << sum << " ";

    cout << "Product: ";
for (int i = 1; i <= N; i++)
{
    P = P * i;
}
    cout << P << " ";
return 0;
}