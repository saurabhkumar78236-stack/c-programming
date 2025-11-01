#include <iostream>
using namespace std;
class DistConv
{
private:
int kilometers;
double meters;
const static double kilometersPerMile;
public:
// Constructor to convert miles to kilometers and meters
DistConv(double mile)
{
double km = kilometersPerMile * mile; // convert miles to kilometers
kilometers = int(km); // integer part → kilometers
meters = (km - kilometers) * 1000; // fractional part → meters
}
// Default constructor (needed for assignment to work)
DistConv()
{
kilometers = 0;
meters = 0.0;
}
// Display function
void display()
{
cout << kilometers << " kilometers and " << meters << " meters\n";
}
};
// Definition of static member
const double DistConv::kilometersPerMile = 1.609344;
int main()
{
DistConv d1 = 5.0; // invokes constructor with one argument
cout << "5.0 miles = ";
d1.display();
d1 = DistConv(2.0); // must explicitly construct new object for assignment
cout << "2.0 miles = ";
d1.display();
return 0;
}