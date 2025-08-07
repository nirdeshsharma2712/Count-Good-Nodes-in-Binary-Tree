# 📊 LeetCode Problem: Count Good Nodes in Binary Tree

## 🧩 Problem Statement

Given a **binary tree** `root`. Return the number of **good nodes** in the binary tree.

> **Note :**
> -  A node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.


## 🧠 Approach: recursive traversal

- Maintain a vector to store the path from the root to the current node.

- At each node:

> - Compare its value to the last element of the vector (max so far).
> - If it is greater than or equal, consider it a "good" node and insert it into the vector.

- Use a flag = false if it doesn't qualify as a good node.

- After the left & right calls:

> - If the node was considered good, increment the count.
> - Backtrack by popping the last element to maintain path integrity.

- Base Case:
> - If the current node is NULL, simply return 0.



## ✅ Example Walkthrough

### Example 1

##### Input: root = [3,1,4,3,null,1,5]
##### Output: 4

##### Explanation: 
<pre> 
- Root Node (3) is always a good node.
- Node 4 -> (3,4) is the maximum value in the path starting from the root.
- Node 5 -> (3,4,5) is the maximum value in the path
- Node 3 -> (3,1,3) is the maximum value in the path.
  
</pre>

### Example 2

##### Input: root = [3,3,null,4,2]
##### Output: 3

##### Explanation: 
<pre> 
  - Node 2 -> (3, 3, 2) is not good, because "3" is higher than it.
</pre>

### Example 3

##### Input: root = [1]
##### Output: 1

##### Explanation: 
<pre> 
  - Root is considered as good.
</pre>

## 🛠️ Constraints

- The number of nodes in the binary tree is in the range `[1, 10^5]`
- Each node's value is between `[-10^4, 10^4]`
