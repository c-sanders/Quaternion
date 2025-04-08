#ifndef QUATERNION_HPP
#define QUATERNION_HPP


#include <string>
#include <iostream>
#include <cmath>
#include <stdexcept>

#include <Utilities.hpp>

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
bool   debug = false;


/**
 * /class Quaternion
 * 
 * This class implements the mathematical concept known as a quaternion.
 * 
 * A quaternion is an example of a hyper-complex number. It is an extension to
 * the complex numbers as it contains an additional two imaginary components.
 * Quaternions are of the form q = a + ib + jc + kd, where a is referred to as
 * the scalar component of the quaternion, and ib + jc + kd is referred to as 
 * the vector component of the quaternion. i, j, and k are all imagin
 */

class
Quaternion
{
private :
    
    struct
    vector_t
    {
       double   i,
                j,
                k;
    };
    
    
public :
    
    double     scalar;
    
    struct
    vector_t   vector;
    
    /*
    double     imag_i,
               imag_j,
               imag_k;
     */
    

private :

    double   threshold_zero = 0.000001;

    
public :
    
    /**
     * /function Default Constructor.
     * 
     * @param scalar
     * @param imag_i
     * @param imag_j
     * @param imag_k
     */
    
    Quaternion
    (
     double   scalar   = 0,
     double   vector_i = 0,
     double   vector_j = 0,
     double   vector_k = 0
    );
    
    
    /**
     * /function Default Destructor.
     */
    
    ~Quaternion
    (
    );
    
    /*
    Quaternion
    (
     Quaternion const & rhs     
    );
     */
    
    /**
     * /function Assignment operator.
     * 
     * @param rhs
     * @return 
     */
    
    Quaternion &
    operator=
    (
     const
     Quaternion & rhs
    );
    
    
public :
  
    /**
     * /function 
     * 
     * @param rhs
     * @return 
     */
    
    friend
    ostream &
    operator<<
    (
     ostream    & os,
     const
     Quaternion & q
    );

    /**
     * /function Addition operator.
     * 
     * @param rhs
     * @return 
     */
    
    Quaternion
    operator+
    (
     Quaternion const & rhs
    );
    
    /**
     * /function Multiplication operator.
     * 
     * @param rhs
     * @return 
     */
    
    Quaternion
    operator*
    (
     Quaternion const & rhs
    );
    
    
public :
    
    /**
     * /function Function : display
     * 
     * @param label
     */
    
    void
    display
    (
     const
     string   label
    )
    const;
    
    /**
     * /function Function : conjugate
     * 
     * @return 
     * 
     * Compute the conjugate of the current value of the quaternion.
     */
    
    Quaternion
    conjugate
    (
    );

    void
    zero
    (
    );
    
    Quaternion
    rotate
    (
     const
     Quaternion   vec
    );
    
};

// End of declaration of class : Quaternion


Quaternion
conjugate
(
 Quaternion   q
);


#endif
