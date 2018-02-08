#include "stdafx.h"
#include <iostream>

<<<<<<< HEAD
int plus(int a, int b)
{
	return a + b;
}

=======
using namespace std;

int foo(int a, int b)
{
	return a - b;
}
>>>>>>> b6789e0075e2fe1051a6501f5f5f0f999f109908
int main()
{
	int plus;
	int minus;
	cin >> plus >> minus;
	cout << foo(plus, minus) << endl;
    return 0;
}