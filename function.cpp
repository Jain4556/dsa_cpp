#include <bits/stdc++.h>
using namespace std;

// pass by value
// void f(int i, int n){
//     if(i > n){
//         return;
//     }
//     cout << "sunil";
//     f(i+1, n);

// int sum (int n){
//     if(n ==0) return 0;
//     return n + sum(n-1);
// }

// int fact(int n)
// {

//     if (n == 0){
//         return 1;
//     }
//     return n * fact(n - 1);
// }
// }

// bool f(int i, string &s){
//     if(i >= s.size() / 2) return true;
//     if(s[i] != s[s.size() - i -1]) return false;
//     return f(i+1,s);
// }


int f(int n){
    if(n <=1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;
}

int main()
{
    // int n = 5;
    // cout << fact(n);
    // string s = "madsm";
    // cout << f(0,s);
    cout << f(5);

    return 0;
}