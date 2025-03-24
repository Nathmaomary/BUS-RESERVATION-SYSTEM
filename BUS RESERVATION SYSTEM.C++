#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BusReservationSystem {
public:
    void displayWelcomeMessage();
};

void BusReservationSystem::displayWelcomeMessage() {
    cout << "Welcome to the Bus Reservation System!" << endl;
}

int main() {
    BusReservationSystem system;
    system.displayWelcomeMessage();
    return 0;
}
class Bus {
public:
    string busID;
    string source;
    string destination;
    int totalSeats;
    int availableSeats;

    Bus(string id, string src, string dest, int total) 
        : busID(id), source(src), destination(dest), totalSeats(total), availableSeats(total) {}
};

