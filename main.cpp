#include <iostream>
#include "struct.h"
#include "rooms.h"
#include "global_variables.h"

using namespace std;

bool quit()
{
        cout << "are you sure? [y/n] \n";
        while(true)
        {
        getline(cin, command);
        if(command == "y")
            return true;
        if(command == "n")
            return false;
        }
}

int main()
{
    string currentRoom("enter bedroom");
    placeholder = currentRoom;
    do
    {

        if(currentRoom == "enter bedroom")
        {
            placeholder = currentRoom;
            command = "cmetr";
            currentRoom = gotoBedroom();
        }
        if(currentRoom == "enter bathroom")
        {
            placeholder = currentRoom;
            command = "cmetr";
            currentRoom = gotoBathroom();
        }
        if(currentRoom == "enter hallway")
        {
            placeholder = currentRoom;
            command = "cmetr";
            currentRoom = gotoHallway();
        }
        if(currentRoom == "quit")
        {
            bool quitVar = quit();
            if(quitVar)
                play = false;
            if(quitVar == false)
                currentRoom = placeholder;
        }

    }
    while(play);
    return 0;
}
