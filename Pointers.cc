#include<iostream>
using namespace std;
int main()
{
    int a;       //declaring variable
    int *b;      //declaring integer pointer
    
    a=12;               // initallizing variable 
   
    b=&a;       //pointing towards variable 'a' by passing address of 'a' in pointer 'b'
    
    cout<<b<<"\n";    //printing value of pointer
    cout<<*b;         //printing value of at which 'b' points
    return 0;
}

/* Output

   address     --   ( of 'a' as pointer stores address to which it points example- 0x7ffe2ef7c14c)
   12          --   (print value stored inside variable to which pointer points)

*/
