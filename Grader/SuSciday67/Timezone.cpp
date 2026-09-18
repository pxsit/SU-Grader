#include <bits/stdc++.h>
using namespace std;
int main() {
    int date, time, tz, day, month, year, hour, min;
    cin >> date;
    cin >> time;
    cin >> tz;
    year = date % 10000;
    month = (date / 10000) % 100;
    day = date / 1000000;
    min = time % 100;
    hour = time / 100;
    if (tz < 0) {
        hour -= abs(tz);
    } else {
        hour += tz;
    }
    if (hour > 23) {
        day++;
        hour -= 24;
    } else if (hour < 0) {
        day--;
        hour += 24;
    }
    if (day > 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
        day = 1;
        month++;
    } else if (day > 28 && month == 2) {
        day = 1;
        month++;
    } else if (day > 30 && (month == 11 || month == 4 || month == 6 || month == 9)) {
        day = 1;
        month++;
    } else if (day < 1 && (month == 5 || month == 7 || month == 10 || month == 12)) {
        day = 30;
        month--;
    } else if (day < 1 && month == 3) {
        day = 28;
        month--;
    } else if (day < 1 && (month == 11 || month == 4 || month == 6 || month == 9 || month == 8 || month == 2 || month == 1)) {
        day = 31;
        month--;
    }

    if (month > 12) {
        month = 1;
        year++;
    } else if (month < 1) {
        month = 12;
        year--;
    }

    if (month == 1) {
        cout << day << " January " << year;
    } else if (month == 2) {
        cout << day << " February " << year;
    } else if (month == 3) {
        cout << day << " March " << year;
    } else if (month == 4) {
        cout << day << " April " << year;
    } else if (month == 5) {
        cout << day << " May " << year;
    } else if (month == 6) {
        cout << day << " June " << year;
    } else if (month == 7) {
        cout << day << " July " << year;
    } else if (month == 8) {
        cout << day << " August " << year;
    } else if (month == 9) {
        cout << day << " September " << year;
    } else if (month == 10) {
        cout << day << " October " << year;
    } else if (month == 11) {
        cout << day << " November " << year;
    } else if (month == 12) {
        cout << day << " December " << year;
    }
    cout << '\n';
    if (hour < 10) {
        cout << "0" << hour << " :";
    } else {
        cout << hour << " :";
    }

    if (min < 10) {
        cout << " 0" << min;
    } else {
        cout << ' ' << min;
    }
}
