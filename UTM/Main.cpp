//Usage: If a starting location(GPS coordinate) is known, this method can be iteratively looped to know the future
//position of the ego vehicle(for example inside a tunnel).

//Version: 1.0, Date: 25 December 2022

//Owner: Arnab Mitra

//Contact: papan.mitra.2121@gmail.com

#include <iostream>
#include "ToUTM.h"
#include "GPS2UTM.h"


int main() {
    // Read sensor readings from magnetometer and hall sensor
    double magReading, hallReading;
    std::cout << "Enter magnetometer reading(in micro Tesla): ";
    std::cin >> magReading;
    std::cout << "Enter hall sensor reading(in Meters): ";
    std::cin >> hallReading;

    // Calculate UTM distance based on sensor readings
    double utmDistance = calculateUTMDistance(magReading, hallReading);


    // Read last known GPS coordinate
    GPSCoordinate lastKnownCoordinate;
    std::cout << "Enter last known GPS coordinate (latitude): ";
    std::cin >> lastKnownCoordinate.latitude;
    std::cout << "Enter last known GPS coordinate (longitude): ";
    std::cin >> lastKnownCoordinate.longitude;

    // Calculate new GPS coordinate based on UTM distance
    GPSCoordinate newCoordinate = updateGPSCoordinate(lastKnownCoordinate, utmDistance);
    std::cout << "New GPS Coordinate: (" << newCoordinate.latitude << ", " << newCoordinate.longitude << ")" << std::endl;
    std::cout << "        " << std::endl;
    std::cout << "Found it interesting? :).......For more such implementation please consider my profile for the interview,where I can discuss more about such ideas(cool). Thank you :)" << std::endl;

    return 0;
}


