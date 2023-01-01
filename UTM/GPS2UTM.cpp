#include <cmath>



struct GPSCoordinate {
    double latitude;
    double longitude;
};

// Function to update GPS coordinate based on UTM distance
GPSCoordinate updateGPSCoordinate(GPSCoordinate lastKnownCoordinate, double utmDistance) {
    GPSCoordinate newCoordinate;
    newCoordinate.latitude = lastKnownCoordinate.latitude + utmDistance * cos(lastKnownCoordinate.longitude);
    newCoordinate.longitude = lastKnownCoordinate.longitude + utmDistance * sin(lastKnownCoordinate.latitude);
    return newCoordinate;
}
