#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


 
    int main()
    {
        string userInput;
        while (true)
        {
            cout << "Enter the Baxter Bot instructions: " << endl;
            std::getline(std::cin, userInput);

            if (cin.fail()) // has a previous extraction failed?
            {
               cin.clear(); // put us back in 'normal' operation mode
               cin.ignore(32767, '\n'); // and remove the bad input
               cout << "Whoa bad data, try again\n";
            }
            else if (cin.good())
            {
                stringstream currentstring(userInput); //Initalise Input String//
                int count = -1;
                string instruction[10];
                //Repeatedly put instruction in string array
                while (currentstring.good())
                {
                    count = count + 1;
                    currentstring >> instruction[count];
                }

                for (int i = 0; i < instruction->size(); i++) //This loop enables me use the break statement.
                {
                    //Object Action Time//  
                    if ((instruction[0] == "orange" || instruction[0] == "apple" || instruction[0] == "car" || instruction[0] == "bus" || instruction[0] == "diamond")
                        &&
                        (instruction[1] == "recognize" || instruction[1] == "eat" || instruction[1] == "see" || instruction[1] == "lift" || instruction[1] == "drop" || instruction[1] == "fetch")
                        &&
                        (instruction[2] == "1second" || instruction[2] == "2seconds" || instruction[2] == "5seconds" || instruction[2] == "unlimited"))
                    {
                        cout << "Instruction is okay" << endl; // Output can be understood by Baxter robot//
                        break;
                    }

                    //Object size action//
                    else if ((instruction[0] == "orange" || instruction[0] == "apple" || instruction[0] == "car" || instruction[0] == "bus" || instruction[0] == "diamond")
                        &&
                        (instruction[1] == "small" || instruction[1] == "big" || instruction[1] == "little" || instruction[1] == "massive")
                        &&
                        (instruction[2] == "recognize" || instruction[2] == "eat" || instruction[2] == "see" || instruction[2] == "lift" || instruction[2] == "drop" || instruction[2] == "fetch"))
                    {
                        cout << "Instruction is okay " << endl;  // Output can be understood by Baxter robot//
                        break;
                    }


                    //Move time//
                    else  if ((instruction[0] == "left" || instruction[0] == "right" || instruction[0] == "forwards" || instruction[0] == "backwards" || instruction[0] == "stop")
                        &&
                        (instruction[1] == "1second" || instruction[1] == "2seconds" || instruction[1] == "5seconds" || instruction[1] == "unlimited"))
                    {
                        cout << "Instruction is okay" << endl; // Output can be understood by Baxter robot//
                        break;
                    }

                    //Move time Move Time//
                    else if ((instruction[0] == "left" || instruction[0] == "right" || instruction[0] == "forwards" || instruction[0] == "backwards" || instruction[0] == "stop")
                        &&
                        (instruction[1] == "1second" || instruction[1] == "2seconds" || instruction[1] == "5seconds" || instruction[1] == "unlimited")
                        &&
                        (instruction[2] == "left" || instruction[2] == "right" || instruction[2] == "forwards" || instruction[2] == "backwards" || instruction[2] == "stop")
                        &&
                        (instruction[3] == "1second" || instruction[3] == "2seconds" || instruction[3] == "5seconds" || instruction[3] == "unlimited"))
                    {
                        cout << "Instruction is okay" << endl; // Output can be understood by Baxter robot//
                        break;
                    }

                    //Location <Action> <Object>//
                    else if ((instruction[0] == "door" || instruction[0] == "kitchen" || instruction[0] == "table")
                        &&
                        (instruction[1] == "recognize" || instruction[1] == "eat" || instruction[1] == "see" || instruction[1] == "lift" || instruction[1] == "drop" || instruction[1] == "fetch")
                        &&
                        (instruction[2] == "orange" || instruction[2] == "apple" || instruction[2] == "car" || instruction[2] == "bus" || instruction[2] == "diamond"))
                    {
                        cout << "Instruction is okay" << endl; // Output can be understood by Baxter robot//
                        break;

                    }
                    //None of the conditions are True//
                    else
                    {
                        cout << "Instruction is Incorrect " << endl; // Output cannot be understood by Baxter robot//
                        break;
                    }
                }

                cout << "Would you like to run again?  Y or N:" << endl;
                cin >> userInput;
                if (userInput == "yes" || userInput == "Y" || userInput == "YES" || userInput == "y")
                {
                   cin.clear(); // put us back in 'normal' operation mode
                   cin.ignore(32767, '\n'); // and remove the invalid input
                }
                else
                {
                    cout << "Exiting....." << endl;
                    break;
                }
            }
        }
        return 0;
    }

   
