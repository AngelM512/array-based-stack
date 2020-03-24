#include "item.h"
#include <iostream>
#include <string>
using namespace std;

// template<class Type>
// Item<Type>::Item() {}; // end default constr

Item::Item() {
    itemName = "";
    color = "";
}; // end initializer constructor

/*****************************************************/
/* Function:   setItem                               */
/* Inputs:     string item name                      */
/* Outputs:    a valid user option                   */
/* Purpose:    Set up the itemName private data 
               attribute equal to a given entry.     */
/*****************************************************/
void Item::setItem(string newEntry)
{
    itemName = newEntry;
};

/*****************************************************/
/* Function:   setColor                              */
/* Inputs:     string color name                     */
/* Outputs:    a valid user option                   */
/* Purpose:    set up the color private = to gathered*/
/*             entry.                                */
/*****************************************************/
void Item::setColor(string newEntry)
{
    color = newEntry;
};

/*****************************************************/
/* Function:   getItem                               */
/* Inputs:     none                                  */
/* Outputs:    retrieves a given Item Name           */
/* Purpose:    Return Item String Type               */
/*****************************************************/
string Item::getItem()
{
    return itemName;
};
/*****************************************************/
/* Function:   getColor                              */
/* Inputs:     none                                  */
/* Outputs:    retrieves a given color               */
/* Purpose:    returns color string type             */
/*****************************************************/
string Item::getColor()
{
    return color;
}
