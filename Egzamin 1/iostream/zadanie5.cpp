#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>
#include <string>
using namespace std;


enum dataAddInfo
{
    Year,
    Month,
    Day,
    Hour,
    Minute,
    Second
};
class TimeInfo
{
    private:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;

    public:
    TimeInfo(int day, int month, int year, int hour, int minute, int second)
    {
        this->day = day;
        this->month = month;
        this->year = year;
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void sumSeconds(dataAddInfo type, int value)
    {
        switch (type)
        {
            case Second:
            this->second += value;
            break;
            case Minute:
            this->minute += value;
            break;
            case Hour:
            this->hour += value;
            break;
            case Year:
            this->year += value;
            break;
            case Month:
            this->month += value;
            break;
            case Day:
            this->day += value;
            break;
        }
    }
    void checkFormat()
    {
        if (this->second >= 60)
        {
            this->minute += second/60;
            this->second = second%60;
        }
        if (this->minute >= 60)
        {
            this->hour += minute/60;
            this->minute = minute%60;
        }
        if (this->hour >= 24)
        {
            this->day += hour/24;
            this->hour = hour%24;
        }
        if (this->month > 12)
        {
            this->year += month/12;
            this->month = month%12;
        }

    }
    void printInfo()
    {
        printf("%d-%d-%d %d:%d:%d", day, month, year, hour, minute, second);
    }
};
int main()
{
    string fileName;
    getline(cin, fileName);
    char* fileNameFopen = new char[fileName.length()];
    strcpy(fileNameFopen, fileName.c_str());
    FILE *file = fopen(fileNameFopen, "r");
    int hour = 0;
    int minute = 0;
    int day = 0;
    int month = 0;
    int year = 0;
    int second = 0;
    fscanf(file, "%d-%d-%d %d:%d:%d", &day, &month, &year, &hour, &minute, &second);
    TimeInfo timeInfo(day, month, year, hour, minute, second);
    timeInfo.sumSeconds(Hour, 37);
    timeInfo.sumSeconds(Month, 15);
    timeInfo.checkFormat();
    timeInfo.printInfo();
	return 0;
}