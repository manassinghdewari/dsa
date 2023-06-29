// in the open addresing we don't want to chains
// we will do in thhe same hash table 

// we will achhhive open addresing by using the linear probing
// linear probing means we will searchh lineary for next empty slot 
// when there is a collision
// it willl first chheck key%7 if it is not empty
// then will find next empty slot

// no of slots in hash table >=no of keys to be inserted
// cache friendly

// see the one note
// for diagram

// search

// we compute hash fuction we go to that index and compare
// if we find we return true
// othherwise we linearly search.
// we stop in one of the 3 case
// 1-> empty slot
// 2-> key found
// 3->traversed throughhh the array

// deleting
// problem with simply making the slot empty we delete
// we will mark the deleted slot as deleted


// now we will discuss the prblem with linear probing 
// Clustering


