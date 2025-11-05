#include <iostream>
using namespace std;

class Box {
private:
    double volume;  // Represents the volume of the box

public:
    // Constructor
    Box(double v = 0) : volume(v) {}

    // Overload '==' operator
    bool operator==(const Box& b) const {
        return volume == b.volume;
    }

    // Overload '!=' operator
    bool operator!=(const Box& b) const {
        return volume != b.volume;
    }

    // Overload '<' operator
    bool operator<(const Box& b) const {
        return volume < b.volume;
    }

    // Overload '>' operator
    bool operator>(const Box& b) const {
        return volume > b.volume;
    }

    // Overload '<=' operator
    bool operator<=(const Box& b) const {
        return volume <= b.volume;
    }

    // Overload '>=' operator
    bool operator>=(const Box& b) const {
        return volume >= b.volume;
    }

    // Function to display volume
    void display() const {
        cout << "Box volume: " << volume << endl;
    }
};

int main() {
    Box box1(50.5), box2(75.2);

    cout << "Comparing two boxes:\n";
    box1.display();
    box2.display();

    cout << "\n--- Relational Operator Results ---\n";
    cout << "box1 == box2 : " << (box1 == box2) << endl;
    cout << "box1 != box2 : " << (box1 != box2) << endl;
    cout << "box1 <  box2 : " << (box1 < box2) << endl;
    cout << "box1 >  box2 : " << (box1 > box2) << endl;
    cout << "box1 <= box2 : " << (box1 <= box2) << endl;
    cout << "box1 >= box2 : " << (box1 >= box2) << endl;

    return 0;
}
