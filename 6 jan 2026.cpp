#include <iostream>
using namespace std;

class Node {
    int roll;
    Node* next;

public:
    // Constructor
    Node() {
        roll = 0;
        next = NULL;
    }

    // Getter
    int GetRoll() {
        return roll;
    }

    // Setter
    void SetRoll(int r) {
        roll = r;
    }

    // Give LinkedList access
    friend class LinkedList;
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void AppendNode() {
        int r;
        Node* n = new Node();

        if (n == NULL) {
            return;
        }

        cout << "Enter your roll number: ";
        cin >> r;
        n->SetRoll(r);

        if (head == NULL) {
            head = n;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
        }
    }
};

int main() {
    LinkedList list;
    list.AppendNode();

    return 0;
}




