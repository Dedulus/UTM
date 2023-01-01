
#pragma once
struct GPSCoordinate {
    double latitude;
    double longitude;
};

GPSCoordinate updateGPSCoordinate(GPSCoordinate lastKnownCoordinate, double utmDistance);