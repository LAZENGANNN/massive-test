//variant 1
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//1
	/*const int n = 12;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 11 - 5;
		cout << a[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	cout << sum;*/


	//2
	/*const int n = 13;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 25 - 12;
		cout << a[i] << ' ';
	}
	cout << endl;
	long long int sum = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			sum = sum * a[i];
		}
	}
	cout << sum;*/

	//3
	/*const int n = 11;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 21;
		cout << a[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (((a[i] % 3)==0) || ((a[i] % 5) == 0) || ((a[i] % 7) == 0)) {
			k++;
		}
	}
	cout << k;*/

	//4
	/*const int n = 15;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 26;
		cout << a[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (((a[i] % 2) != 0)) {
			k = k + a[i];
		}
	}
	cout << k;*/



}