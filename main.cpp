#include <iostream>
#include <string>
#include <cstdlib>
#include "speechManager.h"
#include <ctime>
using namespace std;

int main()
{

    srand((unsigned int)time(NULL));

    SpeechManager sm;


    // for(map<int,Speaker>::iterator it =sm.m_Speaker.begin();it!=sm.m_Speaker.end();it++)
    // {
    //     cout<<"选手编号："<<it->first<<"姓名："<<it->second.m_Name<<"分数："<<it->second.m_Score[0]<<endl;
    // }


    int choice = 0;

    while(1)
    {
        sm.show_Menu();
        cout<<"请输入您的选择"<<endl;
        cout<<"请谨慎选择"<<endl;
        cout<<"再次请谨慎选择"<<endl;
        cin>>choice;jkjkj


        switch (choice)
        {
        case 1://start
            sm.startSpeech();
            break;
        case 2://check
            sm.showRecord();
            break;
        case 3://clear
            sm.clearRecord();
            break;
        case 0:
            sm.exitsystem();
            break;
        
        default:
            system("clear");//clear the screen1
            break;
        }
    }

    return 0;
}