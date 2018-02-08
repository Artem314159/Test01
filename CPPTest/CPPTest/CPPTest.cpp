#include "stdafx.h"
#include <iostream>
using namespace std;

int my_Plus(int a, int b)
{
	return a + b;
}

int my_Minus(int a, int b)
{
	return a - b;
}

int main()
{
	int A;
	int B;
	cin >> A >> B;
	cout << my_Plus(A, B) << endl;
	cin >> A >> B;
	cout << my_Minus(A, B) << endl;
    return 0;
}