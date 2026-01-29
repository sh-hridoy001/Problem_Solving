// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int empty()
    {
        return l.empty();
    }
    int size()
    {
        return l.size();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << q.size() << endl;
    cout << q.front() << endl;
    return 0;
}