#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> route;
    string address;

    // Input list
    while (cin >> address && address != "end")
    {
        route.push_back(address);
    }

    auto current = route.begin(); // Initially at head

    int q;
    cin >> q;

    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string target;
            cin >> target;

            bool found = false;
            for (auto it = route.begin(); it != route.end(); it++)
            {
                if (*it == target)
                {
                    current = it;
                    cout << *current << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "next")
        {
            if (route.empty() || next(current) == route.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = next(current);
                cout << *current << endl;
            }
        }

        else if (command == "prev")
        {
            if (route.empty() || current == route.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = prev(current);
                cout << *current << endl;
            }
        }
    }

    return 0;
}
