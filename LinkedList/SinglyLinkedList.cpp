#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head , int val){

    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;

}

void insertAtTail(Node* head , int val){

    while(head != NULL){

        if(head->next == NULL){
            Node* newNode = new Node(val);
            head->next = newNode;
            break;
        }
        head = head->next;
    }
}

void insertAtPostion(Node* &head, int val, int position){

    Node* newNode = new Node(val);
    int currentPosition = 0;

    if(position == 0){
        insertAtHead(head,val);
        return;
    }

    Node* temp = head;

    while(currentPosition != position-1){

        temp = temp->next;
        currentPosition++;

    }
    if(temp->next == NULL){
        cout<<"Enter a valid position";
    }

    newNode->next = temp->next;
    temp->next = newNode;

}

void displayLinkedList(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}


int main(){

    Node* head = NULL;

    insertAtHead(head,1);
    displayLinkedList(head);
    insertAtHead(head,2);
    displayLinkedList(head);
    insertAtHead(head,3);
    displayLinkedList(head);
    insertAtHead(head,4);
    displayLinkedList(head);
    insertAtTail(head,9);
    displayLinkedList(head);
    insertAtTail(head,8);
    displayLinkedList(head);
    insertAtHead(head,0);
    insertAtTail(head,7);
    displayLinkedList(head);

    insertAtPostion(head,6,9);
    displayLinkedList(head);
    displayLinkedList(head);


}