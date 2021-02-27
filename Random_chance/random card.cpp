#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int chance;

void Bad_luck(int chance_bad)
{
    chance_bad = rand()%5+1;
    if(chance_bad==1)  cout<<"Lost money (500 THB)";
    else if(chance_bad==2) cout<<"Forget your suitcase at the airport. (Go to the Airport)";
    else if(chance_bad==3) cout<<"Lost money to other player (-300 THB)";
    else if(chance_bad==4) cout<<"Stop walking";
    else if(chance_bad==5) cout<<"Bankrupt!!!";
}
void Good_luck(int chance_good)
{
    chance_good = rand()%5+1;
    if(chance_good==1)  cout<<"Get money from other player";
    else if(chance_good==2) cout<<"Go to Start point (+500 THB)";
    else if(chance_good==3) cout<<"Get money (+1000 THB)";
    else if(chance_good==4) cout<<"Win a lottery (+500 THB)";
    else if(chance_good==5) cout<<"Collect money (+100 THB)";
}

void random_chance()
{
    chance = rand()%2+1;
    switch(chance)
    {
        case 1 :
            Bad_luck();
        case 2 :
            Good_luck();
    }
}

int main()
{
    srand(time(0));
    cin.get(); // Press Enter to random
    random_chance();
}