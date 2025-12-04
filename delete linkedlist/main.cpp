#include <iostream>

using namespace std;
struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }
 // Delete a node by value
    void deleteNode(int x) {
        if (head == nullptr) return;

        // Case 1: delete head
        if (head->data == x) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Case 2: delete middle or end
        Node* prev = head;
        Node* curr = head->next;
        while (curr != nullptr && curr->data != x) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr) {
            cout << "Value not found!" << endl;
            return;
        }

        prev->next = curr->next;
        delete curr;
    }

    // Display list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


