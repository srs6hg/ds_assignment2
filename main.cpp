#include "LinkedList.h"
#include "Stack.h"
#include <iostream>

int main() {
	Linked lin = Linked();
	Stack st = Stack();
	int n;
	int n2;
	int index;
	int cn;
	string s;
	bool tf=1;
	cin >> n;
	switch (n){
	case 1:
		while (tf) {
			cout << "\nLinkedList\n";
			cin >> n2;
			switch (n2) {
			case 1:
				cout << "\nWhat string?:\n";
				cin >> s;
				lin.pushFront(s);
				break;
			case 2:
				cout << "\nWhat string?:\n";
				cin >> s;
				lin.pushBack(s);
				break;
			case 3:
				lin.popFront();
				break;
			case 4:
				lin.popBack();
				break;
			case 5:
				cout << lin.front()->nodeString;
				break;
			case 6:
				cout << lin.back()->nodeString;
				break;
			case 7:
				lin.empty();
				break;
			case 8:
				cout << "\nWhat index?:\n";
				cin >> index;
				cout << "\nWhat string?:\n";
				cin >> s;
				lin.insert(index, s);
				break;
			case 9:
				cout << "\nWhat index?:\n";
				cin >> index;
				lin.remove(index);
				break;
			case 10:
				cout << "\nWhat string?:\n";
				cin >> s;
				lin.find(s);
				break;
			}
			cout << "\nContinue?(1/0):\n";
			cin >> tf;
		}
		break;
	case 2:
		while (tf) {
			cout << "\nStack\n";
			cin >> n2;
			switch (n2) {
			case 1:
				st.empty();
				break;
			case 2:
				cout << "\nWhat integer?:\n";
				cin >> cn;
				st.push(cn);
				break;
			case 3:
				st.pop();
				break;
			case 4:
				cout << st.front();
				break;
			case 5:
				cout << st.average();
				break;
			}
			cout << "\nContinue?(1/0):\n";
			cin >> tf;
		}
		break;
	}
}