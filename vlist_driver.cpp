/*
 Name: Joshua Lavieri
 Instructor: Dr. Bullard
 Class:Data Structures
 
 Description: Inserts string data types into a vector in alphabetical order
*/

 #include <iostream>
 #include <string>
 #include "vlist.h"


 using namespace std;

 int main()
{
 //Testing default constructor
cout << "***********************************************************" << endl;
 cout << "Test1:Testing the default constructor for string\n";
 vlist String_List;
 cout << endl << endl;
 cout << "*****************End of Test1******************************" << endl;
 //Testing functionality for string list cout << "***********************************************************" << endl;
 cout << "Test2: Testing Insert \n";
 String_List.insert("Hello");
 String_List.insert("Zebra");
 String_List.insert("Good_Bye");
 String_List.insert("Space");
 String_List.insert("No_One");
 String_List.print();
 cout << "*****************End of Test2******************************" << endl;
 cout << endl << endl;

cout << "***********************************************************" << endl;

 cout << "Test 3: Testing copy constructor for string \n";
 vlist Copied_String = String_List;
 Copied_String.print();
 String_List.print();
 cout << "*****************End of Test3******************************" << endl;
 cout << endl << endl;
 cout << "***********************************************************" << endl;

 cout << "Test 4: Testing Remove for string \n";
 cout << "Testing Search and IsEmpty also\n";
 String_List.remove("Zebra");
 String_List.remove("Good_Bye");
 String_List.remove("Hello");
 String_List.remove("No_One");
 String_List.remove("Space");
 String_List.remove("Hello");
 if (String_List.isEmpty())
 {
 cout << "String_List is Empty!"<<endl;
 
 }
 else
 {
 cout << "String_List is NOT Empty!" << endl;
 
 }
 cout << "*****************End of Test4******************************" << endl;
 cout << endl << endl;
    
    
 cout << "When leave main destructor will be called" << endl;

 return 0;
 
 }
