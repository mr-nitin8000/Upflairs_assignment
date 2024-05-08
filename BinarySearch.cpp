#include <iostream>
using namespace std;
int binarySearch(int *arr, int n, int key)
{

    if (n == 1)
    {
        if (arr[n - 1] == key)
            return n - 1;
        else
        {
            return -1;
        }
    }
    else
    {
        int s = 0, e = n;
        while (s < e)
        {
            int mid = (s + e) / 2;

            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] < key)
            {
                s = mid + 1;
                cout << "s+ " << s << " ";
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {12, 23, 34, 56, 67, 77, 78, 88, 89, 100};
    int result = binarySearch(arr, 10, 12);
    cout << "Binary Search is :" << result;

    return 0;
}