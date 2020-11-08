#include <iostream> 
#include <cmath> 

using namespace std;

double result(double x, int n);

int main() {
	double x;
	int n;

	cout << "x = "; cin >> x;
	cout << "n = "; cin >> n;
	cout << "result = " << result(x,n);

	return 0;
}

double result(double x, int n) {
	if (n == 0) return 1;
	if (n < 0) return 1 / result(x, abs(n));
	return x * result(x, n - 1);
}

