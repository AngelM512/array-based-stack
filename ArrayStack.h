#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
#include "item.h"
using namespace std;


class ArrayStack { 

    private:
        static const int DEFAULT_SIZE = 25;
        Item item[DEFAULT_SIZE];
        int top;
    
    public:
        ArrayStack();
        bool isEmpty() const;
        bool pop();
        bool push(const Item& );
        Item peek() const;
        void display();

}; 
#include "ArrayStack.cpp"
#endif 
  