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
void BusReservationSystem::displayBuses(const vector<Bus>& buses) {
    cout << "Available Buses: " << endl;
    for (const auto& bus : buses) {
        cout << "Bus ID: " << bus.busID << ", Source: " << bus.source 
             << ", Destination: " << bus.destination 
             << ", Seats Available: " << bus.availableSeats << endl;
    }
}
void BusReservationSystem::initializeBuses(vector<Bus>& buses) {
    buses.push_back(Bus("B001", "New York", "Boston", 40));
    buses.push_back(Bus("B002", "Los Angeles", "San Francisco", 50));
    buses.push_back(Bus("B003", "Chicago", "Detroit", 30));
}



