#include <iostream>
using namespace std;

struct Task {
    string desc;
    Task* next;
};

void display(Task* head) {
    cout << "To-Do List:" << endl;
    int i = 1;
    while (head) {
        cout << i++ << ". " << head->desc << endl;
        head = head->next;
    }
}

int main() {
    Task* head = nullptr;
    Task* tail = nullptr;
    string desc;
    int n;
    cout << "Enter number of tasks: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        cout << "Task " << (i+1) << ": ";
        getline(cin, desc);
        Task* temp = new Task{desc, nullptr};
        if (!head) { head = temp; tail = temp; }
        else { tail->next = temp; tail = temp; }
    }
    display(head);
    return 0;
}