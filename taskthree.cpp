#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare and initialize the array with string elements
    string chisale[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(chisale) / sizeof(chisale[0]);

    // Iterate through each element of the array
    for (int i = 0; i < size; ++i)
    {
        // Check if the current element starts with the letter "B"
        if (chisale[i][0] == 'B')
        {
            // Output the element if it starts with "B"
            cout << chisale[i] << endl;
        }
    }

    return 0;
}