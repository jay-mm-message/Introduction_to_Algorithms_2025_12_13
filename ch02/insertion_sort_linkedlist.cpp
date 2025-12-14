#include <iostream>
using namespace std;

class ListNode {
	public:
		int val;
		ListNode *next;
		ListNode(): val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
};

void p(ListNode *head, string st) {
	cout << "st: ";
	ListNode *p = head;
	while(p != nullptr) {
		cout << p->val << ' ';
		p = p->next;
	}
	cout << endl;
}

ListNode* create_linkedList() {
	ListNode *head = nullptr;
	int A[] = {5, 2, 1, 4, 3};
	for(int a : A) {
		if (head == nullptr)
			head = new ListNode(a);
		else {
			ListNode *p = head;
			while(p->next != nullptr) {
				p = p->next;
			}
			p->next = new ListNode(a);
		}
	}
	return head;
}

ListNode* insertion_sort(ListNode* head) {

}

int main() {
	ListNode *head = create_linkedList();

	p(head, "orig");


	return 0;
}