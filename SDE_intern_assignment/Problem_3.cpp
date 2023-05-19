#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    //Constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};


int getMiddle(Node* head) {
    if (head == NULL) {
        cout << "The linked list is empty." << endl;
        return -1; ///if head is null it means linkedlist is empty return -1
    }
  
    Node* slow = head;
    Node* fast = head;
    //using tortoise and hair algorithm
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main() {
   //Initilizing the linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout << "Middle element: " << getMiddle(head) <<'\n';//when length is odd
    head->next->next->next->next->next = new Node(6);
    cout << "Middle element: " << getMiddle(head) << '\n';//when length is even
    return 0;
}
