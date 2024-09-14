1. Operator Overloading in C++

The advantage of Operators overloading is to perform different operations on the same operand.

Operator that cannot be overloaded are as follows:

Scope operator (::)
Sizeof
member selector(.)
member pointer selector(*)
ternary operator(?:)
 
2. ++var, var++ operators:

 In the case that the increase operator is used as a prefix (++x) of the value, the expression evaluates to the final value of x, once it is already increased. On the other hand, in case that it is used as a suffix (x++), the value is also increased, but the expression evaluates to the value that x had before being increased. 

2. Function Overloading in C++ (Adhoc polymorphism)

The advantage of Function overloading is that it increases the readability of the program because you don't need to use different names for the same action.

3. Static Function Members

By declaring a function member as static, you make it independent of any
particular object of the class. A static member function can be called 
even if no objects of the class exist and the static functions are accessed
using only the class name and the scope resolution operator ::.

 A static member function can only access static data member, other static
 member functions and any other functions from outside the class.

 Static member functions have a class scope and they do not have access
 to the this pointer of the class. You could use a static member function
 to determine whether some objects of the class have been created or not.