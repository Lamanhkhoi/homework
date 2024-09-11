#include <iostream>

using namespace std;
int main()
{
    int size;
    cout << "Input size of array:=";
    cin >> size;
    int a[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout << "Mang vua nhap :\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int tong = size * size;
    int top = 0;
    int bottom = size - 1;
    int left = 0;
    int right = size - 1;
    int b[tong];
    int numbers = 0;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
        {
            b[numbers] = a[top][i];
            // cout << b[numbers] << endl;
            numbers++;
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            b[numbers] = a[i][right];
            // cout << b[numbers]<< endl;
            numbers++;
        }
        right--;

        for (int i = right; i >= left; i--)
            {
                b[numbers] = a[bottom][i];
                // cout << b[numbers]<< endl;
                numbers++;
            }
            bottom--;
        
        for (int i = bottom; i >= top; i--)
            {
                b[numbers] = a[i][left];
                // cout << b[numbers]<< endl;
                numbers++;
            }
            left++;
        
    }
    cout << " " << endl;
    for (int i = 0; i < tong; i++)
    {
       cout << b[i] << " ";
    }
    
}