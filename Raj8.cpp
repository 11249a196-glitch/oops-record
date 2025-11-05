#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    void setTime(int h, int m) {
        hours = h;
        minutes = m;
    }
    void display() const {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
    // Function to add two Time objects
    void addTime(const Time &t1, const Time &t2) {
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours + (minutes / 60);
        minutes = minutes % 60;
    }
};

int main() {
    Time t1, t2, t3;
    int h, m;

    cout << "Enter first time (hours and minutes): ";
    cin >> h >> m;
    t1.setTime(h, m);

    cout << "Enter second time (hours and minutes): ";
    cin >> h >> m;
    t2.setTime(h, m);

    t3.addTime(t1, t2);

    cout << "Sum of times: ";
    t3.display();

    return 0;
}