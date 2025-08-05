#include <iostream>
using namespace std;

int main()
{

    // p-1
    // for (int i = 0; i <5; i++)
    // {
    //     for (int j = 0; j <5; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;

    // }

    // p-2
    // for (int  i = 1; i <=5; i++)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;

    // }

    // p-3
    // for (int i = 0; i <=4; i++)
    // {
    //     for (int j = 0; j <=i; j++)
    //     {
    //         cout << j+1;

    //     }
    //     cout <<endl;

    // }

    // p-4
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // p-5
    // for (int i = 0; i <=4; i++)
    // {
    //     for (int j = 5; j>i; j--)
    //     {
    //         cout <<"*";
    //     }
    //     cout << endl;

    // }
    // p-6
    // for (int i = 0; i <=5; i++)
    // {
    //    for (int j = 5; j>=i ; j--)
    //    {
    //     cout << 5-j+1;
    //    }
    //    cout << endl;

    // }
    // p-7
    // for (int i = 0; i<5; i++)
    // {
    //     cout << " ";
    //     for (int j = 0; j<5-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j<2*i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j<5-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // p-8
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0;  j<i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // 2*4-(2*i-1)  alternate for printing star
    //     for (int j = 0; j <2*(5-i)- 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j<i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // p-9
    // p-1
    //  for (int i = 0; i<5; i++)
    // {

    //     for (int j = 0; j<5-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j<2*i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j<5-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    // // p-2
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0;  j<i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // 2*4-(2*i-1)  alternate for printing star
    //     for (int j = 0; j <2*5-(2*i+1) ; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j<i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // p-10
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 5; j > i; j--)
        {
            cout << " ";
        }
        
        cout << endl;
    }

    return 0;
}