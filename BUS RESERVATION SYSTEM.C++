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
