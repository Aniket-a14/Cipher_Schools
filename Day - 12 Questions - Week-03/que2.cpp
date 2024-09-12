// Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
// Output: The linked list becomes 10 -> 20 -> 30 -> 40


#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node *createLinkedList(int arr[], int index, int size, node *prev)
{
    if (index == size)
    {
        return prev;
    }
    node *temp = new node(arr[index]);
    temp->next = prev;
    return createLinkedList(arr, index + 1, size, temp);
}

int main()
{
    node *head = NULL;
    node *prev = head;
    int arr[] = {23, 6, 4, 6, 44, 6, 3, 3, 5, 53, 6, 53};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    head = createLinkedList(arr, index, size, prev);


    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
