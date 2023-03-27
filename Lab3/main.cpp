#include <iostream>
using namespace std;


class Node {
public:
    Node* next;
    int data;
};

class Queue {
private:
    Node* front;
    Node* rear;
    int counter;

public:

    Queue() {
        front = NULL;
        rear = NULL;
        counter = 0;
    }


    void enqueue(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if (isEmpty()) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
        counter++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Underflow condition." << endl;
        }
        else {
            Node* temp = front;
            front = front->next;
            delete temp;
            counter--;
        }
    }


    int top() {

        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        else {
            return front->data;
        }
    }


    bool isEmpty() {
        return (counter == 0);
    }


    int size() {
        return counter;
    }


    void traverse() {

        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
        }
        else {
            Node* temp = front;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    void reversal() {

        Node *prev = NULL;
        Node *curr = front;
        Node *next = curr->next;

        while (next != NULL) {
            curr->next = prev;
            prev = curr;
            curr = next;
            next = curr->next;
        }

        curr->next = prev;
        front = curr;
    }
};int main() {
    Queue queue;

    queue.enqueue(5);
    queue.enqueue(8);
    queue.enqueue(12);
    queue.enqueue(21);

    cout << "Size of queue: " << queue.size() << endl;
    cout << "Top of queue: " << queue.top() << endl;
    cout << "Queue: ";
    queue.traverse();

    cout << endl;

    queue.dequeue();
    cout << "Size of after dequeue: " << queue.size() << endl;
    cout << "Top of after dequeue: " << queue.top() << endl;
    cout << "Queue after dequeue: ";
    queue.traverse();

    queue.reversal();
    cout << "Queue after reverse: ";
    queue.traverse();
    cout << "Top of after reversal: " << queue.top() << endl;
    return 0;
}