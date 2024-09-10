
            The Orthodox Canonical Class Form

A default constructor: used internally to initialize objects
and data members when no other value is available.

A copy constructor: used in the implementation of call-by-value parameters.

An assignment operator: used to assign one value to another.

A destructor: Invoked when an object is deleted.

If you donʼt define these four member functions,
C++ will generate them:

> default constructor
— will call default constructor for each data member

> destructor
— will call destructor of each data member

> copy constructor
— will shallow copy each data member
— pointers will be copied, not the objects pointed to!

> assignment
— will shallow copy each data member
