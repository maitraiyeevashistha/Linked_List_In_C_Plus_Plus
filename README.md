# Experiment 17: Linked Lists in C++

## Title: Understanding Linked lists in C++

-----
##  Aim
To study and implement linked list data structures in C++ by performing:
- Basic node creation and understanding syntax.
- Linking multiple nodes together and traversing the list.
- Insertion of nodes at the head of the list.

---

## Tools Used
- Visual Studio Code (VS Code)

---

## Theory

### Linear Data Structures
- Store elements sequentially.  
- Examples: Arrays, Stacks, Queues, Linked Lists.  
- Operations like insertion, deletion, and traversal are sequential.  

### Linked Lists
- A **dynamic linear data structure** consisting of **nodes**.  
- Each node contains:  
  - **Data** – the value stored.  
  - **Next pointer** – address of the next node.  
- The first node is called **head**.  
- The last node points to **NULL** (or head in circular lists).  
- Nodes are stored **non-contiguously** in memory.  

**Block Representation of a Node**
```
+-----------+-----------+
|   Data    |   Next    |
+-----------+-----------+
```

**Example:**
```
Head → [1 | next] → [ 2 | next] → [7 | NULL]
```

---

### Types of Linked Lists

1. **Singly Linked List**
   - One pointer (next).  
   - Traversal forward only.  
   - Last node → NULL.  

   Example:  
   `Head -> [Data | Next] -> [Data | Next] -> NULL`  

2. **Doubly Linked List**
   - Two pointers (prev, next).  
   - Traversal forward and backward.  
   - More memory per node.  
   - Example:  
   `NULL <- [Prev | Data | Next] <-> [Prev | Data | Next] -> NULL`  

3. **Circular Linked List**
   - Last node points back to head.  
   - Can be singly or doubly.  
   - Useful in **round-robin scheduling**.  

   Example:  
   ```
   [Head] -> [Data | Next] -> [Data | Next]
      ^                             |
      +-----------------------------+
   ```

---

###  Difference Between Types of Linked Lists

| Feature | Singly Linked List | Doubly Linked List | Circular Linked List |
|---------|--------------------|--------------------|----------------------|
| Traversal | Forward only | Forward & backward | Forward (singly) / Both (doubly) |
| Pointers per Node | 1 (next) | 2 (prev & next) | 1 or 2 |
| End of List | NULL | NULL | Head |
| Insertion | Easy at head | Easy anywhere | Easy at head |
| Deletion | Moderate | Easy if pointer known | Moderate |
| Memory | Low | Higher | Slightly higher |
| Use Case | Simple lists, stacks | Undo/Redo, history | Scheduling, buffers |

---

###  Linked List vs Array/Stack/Queue

| Aspect | Array | Stack | Queue | Linked List |
|--------|-------|-------|-------|-------------|
| Structure | Contiguous memory | LIFO | FIFO | Nodes via pointers |
| Access | O(1) by index | O(n) | O(n) | O(n) |
| Insertion | Costly | O(1) push/pop | O(1) ends | O(1) head/tail |
| Deletion | Costly | O(1) | O(1) front | O(1) pointer update |
| Size | Fixed | Dynamic | Dynamic | Dynamic |
| Memory | Only data | Overhead if dynamic | Overhead if dynamic | Extra pointer |
| Applications | Tables | Function calls | Scheduling | Graphs, dynamic data |

---

##  Algorithms & Flowcharts

### Program 1: Basic Node Creation
**Algorithm**
1. Start.  
2. Define Node with data & pointer.  
3. Create node dynamically.  
4. Print data and pointer.  
5. End.  


---

### Program 2: Linking Multiple Nodes
**Algorithm**
1. Start.  
2. Create multiple nodes dynamically.  
3. Link nodes sequentially.  
4. Traverse from head & print data.  
5. End.  


---

### Program 3: Insertion at Head
**Algorithm**
1. Start with head = NULL.  
2. Create new node.  
3. new_node->next = head.  
4. head = new_node.  
5. Display list.  
6. End.  


---



## Conclusion

This experiment explained the fundamentals of **linked lists** in C++, covering node creation, linking, and insertion at the head. Unlike arrays, linked lists provide **dynamic size, efficient insertions, and flexible memory usage**. They are widely used in **memory management, operating systems, compilers, databases, and real-time applications** where dynamic storage and fast modification are essential.

