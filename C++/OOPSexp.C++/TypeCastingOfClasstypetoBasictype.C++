#include <iostream>
using namespace std;
class DistConv
{
private:
int kilometers;
double meters;
const static double kilometersPerMile;
public:
// Constructor: convert miles -> DistConv (km + meters)
DistConv(double mile)
{
double km = kilometersPerMile * mile; // miles to kilometers
kilometers = int(km); // integer kilometers
meters = (km - kilometers) * 1000.0; // remaining in meters
}
// Constructor: initialize from kilometers and meters
DistConv(int k, double m)
{
kilometers = k;
meters = m;
}
// Conversion operator: DistConv -> double (miles)
// Marked const because it does not modify the object
operator double() const
{
double K = meters / 1000.0; // meters -> kilometers (fractional part)
K += double(kilometers); // add integer kilometers
return K / kilometersPerMile; // kilometers -> miles
}
// Display function
void display() const
{
cout << kilometers << " kilometers and " << meters << " meters";
}
};
// Definition of the static constant
const double DistConv::kilometersPerMile = 1.609344;

int main()
{
DistConv d1 = 5.0; // use constructor DistConv(double)
DistConv d2(2, 25.5); // use constructor DistConv(int, double)
double ml = double(d2); // explicit conversion using operator double()
cout << "2 kilometers and 25.5 meters = " << ml << " miles\n";
ml = d1; // implicit conversion using operator double()
d1.display();
cout << " = " << ml << " miles\n"; 
return 0; 
}