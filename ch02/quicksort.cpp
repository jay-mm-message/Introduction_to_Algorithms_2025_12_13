#include <iostream>
#include <vector>
using namespace std;

void ptf(vector<int> &A, string tag) {
	cout << tag << ": ";
	for(int a : A) {
		cout << a << ' ';
	}
	cout << endl;
}

// PARTITION 函式
int partition(vector<int>& A, int p, int r) {
	int key = A[r];
	int i = p - 1;
	for(int j = p ; j <= r - 1 ; ++j) {
		if (A[j] <= key) {
			++i;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

// QUICKSORT 函式
void quicksort(vector<int>& A, int p, int r) {
	if (p >= r)
		return;
	int q = partition(A, p, r);
	quicksort(A, p, q - 1);
	quicksort(A, q + 1, r);
}

int main() {
    vector<int> A = {2, 7, 1, 9, 10, 5};

    quicksort(A, 0, A.size() - 1);

    for (int x : A) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
