#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* previous;

};

//starts from the head
void printForward(Node*head){
    Node* traverser = head;
    while(traverser != nullptr) {
        cout << traverser->value<<endl;//prints value of traverser
        traverser = traverser->next;//move to the next node/successor
    }
}

//starts from the tail
void printBackward(Node*tail){
    Node* traverser = tail;
    while(traverser != nullptr) {
        cout << traverser->value<<endl;
        traverser = traverser->previous;
    }
}

int main() 
{

    //4. create head and tail for this node
    Node* head;
    Node* tail;

    //add 1st node
    Node* node = new Node();//1. create a new node
    node->value = 4; //2. set the value for this node
    node->next = nullptr;//3. sets 'next' and 'previous' as NULL
    node->previous = nullptr;//3.
    head = node;//4.
    tail = node;//4.



//add 2nd Node
    node = new Node();//1. create a new node
    node->value = 5;//2. node points to value = to 5
    node->next = nullptr;//3. node 'next' points to NULL and 'previous' points = to tails 
    node->previous = tail;//3.
    tail->next = node;//4. gets rid of 'next' = to NULL on the first pointer and points to the second node
    tail = node;//5. tail = node now


//add 3nd Node
    node = new Node();//1. create a new node
    node->value = 6;//2. node points to value = to 5
    node->next = nullptr;//3. node 'next' points to NULL and 'previous' points = to tails 
    node->previous = tail;//3.
    tail->next = node;//4. gets rid of 'next' = to NULL on the first pointer and points to the second node
    tail = node;//5. tail = node now
    
//add 4nd Node
    node = new Node();//1. create a new node
    node->value = 7;//2. node points to value = to 5
    node->next = nullptr;//3. node 'next' points to NULL and 'previous' points = to tails 
    node->previous = tail;//3.
    tail->next = node;//4. gets rid of 'next' = to NULL on the first pointer and points to the second node
    tail = node;//5. tail = node now

    printForward(head);
    printBackward(tail);

    cin.get();

    return 0;
}