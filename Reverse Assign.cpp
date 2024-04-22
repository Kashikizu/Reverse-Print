/*
 * @author Kashikizu
 * File Creation Date: 23/04/2024 (dd/mm/yyyy)
 * Initial Date: 23/04/2024
 */

#include <bits/stdc++.h>
using namespace std;

void printVect(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

vector<int> setVector(vector<int> a, int n)
{
    int elem;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element no. " << i + 1 << ": ";
        cin >> elem;
        a.push_back(elem);
    }
    return a;
}

void revVector(vector<int> &a, int i, int n)
{
    if (i >= 0)
    {
        swap(a[i], a[n - i]);
        revVector(a, i - 1, n);
    }
}

int main()
{
    int input;
    cout << "Enter the number of elements you want to add:" << endl;
    cin >> input;
    cout << input << " number of inputs were selected" << endl;
    cout << endl;
    vector<int> elems;
    elems = setVector(elems, input);
    cout << "List of elements:" << endl;
    printVect(elems);
    cout << endl;
    cout << "Reversed elements:" << endl;
    revVector(elems, (input - 1) / 2, input - 1);
    printVect(elems);
}
