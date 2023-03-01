KY_Vector documatation
-------------------------

- Overview:

This code is a C++ implementation of a dynamic array class called KYVector. It includes methods for creating a vector, copying a vector, destroying a vector, accessing and modifying elements, and comparing vectors. It also includes methods for inserting and erasing elements at specified positions, and for checking if one vector is greater than another.

================================================
Some specific methods and features of the class are:

•	Constructors: KYVector can be created using an integer parameter, which specifies the initial capacity of the vector, or by passing an array and its size. A copy constructor is also implemented.

•	Destructor: The destructor frees the memory allocated to the vector.

•	Assignment operator: The assignment operator is implemented to enable the assignment of one KYVector object to another.

•	Index operator: The index operator is implemented to enable accessing and modifying the elements of the vector.

•	push_back() and pop_back(): push_back() adds a new element at the end of the vector, while pop_back() removes the last element and returns it.

•	erase(): The erase() method can be called with a single iterator parameter to remove the element at the specified position, or with two iterators to remove elements within a range.

•	clear(): The clear() method removes all elements from the vector.

•	insert(): The insert() method inserts an element at the specified iterator position.

•	Comparison operators: The comparison operators are implemented to compare two KYVector objects.

