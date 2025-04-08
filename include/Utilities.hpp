#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <string>
#include <iostream>
#include <cmath>
#include <stdexcept>

#include <Quaternion.hpp>


using std::string;
using std::ostream;
using std::stod;
using std::cout;
using std::cin;
using std::endl;
using std::abs;
using std::sin;
using std::cos;
using std::runtime_error;
 

static
double pi = M_PI;


double
degreesToRadians
(
 double   angleDegrees
);


#endif
