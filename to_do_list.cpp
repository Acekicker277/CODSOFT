Here’s a customized version of your To-Do List project, modified to reflect your ownership while keeping the functionality intact. You can rename variables, tweak messages, or enhance features if needed.


---

Oyetola's To-Do List Application (C++)

#include <iostream>
using namespace std;

const int maxTasks = 10; // Maximum number of tasks allowed

class ToDoList
{
private:
    string tasks[maxTasks];
    string status[maxTasks];
    int taskCount = 0;

public:
    void displayMenu()
    {
        cout << "\n====== Oyetola's To-Do List ======" << endl;
        cout << " 1. Add a New Task" << endl;
        cout << " 2. View All Tasks" << endl;
        cout << " 3. Update Task Status" << endl;
        cout << " 4. Remove a Task" << endl;
        cout << " 5. View Task Status" << endl;
        cout << " 6. Exit" << endl;
    }

    void addTask(const string& description)
    {
        if (taskCount < maxTasks)
        {
            tasks[taskCount] = description;
            status[taskCount] = "Incomplete";
            taskCount++;
            cout << "✔ Task added successfully!" << endl;
        }
        else
        {
            cout << "❌ Task list is full!" << endl;
        }
    }

    void viewTasks()
    {
        if (taskCount == 0)
        {
            cout << "No tasks available." << endl;
            return;
        }
        
        cout << "\nYour To-Do List:" << endl;
        for (int i = 0; i < taskCount; i++)
        {
            cout << (i + 1) << ". " << tasks[i] << " [Status: " << status[i] << "]" << endl;
        }
    }

    void updateTaskStatus(int taskNumber, const string& newStatus)
    {
        if (taskNumber >= 1 && taskNumber <= taskCount)
        {
            status[taskNumber - 1] = newStatus;
            cout << "✔ Task status updated successfully!" << endl;
        }
        else
        {
            cout << "❌ Invalid task number! Please enter a valid one." << endl;
        }
    }

    void viewTaskStatus()
    {
        if (taskCount == 0)
        {
            cout << "No tasks available to show status." << endl;
            return;
        }

        cout << "\nTask Status List:" << endl;
        for (int i = 0; i < taskCount; i++)
        {
            cout << "Task " << (i + 1) << ": " << status[i] << endl;
        }
    }

    void removeTask(int taskNumber)
    {
        if (taskNumber >= 1 && taskNumber <= taskCount)
        {
            for (int i = taskNumber - 1; i < taskCount - 1; i++)
            {
                tasks[i] = tasks[i + 1];
                status[i] = status[i + 1];
            }
            taskCount--;
            cout << "✔ Task removed successfully!" << endl;
        }
        else
        {
            cout << "❌ Invalid task number!" << endl;
        }
    }
};

int main()
{
    ToDoList myList;
    int choice, taskNumber;
    string description, newStatus;

    while (true)
    {
        myList.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Enter your task description: ";
            getline(cin, description);
            myList.addTask(description);
            break;
        case 2:
            myList.viewTasks();
            break;
        case 3:
            cout << "Enter task number to update: ";
            cin >> taskNumber;
            cin.ignore();
            cout << "Enter new status (Completed, In Progress, Incomplete): ";
            getline(cin, newStatus);
            myList.updateTaskStatus(taskNumber, newStatus);
            break;
        case 4:
            cout << "Enter task number to remove: ";
            cin >> taskNumber;
            myList.removeTask(taskNumber);
            break;
        case 5:
            myList.viewTaskStatus();
            break;
        case 6:
            cout << "Goodbye! Keep organizing your tasks efficiently. ✨" << endl;
            return 0;
        default:
            cout << "❌ Invalid choice! Please select a valid option." << endl;
        }
    }
}


---

Changes & Personalization:

✅ Renamed class to ToDoList (your personal branding)
✅ Improved output messages for clarity and engagement
✅ Made menu options more user-friendly
✅ Added safeguards for empty task lists
✅ Enhanced readability with clean formatting

This is now your personalized version of the To-Do List project! 🚀
Would you like to add more features (like saving tasks to a file) or keep it simple for now?

