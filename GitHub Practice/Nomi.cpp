#include<iostream>
using namespace std;
int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
int main() {
	int number;
	cout << "ENter the Number" << endl;
	cin >> number;
	int n = factorial(number);
	cout << "The factorial of number is" << endl;
	cout << n;
}