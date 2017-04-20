#include <iostream>

using namespace std;

string placeholder;
string command;
bool play(true);

struct Character
{
    bool alive = true;
};

Character bob;

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


string gotoHallway()
{
    while(bob.alive)
    {
        if(command == "cmetr")
            cout << "you have entered the hallway \n\n>";
        else if(command == "enter bedroom")
            return command;

        else if(command == "quit")
            return command;
        else
            cout << "I don't understand what you mean\n\n>";

        getline(cin, command);
    }
}

string gotoBathroom()
{
    while(bob.alive)
    {
        if(command == "cmetr")
            cout << "you are in your bathroom \n\n>";
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
            cout << "I don't understand what you mean\n\n>";

        getline(cin, command);
    }
    cout << "you have died \n";
    play = false;
    return "null";
}

string gotoBedroom()
{
    while(bob.alive)
    {
        if(command == "cmetr")
            cout << "You are in your bedroom \n\n>";
        else if(command == "look")
        {
            cout << "There are two doors, a bed, and a computer in a corner \n";
            cout << "One door leads to the bathroom the other leads to the hallway \n\n>";
        }
        else if(command == "look at bed")
            cout << "It is messy \n\n>";
        else if(command == "enter hallway")
            return command;
        else if(command == "enter bathroom")
            return command;
        else if(command == "quit")
            return command;
        else
            cout << "I don't understand what you mean\n\n>";

        getline(cin, command);
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
