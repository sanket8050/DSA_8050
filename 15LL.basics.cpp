#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;

    }

    Node(int data){
        this->data = data;
        this->next = NULL;  
    }   
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}

int main(){

    Node* first = new Node(10);
    Node* sec = new Node(30);
    Node* third = new Node(20); 
    Node* forth = new Node(40);
    Node* fifth = new Node(90);

    first->next = sec;
    sec->next = third;
    third->next = forth;
    forth->next= fifth;
    fifth->next = NULL;

    print(first);

}