// week14-1c.cpp
// SOIT_ADVANCE_009
// very good! f(n)
#include <iostream>
using namespace std;

void f(int n)
{
     if(n==0) return; // terminal condition
     cout << n%10;
     f(n/10);
}
int main()
{
    int n;
    cin >> n;
    f(n);
    cout << "\n";
}
