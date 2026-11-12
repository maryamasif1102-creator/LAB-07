#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << "Array elements are:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}
