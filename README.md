# Leetcode-515.-Find-Largest-Value-in-Each-Tree-Row

# 🌳 Largest Value in Each Tree Row

This project implements two approaches—**Breadth-First Search (BFS)** and **Depth-First Search (DFS)**—to solve the problem of finding the largest value in each row of a binary tree.

---

## 🧩 Problem Statement

Given the root of a binary tree, return a vector containing the largest value in each row (i.e., each level) of the tree.

---

## 🚀 Approach 1: Breadth-First Search (BFS)

### ✅ Description
- Performs level-order traversal using a queue.
- For each level, computes the maximum node value.
- Appends the maximum of each level to the result list.

### ⏱️ Time & Space Complexity
- **Time Complexity:** O(N), where N is the number of nodes.
- **Space Complexity:** O(W), where W is the maximum width of the tree (i.e., number of nodes at the widest level).

---

## 🔍 Approach 2: Depth-First Search (DFS)

### ✅ Description
- Recursively traverses the tree using DFS.
- Uses a map to track the largest value at each depth level.
- After traversal, extracts values level-wise from the map.

### ⏱️ Time & Space Complexity
- **Time Complexity:** O(N), where N is the number of nodes.
- **Space Complexity:** O(H + L), where H is the height of the tree and L is the number of distinct levels.

---

## 🔄 Comparison Table

| Feature              | BFS Approach                  | DFS Approach                       |
|----------------------|-------------------------------|------------------------------------|
| Traversal Method     | Level-order (Queue)           | Depth-first (Recursive)            |
| Data Structure Used  | Queue                         | Map                                |
| Level Tracking       | Implicit via queue size       | Explicit via recursion depth       |
| Ordering             | Naturally level-wise ordered  | Extracted from ordered map         |

---

## 👤 Author

**[Ridham Garg]**  
B.Tech Computer Engineering 
Thapar University, Patiala, Punjab  

Passionate about **Computer Vision**, **Deep Learning**, and **Natural Language Processing**.

Currently applying for a **Summer Internship** under **Prof. Raksha Sharma** at **IIT Roorkee**  
📚 Project Focus: *LLMs for Sanskrit Translation and Understanding*

---

## 📄 License

This project is intended for educational and demonstration purposes. Feel free to use and adapt with proper attribution.
