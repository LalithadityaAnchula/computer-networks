#include <iostream>
using namespace std;
int main()
{
    int n;
    int i, j, k;
    int a[10][10], b[10][10];
    cout << "\n Enter the number of nodes:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "\n Enter the distance between the host " << i + 1 << " " << j + 1;
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] > a[i][k] + a[k][j])
                {
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
            if (i == j)
            {
                b[i][j] = 0;
            }
        }
    }
    cout << "\n The output matrix:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
}
