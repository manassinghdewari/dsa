// open Addresing

// Double Hashing ->
// hash(key,i)=(h1(key)+i*h2(key))%m

// if h2(key) is relatively prime to m, then it always find a 
// free slot if there is one.

// Distributes keys more uniformly than linear probing and 
// quadratic hashing

// No clustering

// hash(key,i)=(h1(key)+ih2(key)%m)
// m=7
// h1(key)=(key%7)
// h2(key)=6-(key%6)
// we made h2 function like this bcz it should't return zero
// bcz if returns zero then elements gets into same position

//  we have done %6 bcz it always returns values 0 to 5
// and then 6 minus (0 to 5) will never be zero

// 10%6=>4
// 215%6=>5

// i value will change according to number of times colision 
// occurs

// for first time it zero
// if first time collision occred then i=1

//  if second time collision occred then i=2 and so on
// now see the one onote

// so double hashing

// void doubleHashingInsert(key)
// {
//     if(table if full)
//         return error
//     probe=h1(key),offset=h2(key);
//     while(table[probe] is occupied)
//         probe=(probe+offset)%m;
//     table[probe]=key;
// } 

// now see the notes