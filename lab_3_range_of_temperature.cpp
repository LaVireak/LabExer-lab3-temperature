// Accept the current temperature and display the following messages based on the range given on the table.
#include <iostream> // This is the directive for input output
using namespace std; //using standard namespace
int main()  //the main function
{ //to open main function block
    int temperature; // define the temperature
    cout << " Enter the temperature "; // Ask the user to enter the temperature
    cin >> temperature;  // Accept the temperature
    if ( temperature > 54 )  // Declare the condition for temparature above 54
    {  // To open the if function block
        cout << " you are out of range "; // To print out the message for the user
    } // To close the if function block
    if ( temperature > 41 and temperature < 54) // Declare the condition for temparature above 41 and below 54
    {  // To open the if function block
        cout << " Stay hydrated "; // To print out the message for the user
    } // To close the if function block
    else if ( temperature > 32 and temperature < 40 ) // Declare the condition for temparature above 32 and below 40
    {  // To open the else if function block
        cout << "Stay cool and safe "; // To print out the message for the user 
    } // To close the else if function block
    else if ( temperature > 26 and temperature < 31 ) // Declare the condition for temparature above 26 and below 31
    {  // To open the else if function block
        cout << " Keep a sunblock handy "; // To print out the message for the user 
    } // To close the else if function block
    else if ( temperature > 20 and temperature < 25 ) // Declare the condition for temparature above 20 and below 25
    {   // To open the else if function block
        cout <<  " Always keep your cool! "; // To print out the message for the user
    } // To close the else if function block
    else if ( temperature < 20 ) // Declare the condition for temparature below 20
    {  // To open the else if function block
        cout <<  " Cool breeze in the air "; // To print out the message for the user
    } // To close the else if function block
    return 0; // return 0 to the console
} // To close the main function block