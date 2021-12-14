// Menu program for Programming Final Project
// Used with Github to ensure that students know the GitHub process.

// ***************************************************************
// DO NOT MODIFY THIS SECTION
// ***************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <fstream>
#include <string>
using namespace std;

string semester = "Fall 2021";

// ***************************************************************
// Function Prototypes Section
// Add your function protytpe here.
// ***************************************************************

void showMenu();
void menu7Coons();
void menu18Smiley(int);

// ***************************************************************
// END OF FUNCTION PROTOTYPE AREA
// ***************************************************************

int main()
{
    int choice;       // To hold a menu choice

    // Constants for the menu choices
    const int MAXCHOICE = 30;
    const int MINCHOICE = 1;
    const int EXIT = 0;

    do
    {
        // Display the menu and get the user's choice.
        showMenu();
        cout << "Enter your selection (0 to exit): ";
        cin >> choice;

        // Validate the menu selection.
        if (choice == EXIT)
        {
            cout << endl;
            cout << "Thank for using the " << semester << " Menu Program. " << endl;
            cout << "Have a nice day." << endl;
        }
        else
        {
            switch (choice)
            {
            case 1:                 // Akopov - call to function goes here
                break;
            case 2:                 // Belakhoua - call to function goes here
                break;
            case 3:                 // Birge - call to function goes here
                break;
            case 4:                 // Carpenter - call to function goes here
                break;
            case 5:                 // Cervantes - call to function goes here
                break;
            case 6:                 // Chairez - call to function goes here
                break;
            case 7:                 // Coons - call to function goes here
                menu7Coons();
                break;
            case 8:                 // Cutshall - call to function goes here
				break;
            case 9:                 // Gilcrease - call to function goes here
                break;
            case 10:                 // Kaiser - call to function goes here
                break;
            case 11:                 // Mukendi - call to function goes here
                break;
            case 12:                 // Naz - call to function goes here
                break;
            case 13:                 // Ricks - call to function goes here
                break;
            case 14:                 // Rodriguez - call to function goes here
                break;
            case 15:                 // Syed - call to function goes here
                break;
            case 16:                 // Underwood - call to function goes here
                break;
            case 17:                 // Whispell - call to function goes here
                break;
            case 18:                 // Smiley - call to function goes here
                menu18Smiley(11);
                break;
            }
        }
    } while (choice != EXIT);

    return 0;
}

//*****************************************************************
// Definition of function showMenu which displays the menu.       *
//*****************************************************************

void showMenu()
{
    cout << "*******************************************************************" << endl;
    cout << "*   Welcome to the " << semester << " Program!                     *" << endl;
    cout << "*      Make a selection from the list below to see student output *" << endl;
    cout << "*                                                                 *" << endl;
    cout << "*      Enter 0 and press Enter to Quit.                           *" << endl;
    cout << "*******************************************************************" << endl;

    cout << "1.  Apokov" << endl;
    cout << "2.  Belakhoua" << endl;
    cout << "3.  Birge" << endl;
    cout << "4.  Carpenter" << endl;
    cout << "5.  Cervantes" << endl;
    cout << "6.  Chairez" << endl;
    cout << "7.  Coons" << endl;
    cout << "8.  Cutshall" << endl;
    cout << "9.  Gilcrease" << endl;
    cout << "10. Kaiser" << endl;
    cout << "11. Mukendi" << endl;
    cout << "12. Naz" << endl;
    cout << "13. Ricks" << endl;
    cout << "14. Rodriguez" << endl;
    cout << "15. Syed" << endl;
    cout << "16. Underwood" << endl;
    cout << "17. Whispell" << endl;
    cout << "18. Smiley" << endl;
    cout << endl;
}

// *****************************************************************************************
// Function Definitions Section
// *****************************************************************************************
// Add your function below.  
//    Things to check:
//          Function prototype added at the top
//          Available "includes" that could be used
//          Function documentation updated -REQUIRED!
//          Function called from showMenu()
//          All return types MUST be void.
//  
// FunctionName:  menuXXYYYYYYYYYYYY(your parameters)
//                     where XX is your menu number and
//                           YY is your last name with no spaces (camel case)           
// *****************************************************************************************

