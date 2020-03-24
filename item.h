//@file item.h
//Author: Angel Moreta
#include <string>
#include <iostream>
using namespace std;
#ifndef ITEM_H
#define ITEM_H




class Item
{
    private:
        // private var
        string itemName;
        string color;

    public:
        Item(); // default constructor
        //mutators
        void setItem( string);
        void setColor( string);
            
        //accessors 
        string getItem();
        string getColor();


}; 
#include "item.cpp"
#endif