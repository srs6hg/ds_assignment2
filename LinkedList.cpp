#include "LinkedList.h"

Linked::Linked() {
    headPtr = nullptr;
    tailPtr = nullptr;
}

void Linked::pushFront(string s) {
    Node* tempNode = new Node;
    tempNode->nodeString = s;
    tempNode->nextPtr = nullptr;
    if (headPtr == nullptr) { // Check if list is empty
        headPtr = tempNode;
        tailPtr = tempNode;
    }
    else {
        tempNode->nextPtr = headPtr;
        headPtr = tempNode;
    }
    numItems++;
}

void Linked::pushBack(string s) {
    Node* tempNode = new Node;
    tempNode->nodeString = s;
    tempNode->nextPtr = nullptr;
    if (headPtr == nullptr) { // Check if list is empty
        headPtr = tempNode;
        tailPtr = tempNode;
    }
    else {
        tailPtr->nextPtr = tempNode;
        tailPtr = tempNode;
    }
    numItems++;
}

void Linked::popFront() {
    if (headPtr == nullptr) { // Check if list is empty
        return;
    }
    else {
        Node* tempNode = headPtr;
        headPtr->nextPtr = headPtr;
        delete tempNode;
    }
    numItems--;
}

void Linked::popBack() {
    if (headPtr == nullptr){} // Check if list is empty

    else {
        Node* tempNode = headPtr;
        while (tempNode->nextPtr != tailPtr) { // Iterate through the list until we are one away from the tail
            tempNode = tempNode->nextPtr;
        }
        Node* tempNode2 = tailPtr; // Change tail and delete the previous tail
        tailPtr = tempNode;
        delete tempNode2;
    }
    numItems--;
}

Node* Linked::front() {
    return headPtr;
}

Node* Linked::back() {
    return tailPtr;
}

bool Linked::empty() {
    if (headPtr == nullptr) {
        return true;
    }
    return false;
}

void Linked::insert(int index, string s) {
    Node* newNode = new Node;
    if (headPtr == nullptr) { // Check if list is empty
        newNode->nextPtr = nullptr;
        newNode->nodeString = s;
        numItems++;
        return;
    }

    Node* tempNode = headPtr;
    for (int i = 0; i < index; i++) { // Iterate through list until we reach the intended index
        tempNode = tempNode->nextPtr;
    }
    newNode->nextPtr = tempNode->nextPtr; // Insert the newNode inbetween tempNode and the next node
    tempNode->nextPtr = newNode;
    newNode->nodeString = s;
    numItems++;
}

bool Linked::remove(int index) {
    Node* tempNode = headPtr;
    for (int i = 0; i < index; i++) { // Iterate through list until we reach the intended index
        if (tempNode->nextPtr == nullptr)
            return false;

        tempNode = tempNode->nextPtr;
    }
}

int Linked::find(string s) {
    Node* tempNode = headPtr;
    for (int i = 0; i < numItems; i++) { // Iterate through list until we reach the node with an equal string
        if (tempNode->nodeString == s)
            return i;
    }
    return -1;
}