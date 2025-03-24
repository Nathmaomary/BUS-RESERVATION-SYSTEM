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
bool BusReservationSystem::makeReservation(vector<Bus>& buses, string busID, int seats) {
    for (auto& bus : buses) {
        if (bus.busID == busID && bus.availableSeats >= seats) {
            bus.availableSeats -= seats;
            cout << "Reservation successful! Seats booked: " << seats << endl;
            return true;
        }
    }
    cout << "Reservation failed! Not enough available seats." << endl;
    return false;
}

void BusReservationSystem::displayMenu() {
    cout << "\n1. View available buses\n";
    cout << "2. Make a reservation\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}
int BusReservationSystem::getInput() {
    int choice;
    while (!(cin >> choice)) {
        cin.clear();
        cin.ignore(123, '\n');
        cout << "Invalid input. Please try again: ";
    }
    return choice;
}

int main() {
    BusReservationSystem system;
    vector<Bus> buses;
    system.initializeBuses(buses);

    while (true) {
        system.displayMenu();
        int choice = system.getInput();
        if (choice == 1) {
            system.displayBuses(buses);
        } else if (choice == 2) {
            string busID;
            int seats;
            cout << "Enter Bus ID: ";
            cin >> busID;
            cout << "Enter number of seats to reserve: ";
            cin >> seats;
            system.makeReservation(buses, busID, seats);
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
bool BusReservationSystem::makeReservation(vector<Bus>& buses, string busID, int seats) {
    for (auto& bus : buses) {
        if (bus.busID == busID) {
            if (bus.availableSeats >= seats) {
                bus.availableSeats -= seats;
                cout << "Reservation successful! Seats booked: " << seats << endl;
                return true;
            } else {
                cout << "Not enough available seats." << endl;
                return false;
            }
        }
    }
    cout << "Bus ID not found." << endl;
    return false;
}
cout << (success ? "Reservation successful!" : "Reservation failed.") << endl;
void BusReservationSystem::viewReservedSeats(const vector<Bus>& buses, string busID) {
    for (const auto& bus : buses) {
        if (bus.busID == busID) {
            cout << "Bus ID: " << bus.busID 
                 << ", Reserved Seats: " << bus.totalSeats - bus.availableSeats << endl;
            return;
        }
    }
    cout << "Bus ID not found." << endl;
}

void BusReservationSystem::displayMenu() {
    cout << "\n1. View available buses\n";
    cout << "2. Make a reservation\n";
    cout << "3. View reserved seats\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}
bool BusReservationSystem::makeReservation(vector<Bus>& buses, string busID, int seats) {
    if (seats <= 0) {
        cout << "Invalid number of seats." << endl;
        return false;
    }
    // Previous code...
}
class Bus {
public:
    string busID;
    string source;
    string destination;
    int totalSeats;
    int availableSeats;
    float pricePerSeat;

    Bus(string id, string src, string dest, int total, float price) 
        : busID(id), source(src), destination(dest), totalSeats(total), availableSeats(total), pricePerSeat(price) {}
};
void BusReservationSystem::displayBuses(const vector<Bus>& buses) {
    cout << "Available Buses: " << endl;
    for (const auto& bus : buses) {
        cout << "Bus ID: " << bus.busID << ", Source: " << bus.source 
             << ", Destination: " << bus.destination 
             << ", Seats Available: " << bus.availableSeats 
             << ", Price per Seat: $" << bus.pricePerSeat << endl;
    }
}
bool BusReservationSystem::makeReservation(vector<Bus>& buses, string busID, int seats) {
    for (auto& bus : buses) {
        if (bus.busID == busID && bus.availableSeats >= seats) {
            bus.availableSeats -= seats;
            float totalCost = seats * bus.pricePerSeat;
            cout << "Total cost: $" << totalCost << endl;
            return true;
        }
    }
    cout << "Reservation failed! Not enough available seats." << endl;
    return false;
}
if (seats > 0) {
    cout << "Price per seat: $" << bus.pricePerSeat << endl;
    cout << "Total cost for " << seats << " seats: $" << seats * bus.pricePerSeat << endl;
    // Proceed with reservation...
}
bool confirmExit() {
    char choice;
    cout << "Are you sure you want to exit? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}
cout << "------------------------------" << endl;
cout << "Reservation Summary" << endl;
cout << "------------------------------" << endl;
cout << "Bus ID: " << bus.busID << endl;
cout << "Total Seats Reserved: " << seats << endl;
cout << "Total Cost: $" << seats * bus.pricePerSeat << endl;

















