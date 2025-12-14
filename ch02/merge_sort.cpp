#include <iostream>
using namespace std;

void merge(vector<int> &nums, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;

	vector<int> L(n1 + 1), R(n2 + 1);

	for(int i = 0 ; i < n1 ; ++i)
		L[i] = nums[i + p];
	for(int i = 0 ; i < n2 ; ++i)
		R[i] = nums[i + q + 1];

	L[n1] = R[n2] = INT_MAX;

	int i = 0, j = 0;
	for(int k = p ; k <= r ; ++k) {
		if (L[i] <= R[j]) {
			nums[k] = L[i++];
		} else {
			nums[k] = R[j++];
		}
 	}
}

void merge_sort(vector<int> &A, int p, int r) {
	if (p >= r)
		return;
	
	int q = p + (r-p) / 2;
	merge_sort(A, p, q);
	merge_sort(A, q+1, r);
	merge(A, p, q, r);
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