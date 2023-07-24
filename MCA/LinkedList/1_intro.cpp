#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void insertArHead(Node* &head, int val){
    Node* n = new Node(val);

    n->next = head;
    head = n;
}

void deletion(Node* &head, int val){
    Node* temp =  head;

    if(head == NULL){
        return;
    }

    while(temp->next->data != val){
        temp = temp->next;
    }

    Node* toDelete = temp->next;

    temp->next = temp->next->next;
    delete toDelete;
}

void deleteAtHead(Node* &head){
    Node* toDelete = head;

    head = head ->next;
    delete toDelete;
}

void display(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout << temp->data << " -> ";
        temp= temp->next;
    }
    cout << "NULL" << endl;

}

int main(){
    Node* head = NULL;

    insertArHead(head, 10);

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    deletion(head, 3);
    display(head);

}