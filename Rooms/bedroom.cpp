#include <iostream>
#include "struct.h"
#include "global_variables.h"

using namespace std;

string gotoBedroom()
{
    while(bob.alive)
    {
        if(command == "cmetr")
            cout << "You are in your bedroom \n\n";
        else if(command == "look")
        {
            cout << "There are two doors, a bed, and a computer in a corner \n";
            cout << "One door leads to the bathroom the other leads to the hallway \n\n";
        }
        else if(command == "look at bed")
            cout << "It is messy \n\n";
        else if(command == "enter hallway")
            return command;
        else if(command == "enter bathroom")
            return command;
        else if(command == "quit")
            return command;
        else
            cout << "I don't understand what you mean\n\n";

        cout << ">";
        getline(cin, command);
    }
}
