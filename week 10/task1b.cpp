#include <iostream>
using namespace std;

bool is_vlaid(int numbers[], int size);

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!";
        return 1;
    }

    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Bubble Sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (numbers[j] > numbers[j+1]) 
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    cout << "The final result will be: ";
    if (is_vlaid(numbers, size))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}

bool is_vlaid(int numbers[], int size)
{
    if (size < 4)
        return false;

    for (int i = 0; i <= size - 4; i++) 
    {
        if ((numbers[i+1] - numbers[i]) == (numbers[i+3] - numbers[i+2])) 
        {
            return false;
        }

        if ((numbers[i+1] == numbers[i]) || (numbers[i+3] == numbers[i+2])) 
        {
            return false;
        }
    }
    return true;
}
