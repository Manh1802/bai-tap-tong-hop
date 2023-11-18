#include <iostream>
using namespace std;

int main() 
{
    // Define the variables
    double townMPG = 23.5;
    double highwayMPG = 28.9;
    double tankSize = 20.0;

    // Calculate the distances
    double distanceInTown = tankSize * townMPG;
    double distanceOnHighway = tankSize * highwayMPG;

    // Display the results on the screen
    cout << "The car can travel " << distanceInTown << " miles on one tank of gas when driven in town." << endl;
    cout << "The car can travel " << distanceOnHighway << " miles on one tank of gas when driven on the highway." << endl;

    return 0;
}

