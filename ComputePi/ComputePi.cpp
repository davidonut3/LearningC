#include <iostream>

int main(int argc, char *argv[]) {
    int requestedPrecision = std::strtol(argv[1], nullptr, 10);
    
    int computedPrecision = 0;
    int polygonSize = 4;
    double upperBound = 4.0;
    double lowerBound = 2.0;

    while (computedPrecision < requestedPrecision) {

    }

    std::cout << "Pi lies between " << lowerBound << " and " << upperBound << ".\n";
    std::cout << "Accurate to " << computedPrecision << " decimal places, with polygon size " << polygonSize << ".\n";

    return 0;
}

/// @brief Compute the area of the smallest regular polygon that fits around the unit circle.
/// @param polygonSize: The number of edges of the regular polygon.
/// @return Area of the regular polygon.
double computeUpperBound(int polygonSize) {
    return 0.0;
}