#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct C{
    int money[3]; 
};
struct pos{
    int p1;
    int p2;
};
struct round
{
    int pos;
}

int bonus()
{
    int i = rand()%4+1;
    int Bonus[] = {100,200,500,1000};
    return Bonus[i];
}

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
    int chance;
    chance = rand()%2+1;
    switch(chance)
    {
        case 1 :
            Bad_luck();
        case 2 :
            Good_luck();
    }
}

int asset = 0,money_p1=1000,asset_p2 = 0,money_p2=1000;
bool buy,buy2; 

int money_system_p1()
{     
    if(pos.p1 == 2) // Thailand
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.TH[0];
                money_p1 = money_p1-C.TH[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.TH[1];
                money_p1 = money_p1-C.TH[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.TH[2];
                money_p1 = money_p1-C.TH[2];
            }
        }  
    }
    if(pos.p1 == 3) // Myanmar
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.MM[0];
                money_p1 = money_p1-C.MM[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.MM[1];
                money_p1 = money_p1-C.MM[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.MM[2];
                money_p1 = money_p1-C.MM[2];
            }
        }  
    }
    if(pos.p1 == 4) // Vietnam
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.VT[0];
                money_p1 = money_p1-C.VT[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.VT[1];
                money_p1 = money_p1-C.VT[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.VT[2];
                money_p1 = money_p1-C.VT[2];
            }
        }    
    }
    if(pos.p1 == 5) //Chance
    {
        random_chance()
        if(random_chance == Good_luck(1))
        {
            money_p1 = money_p1+300;
            money_p2 = money_p2-300;
        }
        else if(random_chance == Good_luck(2))
        {
            money_p1 = money_p1+500;
        }
        else if(random_chance == Good_luck(3))
        {
            money_p1 = money_p1+1000;
        }
        else if(random_chance == Good_luck(4))
        {
            money_p1 = money_p1+500;
        }
        else if(random_chance == Good_luck(5))
        {
            money_p1 = money_p1+100;
        }
        else if(random_chance == Bad_luck(1))
        {
            money_p1 = money_p1-500;
        }
        else if(random_chance == Bad_luck(3))
        {
            money_p1 = money_p1-300;
            money_p2 = money_p2+300;
        }
        else if(random_chance == Bad_luck(5))
        {
            money_p1 = money_p1-money_p1;
        }
    }
    if(pos.p1 == 6) // Taiwan
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.TW[0];
                money_p1 = money_p1-C.TW[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.TW[1];
                money_p1 = money_p1-C.TW[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.TW[2];
                money_p1 = money_p1-C.TW[2];
            }
        }  
    }
    if(pos.p1 == 8) // Bhutan
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.BT[0];
                money_p1 = money_p1-C.BT[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.BT[1];
                money_p1 = money_p1-C.BT[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.BT[2];
                money_p1 = money_p1-C.BT[2];
            }
        }   
    }
    if(pos.p1 == 9) money_p1 = money_p1-C.TAX[0];//TAX
    if(pos.p1 == 10) //Chance
    {
        random_chance()
        if(random_chance == Good_luck(1))
        {
            money_p1 = money_p1+300;
            money_p2 = money_p2-300;
        }
        else if(random_chance == Good_luck(2))
        {
            money_p1 = money_p1+500;
        }
        else if(random_chance == Good_luck(3))
        {
            money_p1 = money_p1+1000;
        }
        else if(random_chance == Good_luck(4))
        {
            money_p1 = money_p1+500;
        }
        else if(random_chance == Good_luck(5))
        {
            money_p1 = money_p1+100;
        }
        else if(random_chance == Bad_luck(1))
        {
            money_p1 = money_p1-500;
        }
        else if(random_chance == Bad_luck(3))
        {
            money_p1 = money_p1-300;
            money_p2 = money_p2+300;
        }
        else if(random_chance == Bad_luck(5))
        {
            money_p1 = money_p1-money_p1;
        }
    }
    if(pos.p1 == 11) // Japan
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.JP[0];
                money_p1 = money_p1-C.JP[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.JP[1];
                money_p1 = money_p1-C.JP[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.JP[2];
                money_p1 = money_p1-C.JP[2];
            }
        } 
    }
    if(pos.p1 == 12) // Korea
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.KR[0];
                money_p1 = money_p1-C.KR[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.KR[1];
                money_p1 = money_p1-C.KR[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.BT[2];
                money_p1 = money_p1-C.KR[2];
            }
        }
    }
    if(pos.p1 == 13) money_p1 = money_p1+bonus();//Bonus
    if(pos.p1 == 14) money_p1 = money_p1-C.TAX[1];//Tax
    if(pos.p1 == 15) // China
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.CH[0];
                money_p1 = money_p1-C.CH[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.CH[1];
                money_p1 = money_p1-C.CH[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.CH[2];
                money_p1 = money_p1-C.CH[2];
            }
        }
    }
    if(pos.p1 == 16) // Brazil
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.BZ[0];
                money_p1 = money_p1-C.BZ[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.BZ[1];
                money_p1 = money_p1-C.BZ[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.BZ[2];
                money_p1 = money_p1-C.BZ[2];
            }
        }
    }
    if(pos.p1 == 17) //Chance
    {
        random_chance()
        if(random_chance == Good_luck(1))
        {
            money_p1 = money_p1+300;
            money_p2 = money_p2-300;
        }
        else if(random_chance == Good_luck(2))
        {
            money_p1 = money_p1+500;
        }
        else if(random_chance == Good_luck(3))
        {
            money_p1 = money_p1+1000;
        }
        else if(random_chance == Good_luck(4))
        {
            money_p1 = money_p1+500;
        }
        else if(random_chance == Good_luck(5))
        {
            money_p1 = money_p1+100;
        }
        else if(random_chance == Bad_luck(1))
        {
            money_p1 = money_p1-500;
        }
        else if(random_chance == Bad_luck(3))
        {
            money_p1 = money_p1-300;
            money_p2 = money_p2+300;
        }
        else if(random_chance == Bad_luck(5))
        {
            money_p1 = money_p1-money_p1;
        }
    }
    if(pos.p1 == 18) // France
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.FR[0];
                money_p1 = money_p1-C.FR[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.FR[1];
                money_p1 = money_p1-C.FR[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.FR[2];
                money_p1 = money_p1-C.FR[2];
            }
        }
    }
    if(pos.p1 == 20) // USA
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.USA[0];
                money_p1 = money_p1-C.USA[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.USA[1];
                money_p1 = money_p1-C.USA[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.USA[2];
                money_p1 = money_p1-C.USA[2];
            }
        }
    }
    if(pos.p1 == 21) // USA
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.SW[0];
                money_p1 = money_p1-C.SW[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.SW[1];
                money_p1 = money_p1-C.SW[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.SW[2];
                money_p1 = money_p1-C.SW[2];
            }
        }
    }
    if(pos.p1 == 22) money_p1=money_p1-C.TAX[2];//Supertax
    if(pos.p1 == 23) // England
    {
        if(buy == 1)
        {
            if(round.pos.p1 == 1)
            {
                asset = asset+C.EN[0];
                money_p1 = money_p1-C.EN[0];
            }
            else if(round.pos.p1 == 2)
            {
                asset = asset+C.EN[1];
                money_p1 = money_p1-C.EN[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset = asset+C.EN[2];
                money_p1 = money_p1-C.EN[2];
            }
        }
    }
    if(pos.p1 == 24) //Chance
    {
        random_chance()
        if(random_chance == Good_luck(1))
        {
            money_p1 = money_p1+300;
            money_p2 = money_p2-300;
        }
        else if(random_chance == Good_luck(2))
        {
            money_p1 = money_p1+500;
        }
        else if(random_chance == Good_luck(3))
        {
            money_p1 = money_p1+1000;
        }
        else if(random_chance == Good_luck(4))
        {
            money_p1 = money_p1+500;
        }
        else if(random_chance == Good_luck(5))
        {
            money_p1 = money_p1+100;
        }
        else if(random_chance == Bad_luck(1))
        {
            money_p1 = money_p1-500;
        }
        else if(random_chance == Bad_luck(3))
        {
            money_p1 = money_p1-300;
            money_p2 = money_p2+300;
        }
        else if(random_chance == Bad_luck(5))
        {
            money_p1 = money_p1-money_p1;
        }
    }
}
int money_system_p2()
{    
    if(pos.p2 == 2) // Thailand
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.TH[0];
                money_p2 = money_p2-C.TH[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset+C.TH[1];
                money_p2 = money_p2-C.TH[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset+C.TH[2];
                money_p2 = money_p2-C.TH[2];
            }
        }  
    }
    if(pos.p2 == 3) // Myanmar
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.MM[0];
                money_p2 = money_p2-C.MM[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.MM[1];
                money_p2 = money_p2-C.MM[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset_p2 = asset_p2+C.MM[2];
                money_p2 = money_p2-C.MM[2];
            }
        }  
    }
    if(pos.p2 == 4) // Vietnam
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.VT[0];
                money_p2 = money_p2-C.VT[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.VT[1];
                money_p2 = money_p2-C.VT[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset = asset+C.VT[2];
                money_p2 = money_p2-C.VT[2];
            }
        }    
    }
    if(pos.p2 == 5) //Chance
    {
        random_chance()
        if(random_chance == Good_luck(1))
        {
            money_p2 = money_p2+300;
            money_p1 = money_p1-300;
        }
        else if(random_chance == Good_luck(2))
        {
            money_p2 = money_p2+500;
        }
        else if(random_chance == Good_luck(3))
        {
            money_p2 = money_p2+1000;
        }
        else if(random_chance == Good_luck(4))
        {
            money_p2 = money_p2+500;
        }
        else if(random_chance == Good_luck(5))
        {
            money_p2 = money_p2+100;
        }
        else if(random_chance == Bad_luck(1))
        {
            money_p2 = money_p2-500;
        }
        else if(random_chance == Bad_luck(3))
        {
            money_p2 = money_p2-300;
            money_p1 = money_p1+300;
        }
        else if(random_chance == Bad_luck(5))
        {
            money_p2 = money_p2-money_p2;
        }
    }
    if(pos.p2 == 6) // Taiwan
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.TW[0];
                money_p2 = money_p2-C.TW[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.TW[1];
                money_p2 = money_p2-C.TW[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.TW[2];
                money_p2 = money_p2-C.TW[2];
            }
        }  
    }
    if(pos.p2 == 8) // Bhutan
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.BT[0];
                money_p2 = money_p2-C.BT[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.BT[1];
                money_p2 = money_p2-C.BT[1];
            }
            else if(round.pos.p1 == 3)
            {
                asset_p2 = asset_p2+C.BT[2];
                money_p2 = money_p2-C.BT[2];
            }
        }   
    }
    if(pos.p2 == 9) money_p2 = money_p2-C.TAX[0];//TAX
    if(pos.p2 == 10) //Chance
    {
        random_chance()
        if(random_chance == Good_luck(1))
        {
            money_p2 = money_p2+300;
            money_p1 = money_p1-300;
        }
        else if(random_chance == Good_luck(2))
        {
            money_p2 = money_p2+500;
        }
        else if(random_chance == Good_luck(3))
        {
            money_p2 = money_p2+1000;
        }
        else if(random_chance == Good_luck(4))
        {
            money_p2 = money_p2+500;
        }
        else if(random_chance == Good_luck(5))
        {
            money_p2 = money_p2+100;
        }
        else if(random_chance == Bad_luck(1))
        {
            money_p2 = money_p2-500;
        }
        else if(random_chance == Bad_luck(3))
        {
            money_p2 = money_p2-300;
            money_p1 = money_p1+300;
        }
        else if(random_chance == Bad_luck(5))
        {
            money_p2 = money_p2-money_p2;
        }
    }
    if(pos.p2 == 11) // Japan
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.JP[0];
                money_p2 = money_p2-C.JP[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.JP[1];
                money_p2 = money_p2-C.JP[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.JP[2];
                money_p2 = money_p2-C.JP[2];
            }
        } 
    }
    if(pos.p2 == 12) // Korea
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.KR[0];
                money_p2 = money_p2-C.KR[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.KR[1];
                money_p2 = money_p2-C.KR[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.BT[2];
                money_p2 = money_p2-C.KR[2];
            }
        }
    }
    if(pos.p2 == 13) money_p2 = money_p2+bonus();//Bonus
    if(pos.p2 == 14) money_p2 = money_p2-C.TAX[1];//Tax
    if(pos.p2 == 15) // China
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2= asset_p2+C.CH[0];
                money_p2 = money_p2-C.CH[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.CH[1];
                money_p2 = money_p2-C.CH[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.CH[2];
                money_p2 = money_p2-C.CH[2];
            }
        }
    }
    if(pos.p2 == 16) // Brazil
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.BZ[0];
                money_p2 = money_p2-C.BZ[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.BZ[1];
                money_p2 = money_p2-C.BZ[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.BZ[2];
                money_p2 = money_p2-C.BZ[2];
            }
        }
    }
    if(pos.p2 == 17) //Chance
    {
        random_chance()
        if(random_chance == Good_luck(1))
        {
            money_p2 = money_p2+300;
            money_p1 = money_p1-300;
        }
        else if(random_chance == Good_luck(2))
        {
            money_p2 = money_p2+500;
        }
        else if(random_chance == Good_luck(3))
        {
            money_p2 = money_p2+1000;
        }
        else if(random_chance == Good_luck(4))
        {
            money_p2 = money_p2+500;
        }
        else if(random_chance == Good_luck(5))
        {
            money_p2 = money_p2+100;
        }
        else if(random_chance == Bad_luck(1))
        {
            money_p2 = money_p2-500;
        }
        else if(random_chance == Bad_luck(3))
        {
            money_p2 = money_p2-300;
            money_p1 = money_p1+300;
        }
        else if(random_chance == Bad_luck(5))
        {
            money_p2 = money_p2-money_p2;
        }
    }
    if(pos.p2 == 18) // France
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.FR[0];
                money_p2 = money_p2-C.FR[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.FR[1];
                money_p2 = money_p2-C.FR[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.FR[2];
                money_p2 = money_p2-C.FR[2];
            }
        }
    }
    if(pos.p2 == 20) // USA
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.USA[0];
                money_p2 = money_p2-C.USA[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.USA[1];
                money_p2 = money_p2-C.USA[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.USA[2];
                money_p2 = money_p2-C.USA[2];
            }
        }
    }
    if(pos.p2 == 21) // USA
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.SW[0];
                money_p2 = money_p2-C.SW[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.SW[1];
                money_p2 = money_p2-C.SW[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.SW[2];
                money_p2 = money_p2-C.SW[2];
            }
        }
    }
    if(pos.p2 == 22) money_p2=money_p2-C.TAX[2];//Supertax
    if(pos.p2 == 23) // England
    {
        if(buy2 == 1)
        {
            if(round.pos.p2 == 1)
            {
                asset_p2 = asset_p2+C.EN[0];
                money_p2= money_p2-C.EN[0];
            }
            else if(round.pos.p2 == 2)
            {
                asset_p2 = asset_p2+C.EN[1];
                money_p2 = money_p2-C.EN[1];
            }
            else if(round.pos.p2 == 3)
            {
                asset_p2 = asset_p2+C.EN[2];
                money_p2 = money_p2-C.EN[2];
            }
        }
    }
    if(pos.p2 == 24) //Chance
    {
        random_chance()
        if(random_chance == Good_luck(1))
        {
            money_p2 = money_p2+300;
            money_p1 = money_p1-300;
        }
        else if(random_chance == Good_luck(2))
        {
            money_p2 = money_p2+500;
        }
        else if(random_chance == Good_luck(3))
        {
            money_p2 = money_p2+1000;
        }
        else if(random_chance == Good_luck(4))
        {
            money_p2 = money_p2+500;
        }
        else if(random_chance == Good_luck(5))
        {
            money_p2 = money_p2+100;
        }
        else if(random_chance == Bad_luck(1))
        {
            money_p2 = money_p2-500;
        }
        else if(random_chance == Bad_luck(3))
        {
            money_p2 = money_p2-300;
            money_p1 = money_p1+300;
        }
        else if(random_chance == Bad_luck(5))
        {
            money_p2 = money_p2-money_p2;
        }
    }
}
int main()
{
    C TH = {200,500,1000};
    C MM = {400,800,1200};
    C VT = {300,1000,1600};
    C TW = {800,1500,2200};
    C BT = {300,900,1500};
    C JP = {1000,2100,3300};
    C KR = {500,1500,2500};
    C CH = {1000,1500,1800};
    C BZ = {1500,2000,3500};
    C FR = {1800,3300,4000};
    C USA = {2000,3500,5000};
    C SW = {2500,4000,6000};
    C EN = {3000,5500,7000};   
    C TAX = {300,300,1000}; // 1000 = Supertax   
}