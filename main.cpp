#include <iostream>
using namespace std;

// Node structure
struct Node {
    int id;
    string name;
    float balance;
    Node* next;
};

Node* head = NULL;

// Create Account
void createAccount() {
    Node* newNode = new Node;

    cout << "Enter ID: ";
    cin >> newNode->id;
    cout << "Enter Name: ";
    cin >> newNode->name;
    cout << "Enter Initial Balance: ";
    cin >> newNode->balance;

    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }

    cout << "Account Created Successfully!\n";
}

// Display Accounts
void displayAccounts() {
    if (head == NULL) {
        cout << "No accounts available.\n";
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << "\nID: " << temp->id;
        cout << "\nName: " << temp->name;
        cout << "\nBalance: " << temp->balance << endl;
        temp = temp->next;
    }
}

// Search Account
Node* searchAccount(int id) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->id == id)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// Deposit Money
void deposit() {
    int id;
    float amount;

    cout << "Enter Account ID: ";
    cin >> id;

    Node* acc = searchAccount(id);

    if (acc != NULL) {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        acc->balance += amount;
        cout << "Amount Deposited Successfully!\n";
    } else {
        cout << "Account not found!\n";
    }
}

// Withdraw Money
void withdraw() {
    int id;
    float amount;

    cout << "Enter Account ID: ";
    cin >> id;

    Node* acc = searchAccount(id);

    if (acc != NULL) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (acc->balance >= amount) {
            acc->balance -= amount;
            cout << "Withdrawal Successful!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    } else {
        cout << "Account not found!\n";
    }
}

// Delete Account
void deleteAccount() {
    int id;
    cout << "Enter Account ID to delete: ";
    cin >> id;

    Node* temp = head;
    Node* prev = NULL;

    if (temp != NULL && temp->id == id) {
        head = temp->next;
        delete temp;
        cout << "Account Deleted!\n";
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Account not found!\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Account Deleted!\n";
}

// Main Function
int main() {
    int choice;

    do {
        cout << "\n\n===== BANK SYSTEM MENU =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Delete Account\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: displayAccounts(); break;
            case 3: deposit(); break;
            case 4: withdraw(); break;
            case 5: deleteAccount(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}


