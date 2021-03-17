#include <iostream>
#include <vector>
#include <string>
#include "vlist.h"
using namespace std;

//Function Name: vlist
//Precondition: Constructor has not been invoked.
//Postcondition: count = 0; vector size is 9.
//Description: Constructs an instance of a vlist object.
vlist::vlist()
{
    cout << "Default constructor Invoked" << endl;
    DB.resize(9);
    count = 0;
}

//Function Name: vlist
//Precondition: A vlist object is being passed by reference.
//Postcondition: A hard copy of a vlist object has been created.
//Description: Creates a hard copy of a vlist object.
vlist::vlist(const vlist & Org)
{
    cout << "Copy constuctor Invoked" << endl;
    
        DB = Org.DB;
        count = Org.count;
    
}

//Function Name: ~vlist
//Precondition: Destructor has not been invoked.
//Postcondition: array DB deleted.
//Description: Deallocates memory of a vlist object.
vlist::~vlist()
{
    cout << "Destructor Invoked" << endl;
    DB.clear();
    DB.shrink_to_fit();
}

//Function Name: isEmpty
//Precondition: Vector is being checked whether it is empty
//Postcondition: Vector has been checked whether it is empty
//Description: Checks to see if vector is empty
bool vlist::isEmpty()
{
    if(DB.empty())
    {
        return true;
    }
    return false;
}

//Function Name: search
//Precondition: Begins traversing through vector for key
//Postcondition: Vector has been traversed through and returned iterator or was not found
//Description: Traverses through vector looking for key
vector<string>::iterator vlist::search(const string& key)
{
    for(vector<string>::iterator it = DB.begin(); it != DB.end(); it++)
    {
        if(*it == key)
        {
            cout << "Item found" << endl;
            cout << *it << endl;
            return it;
        }
    }
    cout << "Item not found" << endl;
    cout << key << endl;
    return DB.end();

}

//Function Name: insert
//Precondition: No data has been inserted
//Postcondition: Data has now been inserted in vector in alphabetical order
//Description: Data is inserted into vector in alphabetical order
void vlist::insert(const string& key)
{
    
    for(vector<string>::iterator it = DB.begin(); it != DB.end(); it++)
    {
        if(*it >= key)
        {
            DB.insert(it, key);
            count++;
            return;
        }
    }
    DB.insert(DB.end(), key);
    count++;
}

//Function Name: remove
//Precondition: No data has been removed
//Postcondition: Data has now been removed from vector
//Description: Removes data in vector
void vlist::remove(const string& key)
{
    vector<string>::iterator it = search(key);
    
    if(it != DB.end())
    {
        DB.erase(it);
        count--;
    }
    else
    {
        cout << "Key was not found" << endl;
    }
}

//Function Name: print
//Precondition: No data has been printed to the screen
//Postcondition: Data has now been printed to the screen
//Description: Prints data to the screen
void vlist::print()
{
    
    for(vector<string>::iterator it = DB.begin(); it != DB.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
