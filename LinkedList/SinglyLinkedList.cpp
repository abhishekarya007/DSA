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

void deleteAtHead(Node* &head){
    if(head == NULL){
      cout<<"No node available to delete";  
    }else{
        Node* temp = head;
        head = head->next;
        free(temp); // or delete temp;
    } 

}

void insertAtTail(Node* head , int val){ //head is just a pointer here so won't affect head

    while(head != NULL){

        if(head->next == NULL){
            Node* newNode = new Node(val);
            head->next = newNode;
            break;
        }
        head = head->next;
    }
}

void deleteAtTail(Node* &head){
    if(head == NULL){
        cout<<"Nothing to delete"<<endl;
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        cout<<"sadf";
    } 
    Node* temp = head;

    while(temp->next->next != NULL){ 
        temp = temp->next;
    }

    delete temp->next; // clears the memory location
    temp->next = NULL; // sets the next pointer ot null as tail deleted

}

void insertAtPostion(Node* &head, int val, int position){

    Node* newNode = new Node(val);
    int currentPosition = 0;

    if(position == 0){
        insertAtHead(head,val);
        return;
    }

    Node* temp = head;  //took temp because I passed head by reference

    while(currentPosition != position-1){

        temp = temp->next;
        if(temp == NULL){
            cout<<"Enter a valid position"<<endl;
        return;
    }
        currentPosition++;

    }
    

    newNode->next = temp->next;
    temp->next = newNode;

}

void displayLinkedList(Node* head){
    cout<<head<<endl;
    Node* temp = head;
    cout<<"jii"<<endl;
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

    insertAtPostion(head,6,5);
    displayLinkedList(head);
    deleteAtHead(head);
    deleteAtTail(head);
    deleteAtTail(head);
    deleteAtTail(head);
    deleteAtTail(head);
    deleteAtTail(head);
    deleteAtTail(head);
    deleteAtTail(head);
    displayLinkedList(head);
    deleteAtTail(head);

    displayLinkedList(head);


}