#include "Stack.h"

bool Stack::empty() {
	if (vStack.empty())
		return true;
	return false;
}

void Stack::push(int n) { // Using the end of the vector as the front of the stack
	vStack.push_back(n);
}

void Stack::pop() {
	vStack.pop_back();
}

int Stack::front() {
	return vStack.back();
}

int Stack::average() {
	int total = 0;
	for (auto i : vStack) // Iterate through the vector and add the integers to the total
		total += i;
	return total / vStack.size(); // Return the average
}