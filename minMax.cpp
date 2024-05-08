#include <iostream>
using namespace std;

void minMax(int *arr, int n)
{
    int min = __INT_MAX__;
    int max = -1;
    if (n == 1)
    {
        min = max = arr[n - 1];
        cout << "MIN: " << min << "MAX: " << max << endl;
        return;
    }
    else
    {
        int s = 0, e = n - 1;
        while (s < e)
        {
            if (min > arr[s])
            {
                min = arr[s];
            }
            if (min > arr[e])
            {
                min = arr[e];
            }
            if (max < arr[s])
            {
                max = arr[s];
            }
            if (max < arr[e])
            {
                max = arr[e];
            }
            s++;
            e--;
        }
    }
    cout << "MIN: " << min << "\nMAX: " << max << endl;
}

int main()
{
    int arr[10] = {23, 43, 33, 2, 55, 3, 67, 44, 34, 32};
    minMax(arr, 10);
    return 0;
}