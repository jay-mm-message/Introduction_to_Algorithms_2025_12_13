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

}

// QUICKSORT 函式
void quicksort(vector<int>& A, int p, int r) {

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
