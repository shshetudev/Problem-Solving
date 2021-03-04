#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void traverse(Node* n) {
    while(n != NULL){
        cout << n->data <<" ";
        n = n->next;
    }
}

void insertBeforeHead(Node** head_ref, int new_data) {
    // 1. Allocate node
    Node* new_node = new Node();
    // 2. Put in the data
    new_node->data = new_data;
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
    // 4. Move the head to point to the new node
    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data) {
    // 1. Check if the given prev_node is NULL
    if(prev_node == NULL) {
        cout << "the given previous node can not be NULL";
        return;
    }
    // 2. Allocate new node
    Node* new_node = new Node();
    // 3. Put in the data
    new_node->data = new_data;
    // 4. Make next of new node as next of prev_node
    new_node->next = prev_node->next;
    // 5. Move the next of prev_node as new_node
    prev_node->next = new_node;
}

void insertAtEnd(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    Node* last = *head_ref;
    if(*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while(last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    
    head -> data = 1;
    head -> next = second;
    second -> data = 3;
    second -> next = third;
    third -> data = 4;
    third -> next = NULL;
    insertAfter(head,2);
    insertAtEnd(&head,5);
    traverse(head);
    return 0;
}