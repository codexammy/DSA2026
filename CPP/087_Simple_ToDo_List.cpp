/*
 * Program: Simple To-Do List
 * Description: A menu-driven program to manage a simple to-do list.
 *              Allows adding tasks, viewing all tasks, and marking tasks as done.
 *
 * Features: Add task, View tasks, Delete task, Exit
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string tasks[100];
    bool isDone[100] = {false};
    int taskCount = 0;
    int choice;
    cout << "===== Simple To-Do List =====" << endl;
    do {
        cout << "\n1. Add Task" << endl;
        cout << "2. View All Tasks" << endl;
        cout << "3. Mark Task as Done" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();  // Clear the newline from buffer
        if (choice == 1) {
            if (taskCount < 100) {
                cout << "Enter task: ";
                getline(cin, tasks[taskCount]);
                isDone[taskCount] = false;
                taskCount++;
                cout << "Task added!" << endl;
            } else {
                cout << "Task list is full!" << endl;
            }
        } else if (choice == 2) {
            if (taskCount == 0) {
                cout << "No tasks yet." << endl;
            } else {
                cout << "\n--- Your Tasks ---" << endl;
                for (int i = 0; i < taskCount; i++) {
                    cout << (i + 1) << ". ";
                    cout << (isDone[i] ? "[DONE] " : "[    ] ");
                    cout << tasks[i] << endl;
                }
            }
        } else if (choice == 3) {
            cout << "Enter task number to mark done: ";
            int taskNum;
            cin >> taskNum;
            if (taskNum >= 1 && taskNum <= taskCount) {
                isDone[taskNum - 1] = true;
                cout << "Task " << taskNum << " marked as done!" << endl;
            } else {
                cout << "Invalid task number!" << endl;
            }
        } else if (choice != 4) {
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    cout << "Goodbye!" << endl;
    return 0;
}
