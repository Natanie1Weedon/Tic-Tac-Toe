#include <iostream>
using namespace std;
char plansza[11][11];
int main()
{
    int a,b,c;
    for(int j=0;j<11;j++)
    {
        for(int i=0;i<11;i++)
        {
           if(plansza[j][i]!=plansza[j][3]&&plansza[j][i]!=plansza[3][i]){plansza[j][i]='0';}
           if(plansza[j][i]!=plansza[j][8]&&plansza[j][i]!=plansza[8][i]){plansza[j][i]='0';}
           else{plansza[j][i]='#';}
        }
    }
    for(int j=0;j<11;j++)
    {
        for(int i=0;i<11;i++)
        {
            cout<<plansza[j][i];
        }
        cout<<endl;
    }
}