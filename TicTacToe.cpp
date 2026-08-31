#include <iostream>
#include <windows.h>
using namespace std;
char plansza[11][11];
int main()
{
    void ustawKursor(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
    char kółko='O',krzyżyk='X',kolej,wygrana;
    string ruch;
    for(int j=0;j<11;j++)
    {
        for(int i=0;i<11;i++)
        {
           if(i==3||i==7){plansza[j][i]='#' ;}
           else if(j==3||j==7){plansza[j][i]='#' ;}
           else{plansza[j][i]='0';}
        }
    }
    for(int k=0;k<9;k++)
    {
        ustawKursor(0,0)
        cout<<"Cross starts/Krzyżyk zaczyna"<<endl<<"Type the space where to go/Wpisz pole gdzie iść"<<endl<<"The spaces are/Pola to:"<<endl;
        cout<<"Centre/Środek  Top/Góra  LeftTop/LewaGóra  RightTop/PrawaGóra  Left/Lewo  Right/Prawo  Bottom/Dół  BottomLeft/LewyDół  RightBottom/PrawyDół"<<endl;
        cout<<"(Use only the written ones or the computer wont read them/Użyj tylko te podane bo innaczej komputer nie przczyta)"<<endl<<endl;
        for(int j=0;j<11;j++)
        {
            for(int i=0;i<11;i++)
            {
                cout<<plansza[j][i];
            }
            cout<<endl;
        }
        if(k%2==0){kolej=krzyżyk;}
        else if(k%2!=0){kolej=kółko;}
        cin>>ruch;
        if(ruch=="Centre"||ruch=="Środek")
        {
            if(kolej==krzyżyk)
            {
                plansza[4][4]='\\';
                plansza[4][6]='/';
                plansza[5][5]='/';
                plansza[6][4]='/';
                plansza[6][6]='\\';
            }
        }
    }
}