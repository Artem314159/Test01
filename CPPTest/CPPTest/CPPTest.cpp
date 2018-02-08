#include "stdafx.h"
#include <iostream>

using namespace std;

int foo(int a, int b)
{
	return a - b;
}
int main()
{
	int plus;
	int minus;
	cin >> plus >> minus;
	cout << foo(plus, minus) << endl;
    return 0;
}