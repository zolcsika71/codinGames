#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h> 

using namespace std;

void sort(int* array, int length)
{
    for (int i = 0; i < length - 1; ++i)
    {
        for (int j = 0; j < length - i - 1; ++j)
        {
            if (abs(array[j]) > abs(array[j + 1]))
                swap(array[j], array[j + 1]);

        }
    }
}

int best(int* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == 0 || array[i] > 0)
            return array[i];
    }
    return array[0];
}

int main()
{
    int numberOfTempertures; // the number of temperatures to analyse
    cin >> numberOfTempertures; cin.ignore();
    int* tempratures{ new int[numberOfTempertures] };


    for (int i = 0; i < numberOfTempertures; i++)
        cin >> tempratures[i];

    sort(tempratures, numberOfTempertures);

    cout << best(tempratures, numberOfTempertures) << endl;


}