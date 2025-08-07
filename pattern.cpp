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
    // for (int i = 1; i<=2*5-1; i++)
    // {
    //     int stars = i;
    //     if(i > 5) stars = 2*5-i;
    //     for (int j = 1; j <=stars; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;

    // }

    // p-11
    // int start = 1;
    // for (int i = 0; i<=5; i++)
    // {
    //     if(i % 2 == 0) start = 1;
    //     else start = 0;
    //     for (int j = 0; j<=i; j++)
    //     {
    //         cout << start << " ";
    //         start = 1 - start;
    //     }
    //     cout << endl;

    // }

    // p-12
    // int spaces = 2*(5-1);
    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout << j;
    //     }
    //     for (int j = 1; j <spaces; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j >=1; j--)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;

    //     spaces-=2;

    // }

    // p-13
    // int k = 1;
    // for (int i = 1; i<=5; i++)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //        cout << k << " ";
    //        k = k + 1;

    //     }
    //     cout << endl;

    // }
    // p-14
    // for (int i = 0; i <5; i++)
    // {
    //     char ch = 'A';
    //    for (int j = 0; j <=i; j++)
    //    {
    //     cout << ch;
    //     ch++;
    //    }
    //    cout<<endl;

    // }

    // p-15
    // for (int i = 0; i<5; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 5; j>i; j--)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;

    // }

    // p-16
    // for (int i = 0; i < 5; i++)
    // {
    //     char ch = 'A' + i;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // p-17
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5 - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     char ch = 'A';
    //     int bp = (2 * i + 1) / 2;  // isme ye imp hai
    //     for (int j = 1; j <=2 * i+1; j++)
    //     {
    //         cout << ch;
    //         if (j <= bp)
    //             ch++;
    //         else
    //             ch--;
    //     }

    //     for (int j = 0; j < 5 - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // p-18
    // for (int i = 0; i <5; i++)
    // {

    //     for (char ch = 'E' - i; ch<='E'; ch++)
    //     {
    //         cout <<ch << " ";
    //     }
    //     cout << endl;

    // }

    // p-19
    // int spaces = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     // star
    //     for (int j = 1; j <= 5 - i; j++)
    //     {
    //         cout << "*";
    //     }

    //     // space
    //     for (int j = 0; j < spaces; j++)
    //     {
    //         cout << " ";
    //     }

    //     // star
    //     for (int j = 1; j <= 5 - i; j++)
    //     {
    //         cout << "*";
    //     }

    //     spaces += 2;
    //     cout << endl;
    // }

    // 2nd way
    // int inis = 2*5-2;
    // for (int i = 1; i <=5; i++)
    // {
    //     // star
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     // space
    //     for (int j = 0; j < inis; j++)
    //     {
    //         cout << " ";
    //     }

    //     // star
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout << "*";
    //     }
    //     inis -= 2;
    //     cout << endl;
    // }

    // p-20
    // int spaces = 2 * 5 - 2;
    // for (int i = 1; i <= 2 * 5 - 1; i++)
    // {
    //     int stars = i;
    //     if (i > 5) stars = 2 * 5 - i;
    //     for (int j = 1; j <= stars; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <=spaces; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <=stars; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    //     if (i < 5)
    //         spaces -= 2;
    //     else
    //         spaces += 2;
    // }

    // p-21
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (i == 0 || j == 0 || i == 5 - 1 || j == 5 - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //         }
    //         cout << endl;
    // }

    // p-22
    for (int i = 0; i <2*4-1; i++)
    {
        for (int j = 0; j <2*4-1; j++)
        {
            int top = i;
            int left = j;
            int right = (2*4-2) - j;
            int down = (2*4-2) - i;
            cout << (4-min(min(top, down), min(left,right)));

            
        }
        cout << endl;
        
    }
    

    return 0;
}