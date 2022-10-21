//Stable Partition algorithm problem in cpp

#include <vector>    
#include <algorithm>    
#include <iostream>    
    
bool greater5 ( int value ) {    
   return value >5;    
}    
    
int main( ) {    
   using namespace std;    
   vector <int> v1, v2;    
   vector <int>::iterator Iter1, Iter2, result;    
    
   int i;    
   for ( i = 0 ; i <= 10 ; i++ )    
      v1.push_back( i );    
    
   int ii;    
   for ( ii = 0 ; ii <= 4 ; ii++ )    
      v1.push_back( 5 );    
    
   random_shuffle(v1.begin( ), v1.end( ) );    
    
   cout << "Vector v1 is ( " ;    
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )    
      cout << *Iter1 << " ";    
   cout << ")." << endl;    
    
   // Partition the range with predicate greater10    
   result = stable_partition (v1.begin( ), v1.end( ), greater5 );    
   cout << "The partitioned set of elements in v1 is:\n ( " ;    
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )    
      cout << *Iter1 << " ";    
   cout << ")." << endl;    
    
   cout << "The first element in v1 to fail to satisfy the"    
        << "\n predicate greater5 is: " << *result << "." << endl;    
          
        return 0;  
}
