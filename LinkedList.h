#pragma once
#include <string>

using namespace std;

struct Node {
    string nodeString;
    Node* nextPtr;
};

class Linked { // Set up for the linked list of nodes
private:
    Node* headPtr;
    Node* tailPtr;
    int numItems = 0;
public:
    Linked();
    Linked(string);
    void pushFront(string);
    void pushBack(string);
    void popFront();
    void popBack();
    Node* front();
    Node* back();
    bool empty();
    void insert(int, string);
    bool remove(int);
    int find(string);
};