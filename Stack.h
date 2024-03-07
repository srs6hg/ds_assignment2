#pragma once
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> vStack{};
public:
    bool empty();
    void push(int);
    void pop();
    int front();
    int average();
};