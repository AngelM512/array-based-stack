#include <iostream>
#include "ArrayStack.h"
#include <typeinfo>


ArrayStack::ArrayStack() : top(-1) {};

/*****************************************************/
/* Function:   isEmpty                               */
/* Inputs:     none                                  */
/* Outputs:    true if stack is empty; otherwise false*/
/* Purpose:    sees whether this stack is empty      */
/*****************************************************/
bool ArrayStack::isEmpty() const
{
    if(top == -1)
        {
            cout << "** The Stack Is Empty **" << endl;
            return 1;
        } 
    else return 0;
};
/*****************************************************/
/* Function:   pop                                    */
/* Inputs:     none                                  */
/* Outputs:    true is operation is succesful else false */
/* Purpose:    removes the last item added to the stack */
/*****************************************************/
bool ArrayStack::pop()
{
    bool result = false;
    if ( !isEmpty() )
    {
        
        top--;
        result = true;
        cout << "\n** Last Item Has Been Deleted **\n";
    };
    return result;
    
};

/*****************************************************/
/* Function:   push                                  */
/* Inputs:     an entry                              */
/* Outputs:    True is operation is succesful        */
/* Purpose:    adds a given entry at the top of the stack */
/*****************************************************/
bool ArrayStack::push(const Item& entry)
{
    bool result = false;
    if ( top < (DEFAULT_SIZE - 1) ) 
    {
        top++;
        item[top] = entry;
        result = true;
    } // end if
    return result;
};
/*****************************************************/
/* Function:   display                               */
/* Inputs:     none                                  */
/* Outputs:    shows the stack                       */
/* Purpose:    Helps the user visualize everything 
               that is in the stack.                 */
/*****************************************************/
void ArrayStack::display()
{
    cout <<"----------------------------------|";
    if (!isEmpty()){
        for (int i = top; i >= 0; i--)
        {
            cout << "\nItem Name: " << item[i].getItem() << "\n"
                << "Color: " << item[i].getColor() << "\n" 
                <<"----------------------------------|";
        };
    }
};
/******************************************************/
/* Function:   peek                                   */
/* Inputs:     none                                   */
/* Outputs:    copy of the top of the stack           */
/* Purpose:    returns the last item added to the stack
               most recently                          */
/******************************************************/
Item ArrayStack::peek() const
{
    assert(!isEmpty()); //Enforce precondition during debugging
    
    return item[top]; // stack not empty then return the top
}; // end implementation file.
