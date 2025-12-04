
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Circl_LinkedList {

    Node* head;
public:
    Circl_LinkedList() {
        head = NULL;
    }

    void insert_End(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }

    void insert_Beginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }

    void delete_Node(int value) {
        if (head == NULL) return;
        Node* temp = head;
        Node* prev = NULL;
        do {
            if (temp->data == value) break;
            prev = temp;
            temp = temp->next;
        } while (temp != head);
        if (temp->data != value) return;
        if (temp == head && temp->next == head) {
            head = NULL;
        } else if (temp == head) {
            prev = head;
            while (prev->next != head) {
                prev = prev->next;
            }
            head = head->next;
            prev->next = head;
        } else {
            prev->next = temp->next;
        }
        delete temp;
    }
};

int main() {
    return 0;

}