// *****************************************************************************************
// MENU ID:          7
// FUNCTION:         menu7Coons
// DESCRIPTION:      prints ascii art of sonic the hedgehog
// SOURCE:           ASCII artwork was found at the bottom of the page at the link below
//                   https://www.asciiart.eu/video-games/sonic-the-hedgehog
// *****************************************************************************************
void menu7Coons()
{
    cout << endl
         << endl
         << "                             ...,?77??!~~~~!???77?<~.... "                 << endl
         << "                        ..?7`                           `7!.. "            << endl
         << "                    .,=`          ..~7^`   I                  ?1. "        << endl
         << "       ........  ..^            ?`  ..?7!1 .               ...??7 "        << endl
         << "      .        .7`        .,777.. .I.    . .!          .,7! "              << endl
         << "      ..     .?         .^      .l   ?i. . .`       .,^ "                  << endl
         << "       b    .!        .= .?7???7~.     .>r .      .= "                     << endl
         << "       .,.?4         , .^         1        `     4... "                    << endl
         << "        J   ^         ,            5       `         ?<. "                 << endl
         << "       .%.7;         .`     .,     .;                   .=. "              << endl
         << "       .+^ .,       .%      MML     F       .,             ?, "            << endl
         << "        P   ,,      J      .MMN     F        6               4. "          << endl
         << "        l    d,    ,       .MMM!   .t        ..               ,, "         << endl
         << "        ,    JMa..`         MMM`   .         .!                .; "        << endl
         << "         r   .M#            .M#   .%  .      .~                 ., "       << endl
         << "       dMMMNJ..!                 .P7!  .>    .         .         ,, "      << endl
         << "       .WMMMMMm  ?^..       ..,?! ..    ..   ,  Z7`        `?^..  ,, "     << endl
         << "          ?THB3       ?77?!        .Yr  .   .!   ?,              ?^C "     << endl
         << "            ?,                   .,^.` .%  .^      5. "                    << endl
         << "              7,          .....?7     .^  ,`        ?. "                   << endl
         << "                `<.                 .= .`'           1 "                   << endl
         << "                ....dn... ... ...,7..J=!7,           ., "                  << endl
         << "             ..=     G.,7  ..,o..  .?    J.           F "                  << endl
         << "           .J.  .^ ,,,t  ,^        ?^.  .^  `?~.      F "                  << endl
         << "          r %J. $    5r J             ,r.1      .=.  .% "                  << endl
         << "          r .77=?4.    ``,     l ., 1  .. <.       4., "                   << endl
         << "          .$..    .X..   .n..  ., J. r .`  J.       `' "                   << endl
         << "        .?`  .5        `` ." << "%" << "  ." << "%" << " .' L.'    t "     << endl
         << "        ,. ..1JL          .,   J .$.?`      . "                            << endl
         << "                1.          .=` ` .J7??7<.. .; "                           << endl
         << "                 JS..    ..^      L        7.: "                           << endl
         << "                   `> ..       J.  4. "                                    << endl
         << "                    +   r `t   r ~=..G. "                                  << endl
         << "                    =   $  ,.  J "                                         << endl
         << "                    2   r   t  .; "                                        << endl
         << "              .,7!  r   t`7~..  j.. "                                      << endl
         << "              j   7~L...$=.?7r   r ;?1. "                                  << endl
         << "               8.      .=    j ..,^   .. "                                 << endl
         << "              r        G              . "                                  << endl
         << "            .,7,        j,           .>=. "                                << endl
         << "         .J??,  `T....... %             .. "                               << endl
         << "      ..^     <.  ~.    ,.             .D "                                << endl
         << "    .?`        1   L     .7.........?Ti..l "                               << endl
         << "   ,`           L  .    .%    .`!       `j, "                              << endl
         << " .^             .  ..   .`   .^  .?7!?7+. 1 "                              << endl
         << ".`              .  .`..`7.  .^  ,`      .i.; "                             << endl
         << ".7<..........~<<3?7!`    4. r  `          G% "                             << endl
         << "                          J.` .!           % "                             << endl
         << "                            JiJ           .` "                             << endl
         << "                              .1.         J "                              << endl
         << "                                 ?1.     .' "                              << endl
         << "                                     7<..%"                                << endl
         << endl
         << endl
         << "                   ------------------ "                                    << endl
         << "                   | GOTTA GO FAST! | "                                    << endl
         << "                   ------------------ "                                    << endl
         << endl
         << endl;
}

// *****************************************************************************************
// MENU ID:          18
// FUNCTION:         menu24Smiley
// DESCRIPTION:      prints the Fibonacci series as defined by the input value
// OUTPUT EXAMPLE:   User enters 9
//                   Program outputs the following:
//                      Fibonacci Sequence (9 iterations): 0, 1, 1, 2, 3, 5, 8, 13, 21
// *****************************************************************************************
void menu18Smiley(int numberOfTimes)
{
    int current = 0;
    int next = 1;
    int nextTerm;

    cout << endl;
    cout << endl;

    cout << "Fibonacci Sequence (" << numberOfTimes << " iterations): ";

    for (int i = 1; i <= numberOfTimes; i++)
    {

        if (i == 1)                    // Prints the first term
        {
            cout << current;
        }
        else if (i == 2)               // Prints the second term
        {
            cout << next;
        }
        else                          // Prints all subsequent terms
        {
            nextTerm = current + next;
            current = next;
            next = nextTerm;

            cout << nextTerm;
        }

        if ((i + 1) <= numberOfTimes)
        {
            cout << ", ";
        }
    }

    cout << endl;
    cout << endl;
}
