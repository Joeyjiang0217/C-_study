//
// Created by Joe on 2024/8/24.
//

#ifndef DATE_08_24_DATE_H
#define DATE_08_24_DATE_H
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::istream;
using std::cin;

class Date
{
    friend ostream& operator<<(ostream& out, const Date& d);
    friend istream& operator>>(istream& in, Date& d);
public:
    Date(int year = 1, int month = 1, int day = 1);
    Date(const Date& d);
    void Print() const;
    bool operator<(const Date& d) const;
    bool operator==(const Date& d) const;
    bool operator<=(const Date& d) const;
    bool operator!=(const Date& d) const;
    bool operator>(const Date& d) const;
    bool operator>=(const Date& d) const;
    int GetMonthDay(int year, int month);
    Date& operator+=(int day);
    Date operator+(int day) const;
    Date& operator-=(int day);
    Date operator-(int day) const;
    Date& operator=(const Date& d);
    int operator-(const Date&d) const;
    Date& operator++();
    Date operator++(int);
    Date& operator--();
    Date operator--(int);
    void operator<<(ostream& out) const;
    void operator>>(istream& in);


//    ~Date();

private:
    int _year;
    int _month;
    int _day;
};

ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);




#endif //DATE_08_24_DATE_H
