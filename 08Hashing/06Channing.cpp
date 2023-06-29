// Chaining 

// performance 
// m=no of slots in hash table
// n=no of keys to be inserted in hash table

// load factor alpha=n/m
// expected chain length=alpha
// expected time to search=O(1+alpha)
//expected time to insert /delete =O(1+alpha)

// data structure for storing chains

// 1-> 
// linked list =>search O(l) ,delete O(l) ,insert O(l)
// it is not cache friendly
// it is takes extra space to store references of next node

// 2->
// dynamic sized arrays
// vectors in c++
// cache friendly
// self balanced BST (AVL tree ,red black tree)
// O(log l) -> for search insert and delete
// it is not cache friendly