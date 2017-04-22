#include <iostream>
#include "struct.h"
#include "global_variables.h"

using namespace std;

string gotoBathroom()
{
    while(bob.alive)
    {
        if(command == "cmetr")
            cout << "you are in your bathroom \n\n";
        else if(command == "look")
        {
            cout << "There is broken mirror above a sink\n";
            cout << "to your left is a shower and a toilet\n\n";
        }
        else if(command == "look at mirror")
            cout << "there is dried blood that dripped down from where the mirror was struck\n\n";
        else if(command == "enter bedroom")
            return command;

        else if(command == "quit")
            return command;
        else if(command == "die")
        {
            bob.alive = false;
            continue;
        }
        else
            cout << "I don't understand what you mean\n\n";

        cout << ">";
        getline(cin, command);
    }
    cout << "you have died \n";
    play = false;
    return "null";
}
