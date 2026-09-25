#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Queue
Node* front = NULL;
Node* rear = NULL;

void enqueue(int data) {
    Node* baru = new Node{data, NULL};

    if (rear == NULL) {
        front = rear = baru;
    } else {
        rear->next = baru;
        rear = baru;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong\n";
        return;
    }

    Node* hapus = front;
    front = front->next;
    delete hapus;
}

// Stack
Node* top = NULL;

void push(int data) {
    Node* baru = new Node{data, top};
    top = baru;
}

void pop() {
    if (top == NULL) {
        cout << "Stack kosong\n";
        return;
    }

    Node* hapus = top;
    top = top->next;
    delete hapus;
}

void tampilQueue() {
    Node* bantu = front;

    cout << "Queue: ";
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

void tampilStack() {
    Node* bantu = top;

    cout << "Stack: ";
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    push(10);
    push(20);
    push(30);

    tampilQueue();
    tampilStack();

    dequeue();
    pop();

    cout << "Setelah dihapus:\n";
    tampilQueue();
    tampilStack();

    return 0;
}