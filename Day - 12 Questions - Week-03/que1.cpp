// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
// Output: 10 20 30 40

#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int value){
            data=value;
            next=NULL;
        }
};

node* createLinkedList(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node* temp= new node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}

int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int index=0;
    node* head=NULL;
    head=createLinkedList(arr,index,size);

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}

