#include "stdafx.h"
#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int i, x, a, b, c, f, x0, x1, dx;
	cout << "x="; cin >> x;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	cout << "i="; cin >> i;
	cout << "f="; cin >> f;
	cout << "x0="; cin >> x0;
	cout << "x1="; cin >> x1;
	cout << "dx="; cin >> dx;
	cout << endl;
	if ((a > 0) && (x != 0))
		for (i = x0; i <= x1; i += dx) {
			f = int((a^i*i*x + b ^ i*i*x));
			cout << " " << i;
			cout << " " << f << endl;
		}
	if ((a > 0) && (x = 0))
		for (i = x0; i <= x1; i += dx) {
			f = int((x - a / x - c));
			cout << " " << i;
			cout << " " << f << endl;
		}
	else {
		f = int((1 + x / c));
		cout << " " << i;
		cout << " " << f << endl;
	}
	return 0;
}
