#include <iostream>
using namespace std;

void merge(vector<int> &nums, int p, int q, int r) {

}

void merge_sort(vector<int> &A, int p, int r) {

}

void p(vector<int> &A, string tag) {
	cout << tag << ": ";
	for(int a : A) {
		cout << a << ' ';
	}
	cout << endl;
}
int main() {

	vector<int> A = {2, 7, 1, 9, 10, 5};
	p(A, "before");
	merge_sort(A, 0, A.size() - 1);
	p(A, "after");

	return 0;
}