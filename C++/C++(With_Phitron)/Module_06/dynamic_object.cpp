// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jursey;

    Cricketer(string country, int jursey)
    {
        this->country = country;
        this->jursey = jursey;
    }
};
int main()
{
    Cricketer *dhoni = new Cricketer("Dhoni", 100);
    Cricketer *kohli = new Cricketer("Kohli", 20);
    // cout << dhoni->jursey << endl;
    // cout << kohli->jursey << endl;

    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->jursey;
    return 0;
}