#include <iostream>
#include <windows.h>
using namespace std;
void ustawKursor(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
char plansza[11][11];
int main()
{
    char kółko='O',krzyżyk='X',kolej,wygrana;
    string ruch;
    for(int j=0;j<11;j++)
    {
        for(int i=0;i<11;i++)
        {
           if(i==3||i==7){plansza[j][i]='#' ;}
           else if(j==3||j==7){plansza[j][i]='#' ;}
           else{plansza[j][i]='O';}
        }
    }
    for(int k=0;k<10;k++)
    {
        ustawKursor(0,2);
         for(int j=0;j<11;j++)
        {
            for(int i=0;i<11;i++)
            {
                cout<<plansza[j][i];
            }
            cout<<endl;
        }
        if(k==9)
        {
            ustawKursor(0,19);
            cout<<endl<<"Draw/Remis"<<endl;
            break;
    }
        if(plansza[0][0]=='\\'&&plansza[4][0]=='\\'&&plansza[8][0]=='\\'||plansza[0][0]=='\\'&&plansza[0][4]=='\\'&&plansza[0][8]=='\\'||plansza[0][4]=='\\'&&plansza[4][4]=='\\'&&plansza[8][4]=='\\'||plansza[4][0]=='\\'&&plansza[4][4]=='\\'&&plansza[4][8]=='\\'||plansza[0][8]=='\\'&&plansza[4][8]=='\\'&&plansza[8][8]=='\\'||plansza[8][0]=='\\'&&plansza[8][4]=='\\'&&plansza[8][8]=='\\'||plansza[0][0]=='\\'&&plansza[4][4]=='\\'&&plansza[8][8]=='\\'||plansza[0][8]=='\\'&&plansza[4][4]=='\\'&&plansza[8][0]=='\\')
        {
            ustawKursor(0,19);
            cout<<endl<<"Player X won/Gracz X wygrał"<<endl;
            break;
        }
        else if(plansza[0][0]=='.'&&plansza[4][0]=='.'&&plansza[8][0]=='.'||plansza[0][0]=='.'&&plansza[0][4]=='.'&&plansza[0][8]=='.'||plansza[0][4]=='.'&&plansza[4][4]=='.'&&plansza[8][4]=='.'||plansza[4][0]=='.'&&plansza[4][4]=='.'&&plansza[4][8]=='.'||plansza[0][8]=='.'&&plansza[4][8]=='.'&&plansza[8][8]=='.'||plansza[8][0]=='.'&&plansza[8][4]=='.'&&plansza[8][8]=='.'||plansza[0][0]=='.'&&plansza[4][4]=='.'&&plansza[8][8]=='.'||plansza[0][8]=='.'&&plansza[4][4]=='.'&&plansza[8][0]=='.')
        {
            ustawKursor(0,19);
            cout<<endl<<"Player O won/Gracz O wygrał"<<endl;
            break;
        }
        cout<<endl;
        cout<<"Type the space where to go/Wpisz pole gdzie iść. The spaces are/Pola to:"<<endl;
        cout<<"Centre/Środek  Top/Góra  LeftTop/LewaGóra  RightTop/PrawaGóra  Left/Lewo  Right/Prawo  Bottom/Dół  BottomLeft/LewyDół  RightBottom/PrawyDół"<<endl;
        cout<<"(Use only the written ones or the computer wont read them/Użyj tylko te podane bo innaczej komputer nie przczyta)"<<endl<<"Your move/Twój ruch: "<<endl;
        if(k%2==0){kolej=krzyżyk;}
        else if(k%2!=0){kolej=kółko;}
        ustawKursor(0,18);
        cout << "\r                \r";
        cin>>ruch;
        if(ruch=="Centre"||ruch=="Środek")
        {
            if(plansza[4][4]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[4][4]='\\';
                plansza[4][6]='/';
                plansza[5][5]='/';
                plansza[6][4]='/';
                plansza[6][6]='\\';
            }
            if(kolej==kółko)
            {
                plansza[4][4]='.';
                plansza[4][5]='_';
                plansza[4][6]='.';
                plansza[5][4]='|';
                plansza[5][6]='|';
                plansza[6][4]='"';
                plansza[6][5]='"';
                plansza[6][6]='"';
            }
            }
        }
         else if(ruch=="Left"||ruch=="Lewo")
        {
            if(plansza[4][0]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[4][0]='\\';
                plansza[4][2]='/';
                plansza[5][1]='/';
                plansza[6][0]='/';
                plansza[6][2]='\\';
            }
            if(kolej==kółko)
            {
                plansza[4][0]='.';
                plansza[4][1]='_';
                plansza[4][2]='.';
                plansza[5][0]='|';
                plansza[5][2]='|';
                plansza[6][0]='"';
                plansza[6][1]='"';
                plansza[6][2]='"';
            }
            }
        }
        else if(ruch=="Right"||ruch=="Prawo")
        {
            if(plansza[4][8]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[4][8]='\\';
                plansza[4][10]='/';
                plansza[5][9]='/';
                plansza[6][8]='/';
                plansza[6][10]='\\';
            }
            if(kolej==kółko)
            {
                plansza[4][8]='.';
                plansza[4][9]='_';
                plansza[4][10]='.';
                plansza[5][8]='|';
                plansza[5][10]='|';
                plansza[6][8]='"';
                plansza[6][9]='"';
                plansza[6][10]='"';
            }
            }
        }
        else if(ruch=="Top"||ruch=="Góra")
        {
            if(plansza[0][4]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[0][4]='\\';
                plansza[0][6]='/';
                plansza[1][5]='/';
                plansza[2][4]='/';
                plansza[2][6]='\\';
            }
            if(kolej==kółko)
            {
                plansza[0][4]='.';
                plansza[0][5]='_';
                plansza[0][6]='.';
                plansza[1][4]='|';
                plansza[1][6]='|';
                plansza[2][4]='"';
                plansza[2][5]='"';
                plansza[2][6]='"';
            }
            }
        }
        else if(ruch=="TopLeft"||ruch=="LewaGóra")
        {
            if(plansza[0][0]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[0][0]='\\';
                plansza[0][2]='/';
                plansza[1][1]='/';
                plansza[2][0]='/';
                plansza[2][2]='\\';
            }
            if(kolej==kółko)
            {
                plansza[0][0]='.';
                plansza[0][1]='_';
                plansza[0][2]='.';
                plansza[1][0]='|';
                plansza[1][2]='|';
                plansza[2][0]='"';
                plansza[2][1]='"';
                plansza[2][2]='"';
            }
            }
        }
        else if(ruch=="TopRight"||ruch=="PrawaGóra")
        {
            if(plansza[0][8]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[0][8]='\\';
                plansza[0][10]='/';
                plansza[1][9]='/';
                plansza[2][8]='/';
                plansza[2][10]='\\';
            }
            if(kolej==kółko)
            {
                plansza[0][8]='.';
                plansza[0][9]='_';
                plansza[0][10]='.';
                plansza[1][8]='|';
                plansza[1][10]='|';
                plansza[2][8]='"';
                plansza[2][9]='"';
                plansza[2][10]='"';
            }
            }
        }
        else if(ruch=="Bottom"||ruch=="Dół")
        {
            if(plansza[8][4]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[8][4]='\\';
                plansza[8][6]='/';
                plansza[9][5]='/';
                plansza[10][4]='/';
                plansza[10][6]='\\';
            }
            if(kolej==kółko)
            {
                plansza[8][4]='.';
                plansza[8][5]='_';
                plansza[8][6]='.';
                plansza[9][4]='|';
                plansza[9][6]='|';
                plansza[10][4]='"';
                plansza[10][5]='"';
                plansza[10][6]='"';
            }
            }
        }
        else if(ruch=="BottomLeft"||ruch=="LewyDół")
        {
            if(plansza[8][0]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[8][0]='\\';
                plansza[8][2]='/';
                plansza[9][1]='/';
                plansza[10][0]='/';
                plansza[10][2]='\\';
            }
            if(kolej==kółko)
            {
                plansza[8][0]='.';
                plansza[8][1]='_';
                plansza[8][2]='.';
                plansza[9][0]='|';
                plansza[9][2]='|';
                plansza[10][0]='"';
                plansza[10][1]='"';
                plansza[10][2]='"';
            }
            }
        }
        else if(ruch=="BottomRight"||ruch=="PrawyDół")
        {
            if(plansza[8][8]!='O'){cout<<"This space is already taken/To pole jest już zajęte"<<endl; k--;}
            else
            {
            ustawKursor(0,19);
            cout<< "                                                                        \r";
            if(kolej==krzyżyk)
            {
                plansza[8][8]='\\';
                plansza[8][10]='/';
                plansza[9][9]='/';
                plansza[10][8]='/';
                plansza[10][10]='\\';
            }
            if(kolej==kółko)
            {
                plansza[8][8]='.';
                plansza[8][9]='_';
                plansza[8][10]='.';
                plansza[9][8]='|';
                plansza[9][10]='|';
                plansza[10][8]='"';
                plansza[10][9]='"';
                plansza[10][10]='"';
            }
            }
        }
        else
        {
            cout<<"Space typed in incorrectly/Źle wprowadzone pole"<<endl;
            k--;
        }
  }
}