# 📘 Bank Management System Documentation (C++)

---

## 🔷 1. Algorithm

### Step 1: Define Structure (Node)
Create a structure to store:
- Account ID
- Name
- Balance
- Pointer to next node

### Step 2: Initialize Head
- Set head = NULL (empty list)

### Step 3: Create Account
- Input ID, Name, Balance
- Create new node
- Insert at end of linked list

### Step 4: Display Accounts
- Traverse from head
- Print all account details

### Step 5: Search Account
- Input ID
- Traverse list
- Return matching node

### Step 6: Deposit Money
- Search account by ID
- Add amount to balance

### Step 7: Withdraw Money
- Search account
- Check balance
- Deduct amount if sufficient

### Step 8: Delete Account
- Search node
- Adjust links
- Delete node

### Step 9: Menu Driven Execution
- Use loop to repeat operations until exit

---

## 🔷 2. Methodology

This project is developed using a **Singly Linked List** to store bank accounts dynamically.

- Each account is stored as a node.
- Nodes are connected using pointers.
- Dynamic memory allocation (`new`) is used.
- Memory is freed using `delete`.

### Why Linked List?
- Flexible size (no fixed limit)
- Easy insertion and deletion
- Efficient memory usage

### Working Flow:
1. User selects operation from menu
2. System performs operation
3. Data is updated in linked list
4. Loop continues until exit

---

## 🔷 3. Time Complexity

| Operation          | Complexity |
|-------------------|-----------|
| Create Account    | O(n)      |
| Display Accounts  | O(n)      |
| Search Account    | O(n)      |
| Deposit Money     | O(n)      |
| Withdraw Money    | O(n)      |
| Delete Account    | O(n)      |

👉 Overall Complexity: **O(n)** per operation

---

## 🔷 4. Space Complexity

- Each account uses one node
- For n accounts → **O(n)**

---

## 🔷 5. Features

- Account Creation
- Display All Accounts
- Deposit Money
- Withdraw Money
- Delete Account

---

## 🔷 6. Technologies Used

- C++
- Linked List Data Structure

---

## 🔷 7. Conclusion

This project demonstrates the use of linked lists in real-world applications like banking systems. It provides efficient data handling and dynamic memory usage.

---
