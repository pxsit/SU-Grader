#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a;
    int n = 0;
    int left = 0;
    int next = 0;
    for (int i = 0;; i++) {
        int in;
        cin >> in;
        if (in == 0) {
            break;
        } else {
            a.push_back(in);
            n++;
        }
    }
    vector<int> r(n);
    int m = 55, h = 7;
    for (int i = 0; i < n; i++) {
        if (a[i] < 50)
            r[i] = 1;
        else
            r[i] = (a[i] - left) / 50;
    }
    left = 0;
    for (int j = 0; j < n; j++) {
        cout << a[j] << ' ';
        if (next == 0) {
            for (int i = 0; i <= r[j]; i++) {
                if (left != 0) {
                    if (a[j] > left) {
                        if (h < 10) {
                            if (m < 10) {
                                cout << "0" << h << ":0" << m << "(" << left << ") ";
                            } else {
                                cout << "0" << h << ":" << m << "(" << left << ") ";
                            }
                        } else {
                            if (m < 10) {
                                cout << h << ":0" << m << "(" << left << ") ";
                            } else {
                                cout << h << ":" << m << "(" << left << ") ";
                            }
                        }
                        a[j] -= left;
                        left = 0;
                    } else {
                        if (h < 10) {
                            if (m < 10) {
                                cout << "0" << h << ":0" << m << "(" << a[j] << ") ";
                            } else {
                                cout << "0" << h << ":" << m << "(" << a[j] << ") ";
                            }
                        } else {
                            if (m < 10) {
                                cout << h << ":0" << m << "(" << a[j] << ") ";
                            } else {
                                cout << h << ":" << m << "(" << a[j] << ") ";
                            }
                        }
                        left -= a[j];
                        a[j] = 0;
                        break;
                    }
                }
                m += 5;
                if (m == 60) {
                    m = 0;
                    h++;
                }
                if (h == 17) {
                    next = 1;
                    cout << "next day";
                    break;
                }
                if (a[j] > 50) {
                    if (h < 10) {
                        if (m < 10) {
                            cout << "0" << h << ":0" << m << "(50) ";
                        } else {
                            cout << "0" << h << ":" << m << "(50) ";
                        }
                    } else {
                        if (m < 10) {
                            cout << h << ":0" << m << "(50) ";
                        } else {
                            cout << h << ":" << m << "(50) ";
                        }
                    }
                    a[j] -= 50;
                } else if (a[j] == 50) {
                    if (h < 10) {
                        if (m < 10) {
                            cout << "0" << h << ":0" << m << "(50) ";
                        } else {
                            cout << "0" << h << ":" << m << "(50) ";
                        }
                    } else {
                        if (m < 10) {
                            cout << h << ":0" << m << "(50) ";
                        } else {
                            cout << h << ":" << m << "(50) ";
                        }
                    }
                    a[j] -= 50;
                    break;
                } else {
                    if (h < 10) {
                        if (m < 10) {
                            cout << "0" << h << ":0" << m << "(" << a[j] << ") ";
                        } else {
                            cout << "0" << h << ":" << m << "(" << a[j] << ") ";
                        }
                    } else {
                        if (m < 10) {
                            cout << h << ":0" << m << "(" << a[j] << ") ";
                        } else {
                            cout << h << ":" << m << "(" << a[j] << ") ";
                        }
                    }
                    left = 50 - a[j];
                    break;
                }
            }
            cout << '\n';
        } else {
            if (j == n - 1)
                cout << "next day";
            else
                cout << "next day" << '\n';
        }
    }
}
