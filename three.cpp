#include <iostream>
#include <limits>
#include <ios>
using namespace std;

int main()
{
    int userInput;

    // Prompt the user for an integer value between 5 and 10
    cout << "Please enter an integer value between 5 and 10: ";

    // Keep prompting until a valid integer between 5 and 10 is entered
    while (!(cin >> userInput) || userInput < 5 || userInput > 10)
    {
        cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        cin.clear();                                         // Clear input stream
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    // Output a message to inform the user that their input value has been accepted
    cout << "Your input value " << userInput << " has been accepted." << endl;

    return 0;
}
 36 changes: 36 additions & 0 deletions36  
taskone.cpp
@@ -0,0 +1,36 @@

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // generating random numbers between 0 and 11
    srand(time(0));
    int DaysUntilExpiration = rand() % 12;

    // generating the results based on the random number
    if (DaysUntilExpiration <= 10)
    {
        cout << " Your subscription will expire soon. Renew now! " << endl;
    }
    else if (DaysUntilExpiration <= 5)
    {
        cout << " Your subscription expires in " << DaysUntilExpiration << " Renew now and save 10%." << endl;
    }
    else if (DaysUntilExpiration <= 1)
    {
        cout << " Your subscription expires within a day. Renew now and save 20% " << endl;
    }
    else if (DaysUntilExpiration == 0)
    {
        cout << " Your subscription has expired!! " << endl;
    }
    else

        cout << "You have an active subscription." << endl;

    return 0;
}