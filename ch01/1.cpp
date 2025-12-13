#include <iostream>
using namespace std;

int main() {
	int data[] = {31, 41, 59, 26, 41, 58};
	int sz = sizeof(data) / sizeof(int);
	
	for(int i = 0 ; i < sz ; ++i) {
		cout << data[i] << ' ';
	}
	cout << endl;

	for(int i = 0 ; i < sz ; ++i) {
		for(int j = 0 ; j < sz ; ++j) {
			if (data[i] < data[j]) {
				int tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}
	for(int i = 0 ; i < sz ; ++i) {
		cout << data[i] << ' ';
	}
	cout << endl;
	return 0;
}