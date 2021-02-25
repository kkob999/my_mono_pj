#include<iostream>
#include<vector>
using namespace std;

struct house
{
    int p1;
    int p2;
    int diff_p1;
    int diff_p2
};
struct asset
{
    int p1;
    int p2;
    int diff_p1;
    int diff_p2
};

int main()
{
    house h;
    asset a;
    h.diff_p1 = h.p1-h.p2;
    h.diff_p2 = h.p2-h.p1;
    a.diff_p1 = a.p1-a.p2;
    a.diff_p2 = a.p2-a.p1;

    if(h.p1>6) cout<<"Player_1 win!!!";
    else if(h.p2>6) cout<<"PLayer_2 win!!!";
    else if(a.p1>5000) cout<<"Player_1 win!!!";
    else if(a.p2>5000) cout<<"Player_2 win!!!";
    else if(h.diff_p1 >= 3) cout<<"Player_1 win!!!";
    else if(h.diff_p2 >= 3) cout<<"Player_2 win!!!";
    else if(a.diff_p1 >= 3000) cout<<"Playyer_1 win!!!";
    else if(a.diff_p2 >= 3000) cout<<"Player_2 win!!!";
}

//มีบ้านมากกว่า 6 มีทรัพย์สินมากกว่า 5000 บาท มีบ้านต่างกัน 3 หลัง มีเงินต่างกัน 3000 บาท