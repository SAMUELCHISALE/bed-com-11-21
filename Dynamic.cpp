#include <iostream>

using namespace std;

int main()
{
  // Prompt the user for dimensions of the 2D array
  int rows, cols;
  do
  {
    cout << "Enter the number of rows (not exceeding 3): " << endl;
    cin >> rows;
  } while (rows <= 0 || rows > 3);

  do
  {
    cout << "Enter the number of columns (not exceeding 3): " << endl;
    cin >> cols;
  } while (cols <= 0 || cols > 3);

  // Dynamically allocate a 2D array of doubles
  double **array = new double *[rows];
  for (int i = 0; i < rows; ++i)
  {
    array[i] = new double[cols];
  }

  // Assign values to each element of the array using nested loops
  cout << "Enter values for the array:" << endl;
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      cout << "Enter value for element (" << i << ", " << j << "): ";
      cin >> array[i][j];
    }
  }

  // Output values of each element of the array
  cout << "Values of the array:" << endl;
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  // Deallocate the dynamically allocated memory
  for (int i = 0; i < rows; ++i)
  {
    delete[] array[i];
  }
  delete[] array;

  return 0;
}