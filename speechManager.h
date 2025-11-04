#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <fstream>
using namespace std;

class SpeechManager
{
public:
    SpeechManager();


    void show_Menu();

    void exitsystem();

    ~SpeechManager();


    //初始化容器和属性
    void initSpeech();

    //创建12名选手
    void createSpeaker();


    //start competition
    void startSpeech();

    //抽签
    void speechDraw();


    //比赛
    void speechContest();

    //显示得分
    void showScore();


    //保存分数
    void saveRecord();

    //读取记录
    void loadRecord();

    //显示往届记录
    void showRecord();

    //清空文件
    void clearRecord();

    //判断文件是否为空
    bool fileIsEmpty;

    //存放往届记录的容器
    map<int, vector<string>>m_Record;

    //第一轮比赛选手编号
    vector<int>v1;

    //第一轮晋级选手编号
    vector<int>v2;
    //前三名
    vector<int>vVictory;
    //存放编号及具体选手容器
    map<int,Speaker>m_Speaker;

    int m_Index;

    
};