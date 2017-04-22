#include <iostream>
#include "struct.h"
#include "global_variables.h"

using namespace std;

string gotoHallway()
{
    while(bob.alive)
    {
        if(command == "cmetr")
            cout << "you have entered the hallway \n\n";
        else if(command == "look")
            cout << "Everything beyond what the bedroom light reveals is nothing but darkness\n\n";
        else if(command == "enter darkness")
            {
                cout << "You enter the darkness ignorant to what awaits you\n\nTo be continues...\nmaybe...\n\n";
                play = false;
                return "null";
            }
        else if(command == "enter bedroom")
            return command;

        else if(command == "quit")
            return command;
        else
            cout << "I don't understand what you mean\n\n";

            cout << ">";
        getline(cin, command);
    }
}
