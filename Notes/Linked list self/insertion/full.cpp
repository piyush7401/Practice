#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};

void front_add(node**t,int value){
    node *temp = new node(value);
    /*Prepare a new node*/
    /*Put it in the front of current node*/
    temp->next = *t;
    /*change the head to new node*/
    *t = temp;
}

void print_node(node * head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
}
void add_node(node* second,int value){
    if(second ->next == NULL){
        /*prepare a new node*/
        node *temp = new node(value);
        /*second next link with new node*/
        second -> next = temp;
        /*temp next should be null*/
    }
    else{
        node *temp = new node(value);
        /*Prepare a new node*/
        node * t = second -> next;
        /*store the pointer of second next node*/
        second->next = temp;
        temp -> next = t;
        /*linking the second next to new node and new node next with (old) second next*/
    }
}
int main(){
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    head -> next = second;
    second -> next = third;
    print_node(head);
    front_add(&head,-1);
    print_node(head);
    add_node(second,-2);
    print_node(head);
    add_node(third,-3);
    print_node(head);
}
