// TO-DO LIST (Console Based) - Easy C++
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

struct Task {
    string name;
    bool completed;
};

void addTask(vector<Task> &tasks) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    Task t;
    cout << "Enter task: ";
    getline(cin, t.name);
    t.completed = false;
    tasks.push_back(t);
    cout << "✅ Task added!\n";
}

void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks found.\n";
        return;
    }

    cout << "\n--- Your Tasks ---\n";
    for (int i = 0; i < (int)tasks.size(); i++) {
        cout << i + 1 << ") "
             << (tasks[i].completed ? "[Done] " : "[Pending] ")
             << tasks[i].name << "\n";
    }
}

void markCompleted(vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks to mark.\n";
        return;
    }

    int n;
    viewTasks(tasks);
    cout << "Enter task number to mark completed: ";
    cin >> n;

    if (n < 1 || n > (int)tasks.size()) {
        cout << "❌ Invalid task number!\n";
        return;
    }

    tasks[n - 1].completed = true;
    cout << "✅ Marked as completed!\n";
}

void removeTask(vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks to remove.\n";
        return;
    }

    int n;
    viewTasks(tasks);
    cout << "Enter task number to remove: ";
    cin >> n;

    if (n < 1 || n > (int)tasks.size()) {
        cout << "❌ Invalid task number!\n";
        return;
    }

    tasks.erase(tasks.begin() + (n - 1));
    cout << "✅ Task removed!\n";
}

int main() {
    vector<Task> tasks;
    int choice;

    do {
        cout << "\n===== TO-DO LIST MANAGER =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: viewTasks(tasks); break;
            case 3: markCompleted(tasks); break;
            case 4: removeTask(tasks); break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "❌ Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
