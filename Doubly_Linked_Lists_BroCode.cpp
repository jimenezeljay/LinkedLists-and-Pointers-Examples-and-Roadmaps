#include <iostream>

// Node structure represents an element in the doubly linked list
template <typename T>
struct Node {
    T data;         // Data of the node
    Node* prev;     // Pointer to the previous node in the list
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with data and null prev/next pointers
    Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}
};

// DoublyLinkedList class represents a doubly linked list
template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;  // Pointer to the first node in the list

public:
    // Constructor initializes an empty list
    DoublyLinkedList() : head(nullptr) {}

    // Insert a new node with the given value at the beginning of the list
    void insert(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        if (head) {
            head->prev = newNode;
        }
        head = newNode;
    }

    // Display the elements of the list
    void display() const {
        Node<T>* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Destructor to free the memory allocated for nodes when the list is destroyed
    ~DoublyLinkedList() {
        Node<T>* current = head;
        while (current) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    // Example usage of the doubly linked list
    DoublyLinkedList<int> myList;
    myList.insert(3);
    myList.insert(7);
    myList.insert(1);

    myList.display();

    return 0;
}
