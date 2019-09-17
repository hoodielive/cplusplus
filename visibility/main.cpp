#include <iostream>

int sumArray(int values[], int size)
{
    int sum = 0;

    // this array stops when i == size. Why? The last element is size - 1
   for (int i = 0; i < size; i++)
   {
       sum += values[i];
   }
   return sum;
}

int main()
{
    int array[8][8]; // Declares an array that looks like a chess board

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
           array[i][j] = i * j;
        }
    }

    std::cout << "Multiplication table: " << std::endl;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            std::cout << "["<< i <<"]["<< j <<"] = ";
            std::cout << array[i][j] <<" ";
        }
    }
}