#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
           int t ;
    int flag ;
    string a ;
    int n = a.length();
    cin >> t ;
    for (int i =1;i<=t;i++)
    {
        cin >> a ;
    char c, b ;
        int e, f;
    for(int j=n-1;j>0;j--)
    {
        c = a.at(j);
        b = a.at(j-1);
        e = c;
        f = b;
        if( e == f )
            flag = 1;
    
    }
    
    if (flag == 1)
    {
        cout << "FAIL" ;
    }
    else
    {
        cout << "SUCCESS" ;
    }
        cout << endl;
    
    }
    return 0;
}