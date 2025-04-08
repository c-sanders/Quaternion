#ifndef TESTROUTINES_HPP
#define TESTROUTINES_HPP

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


void
displayUsage
(
);


int
quaternionMultiplicationTest
(
);


int
quaternionRotationTest
(
 char * argv[]
);


#endif
