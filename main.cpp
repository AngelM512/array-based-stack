/**********************************************/
/* Angel A Moreta                             */
/* Lab 2                                      */
/* This is an Array-Based implementation of a */
/* Stack where insertion and deletion happen  */
/* at the top of the stack.                   */
/**********************************************/
#include <iostream>
#include <string>
#include "ArrayStack.h"

using namespace std;

void clearW();
int getOption();

int main() 
{   
    // Stack and item objects 
    Item* item, pointerToPeek;
    ArrayStack* stackPtr = new ArrayStack; // dynamic allocation of an array object
   
    // vars 
    string itemKind, color;
    int option = getOption();

    while(option != 5) 
    {
     
        switch(option)
            {
            case 1:
                // gather item kind + color
                clearW();
                cout << "Enter Item name: ";
                cin >> itemKind;
                item -> setItem(itemKind);
                
                cout << "Enter item's color: ";
                cin >> color; 
                item -> setColor(color);

                //-----------------------------------//

                clearW();
                stackPtr -> push(*item); // push to the top 
                break;

            case 2:
                clearW();
                stackPtr -> pop(); // remove last item added
                break;
            case 3:
                clearW();
                pointerToPeek = stackPtr -> peek(); // show last item added
                cout <<"----------------------------------\n";
                cout << "\n\n\t* Top of the stack: ("<<pointerToPeek.getItem() << ")\n";
                cout <<"----------------------------------\n";
                break;
            case 4: 
                clearW();
                stackPtr->display(); // display the entair stack
                break;
            default:
                cout << "*** Invalid Option ***";
                option = getOption(); 
                break;
        };

        // //call menu function again
        option = getOption();
    };
    return 0;
};

/*****************************************************/
/* Function:   clearW                                */
/* Inputs:     none                                  */
/* Outputs:    100 new lines                         */
/* Purpose:   clears the window/terminal             */
/*****************************************************/
void clearW()
{
    cout << string(100, '\n'); // clear window/terminal
}
/*****************************************************/
/* Function:   getOption                             */
/* Inputs:     none                                  */
/* Outputs:    a valid user option                   */
/* Purpose:    This function displays a menu, reads  */
/*             the user's option, validates          */
/*             and returns it.                       */
/*                                                   */
/*****************************************************/
int getOption()
{
    int option;
	do
	{
		// Display main menu
    	cout << "\n[1] Add Items to the stack\n"
             << "[2] Remove Items from the stack\n" 
             << "[3] Look at the last item added to the stack\n"
             << "[4] Show The Whole Stack\n" 
             << "[5] QUIT";
    	
        // Read the option
        cout <<"\nEnter an option: ";
    	cin >> option;
    	
    	// Display error message for invalid options
    	if ((option < 1) || (option > 5)) {
			cout << "Invalid option\n\n";}
        // TODO: handle string and char

	} while (option < 1 || option > 5);
    return option;  

 }