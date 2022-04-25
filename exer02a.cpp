#include <iostream>

using namespace std;

void findFact(int, int *);

int main()
{
    int fact;
    int num1;

    cout << "\n\n Pointer : Find the factorial of a given number :\n";

    cout << "------------------------------------------------------\n";

    cout << " Input a number : ";
    cin >> num1;

    findFact(num1, &fact);

    cout << " The Factorial of %d is : %d \n\n",num1,fact;

    return 0;
}

void findFact(int n, int *f)
{
int i;
*f = 1;
for (i = 1; i <= n; i++)
*f = *f * i;
}
