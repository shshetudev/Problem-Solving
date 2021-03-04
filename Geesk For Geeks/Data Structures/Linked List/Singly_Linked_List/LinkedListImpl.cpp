#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // Allocate 3 nodes in heap
    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1; // Assign data in first node
    head -> next = second; // Link first node with the second node

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;
    
    return 0;
}
