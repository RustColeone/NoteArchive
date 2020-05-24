#ifndef linkedListFuncs_H
#define linkedListFuncs_H

struct Node {
    int data;
    Node *next;
};

Node* findKthNode(Node *head, int k);


Node* removeKFromFront(Node *head, int k);


Node* sum(Node *head1, Node *head2);


Node* splice(Node *head1, Node *head2);


#endif