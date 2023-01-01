

const double g = 9.81; // acceleration due to gravity (m/s^2)
const double lambda = 0.1; // coefficient for rate of change of velocity

// Function to convert sensor readings to UTM distance
double calculateUTMDistance(double magReading, double hallReading) {
    double deltaX = magReading - hallReading + (g * lambda * lambda / 2);
    return deltaX;
}