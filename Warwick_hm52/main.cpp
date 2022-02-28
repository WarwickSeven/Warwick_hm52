#include <iostream>

using std::cout;
using std::endl;

// домашнее задание 5-2

bool PrintArray(int * arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return true;
}

bool initArray(int * arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    cout << endl;
    return true;
}
int main()
{
    const int mysize = 8;
    int myArr[] = { 1, 0, 0, 0, 0, 0, 0, 1 };
    
    if (PrintArray(myArr, mysize))
    {
        cout << "Array before modification" << endl;
    }
    
    if (initArray(myArr, mysize))
    {
        cout << "Array was sucesfully modified\n" << endl;
    }
    
    if (PrintArray(myArr, mysize))
    {
        cout << "Array after modification" << endl;
    }
    return 0;
}
