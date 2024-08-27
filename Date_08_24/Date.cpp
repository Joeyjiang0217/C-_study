//
// Created by Joe on 2024/8/24.
//

#include "Date.h"

Date::Date(int year, int month, int day)
{
    _year = year;
    _month = month;
    _day = day;
//    cout << "Date::Date(int year, int month, int day)" << endl;
    //check date validity
    if(month < 1 || month > 12 || day < 1 || day > GetMonthDay(year, month))
    {
        cout << "invalid date" << endl;
        //exit(-1);
    }
}

Date::Date(const Date& d)
{
//    cout << "Date::Date(const Date& d)" << endl;
    _year = d._year;
    _month = d._month;
    _day = d._day;
}

void Date::Print() const
{
    cout << _year
        << "-"
        << _month
        << "-"
        << _day
        << endl;
}

bool Date::operator<(const Date &d) const
{
    if(_year < d._year)
    {
        return true;
    }
    else if(_year == d._year && _month < d._month)
    {
        return true;
    }
    else if(_year == d._year && _month == d._month && _day < d._day)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Date::operator==(const Date &d) const
{
    return (_year == d._year && _month == d._month && _day == d._day);
}

bool Date::operator<=(const Date &d) const
{
    return (*this == d || *this < d);
}

bool Date::operator!=(const Date &d) const
{
    return !(*this == d);
}

bool Date::operator>(const Date &d) const
{
    return !(*this <= d);
}

bool Date::operator>=(const Date &d) const
{
    return !(*this < d);
}

int Date::GetMonthDay(int year, int month)
{
    //enhance memory space efficiency
    const static int monthArray[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
    {
        return 29;
    }
    return monthArray[month];
}

Date& Date::operator+=(int day)
{
    if(day < 0)
    {
        return (*this) -= (-day);
    }
    _day += day;
    while(_day > GetMonthDay(_year, _month))
    {
        _day -= GetMonthDay(_year, _month);
        _month += 1;
        if(_month == 13)
        {
            _year++;
            _month = 1;
        }
    }
    return *this;
}

Date Date::operator+(int day) const
{
    Date tmp(*this);
    tmp += day;
    return tmp;
}

Date &Date::operator-=(int day)
{
    if(day < 0)
    {
        return (*this) += (-day);
    }
    _day -= day;
    while(_day <= 0)
    {
        _month -= 1;
        if(_month == 0)
        {
            _year -= 1;
            _month = 12;
        }
        int month_day = GetMonthDay(_year, _month);
        _day += month_day;
    }
    return *this;
}

Date Date::operator-(int day) const
{
    Date tmp(*this);
    tmp-=day;
    return tmp;
}

Date& Date::operator=(const Date& d)
{
//    cout << "const Date &Date::operator=(const Date d)" << endl;
    if(this != &d)
    {
        _year = d._year;
        _month = d._month;
        _day = d._day;
    }

    return *this;
}

int Date::operator-(const Date &d) const
{
    Date pre;
    Date af;
    int flag = 1;
    if(*this == d)
    {
        return 0;
    }
    else if(*this < d)
    {
        pre = *this;
        af = d;
        flag = -1;
    }
    else
    {
        pre = d;
        af = *this;
    }
    int count = 0;
    while (pre != af)
    {
        pre += 1;
        count++;
    }

    return count * flag;
}

Date &Date::operator++()
{
    return (*this) += 1;
}

Date Date::operator++(int)
{
    Date tmp = *this;
    (*this) += 1;
    return tmp;
}

Date &Date::operator--()
{
    return (*this) -= 1;
}

Date Date::operator--(int)
{
    Date tmp(*this);
    *this -= 1;
    return tmp;
}

void Date::operator<<(std::ostream &out) const
{
    cout << _year
         << "年"
         << _month
         << "月"
         << _day
         << "日"
         << endl;
}

void Date::operator>>(std::istream &in)
{
    cin >> _year >> _month >> _day;
}

ostream& operator<<(ostream& out, const Date& d)
{
    out << d._year
         << "-"
         << d._month
         << "-"
         << d._day;
    return out;
}

istream& operator>>(istream& in, Date& d)
{
    in >> d._year >> d._month >> d._day;
    return in;
}

//Date::~Date()
//{
//    cout << "~Date()" << endl;
//}