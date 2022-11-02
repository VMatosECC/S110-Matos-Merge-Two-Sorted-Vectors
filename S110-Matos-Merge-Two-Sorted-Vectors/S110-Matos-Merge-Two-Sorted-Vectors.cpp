// S110-Matos-Merge-Two-Sorted-Vectors.cpp 
// Author:  V. Matos
// Goal:    Merge two sorted vectors in such a way that the 
//          resulting vector is also sorted.
// -----------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> a{ 3, 7, 11 };
    vector<int> b{ 3, 16 };
    vector<int> c;

    int i1 = 0; 
    int i2 = 0;

    while (i1 < a.size() && i2 < b.size())
    {
        if (a[i1] < b[i2])
        {
            c.push_back(a[i1]);
            i1++;
        }
        else
        {
            c.push_back(b[i2]);
            i2++;
        }
    }

    while (i1 < a.size())
    {
        c.push_back(a[i1]);
        i1++;
    }

    while (i2 < b.size())
    {
        c.push_back(b[i2]);
        i2++;
    }

    for (int num : c) cout << num << ",  ";

    cout << endl;
}

