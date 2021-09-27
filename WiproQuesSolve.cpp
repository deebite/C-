#include <iostream>
using namespace std;
int evenOdd(int n)
{
    int num, rev = 0;
    while (n != 0)
    {
        num = n % 10;
        if (num % 2 == 0)
        {
            num += 1;
        }
        else
        {
            num -= 1;
        }
        rev = rev * 10 + num;
        n /= 10;
    }
    return rev;
}
int justRev(int a)
{
    int num, b = 0;
    while (a != 0)
    {
        num = a % 10;
        b = b * 10 + num;
        a /= 10;
    }
    return b;
}
int main()
{
    int applicantID, c, d;
    cin >> applicantID;
    c = evenOdd(applicantID);
    //cout << c << "\n";
    d = justRev(c);
    cout << d;
    return 0;
}