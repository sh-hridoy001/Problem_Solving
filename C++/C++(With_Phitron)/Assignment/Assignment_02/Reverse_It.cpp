// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};

int main()
{
    int tc;
    cin >> tc;
    Student arr[tc];
    //input ---- and cpy sec into sec_arr --- --- --- 
    char sec_arr[tc] ;
    for (int i = 0; i < tc; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id;
        sec_arr[i] = arr[i].sec ;
    }
    reverse(sec_arr, sec_arr+tc); // array sorting er moto  --
    
    for(int i=0; i<tc ; i++){
        arr[i].sec = sec_arr[i];
    }

    for (int i = 0; i < tc; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].id << endl;
    }
    return 0;
}