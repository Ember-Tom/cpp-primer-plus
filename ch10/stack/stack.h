// stack.h -- class definition for the stack ADT

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:

    // constant specific to class
    enum {MAX = 10};
    // holds stack items
    Item items[MAX];
    // index for top stack item
    int top;

public:

    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    // add item to stack
    bool push(const Item & item);
    // pop() returns false if stack already is empty, true otherwise
    // pop top into item
    bool pop(Item & item);

};

#endif