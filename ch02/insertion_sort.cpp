#include <iostream>
using namespace std;

void p(int A[], int sz, string st) {
	cout << st << ": ";
	for(int i = 0 ; i < sz ; ++i) {
		cout << A[i] << ' ';
	}
	cout << endl;
}

int main() {
	int A[] = {5, 2, 1, 4, 3};
	int sz = sizeof(A) / sizeof(int);

	p(A, sz, "orig");

	for(int j = 1 ; j < sz ; ++j) {
		int key = A[j];
		int i = j - 1;
		while( i >= 0 && A[i] > key ) {
			A[i+1] = A[i];
			--i;
		}
		A[i+1] = key;
	}

	p(A, sz, "insertion sort");
	return 0;
}