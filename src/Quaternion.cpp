#include <Quaternion.hpp>


Quaternion::Quaternion
(
 double   scalar,
 double   imag_i,
 double   imag_j,
 double   imag_k
)
{
    const
    string   nameMethod = "Quaternion Ctor";
    
    
    if (debug)
    {
        cout << nameMethod << " : Enter" << endl;
    }
    
    this->scalar   = scalar;
    this->vector.i = imag_i;
    this->vector.j = imag_j;
    this->vector.k = imag_k;
    
    if (debug)
    {
        cout << nameMethod << " : Exit" << endl;
    }
}


Quaternion::~Quaternion
(
)
{
    const
    string   nameMethod = "Quaternion Dtor";
    
    
    if (debug)
    {
        cout << nameMethod << " : Enter" << endl;
    }
    
    if (debug)
    {
        cout << nameMethod << " : Exit" << endl;
    }    
}


/*
Quaternion
Quaternion::operator=
(
 const
 Quaternion & rhs
)
{
    const
    string       nameMethod = "Quaternion::operator=";
    
    Quaternion   result;


    cout << nameMethod << " : Enter" << endl;
    
    rhs.display("Quaternion rhs :");
    
    result.real   = rhs.real;
    result.imag_i = rhs.imag_i;
    result.imag_j = rhs.imag_j;
    result.imag_k = rhs.imag_k;
    
    rhs.display("Quaternion result :");
    
    cout << nameMethod << " : Exit" << endl;
    
    return result;
}
 */


Quaternion &
Quaternion::operator=
(
 const
 Quaternion & rhs
)
{
    const
    string   nameMethod = "Quaternion::operator=";
    

    if (debug)
    {
        cout << nameMethod << " : Enter" << endl;
    }
    
    if (this == & rhs)
    {
        return * this;
    }

    this->scalar = rhs.scalar;
    this->vector.i = rhs.vector.i;
    this->vector.j = rhs.vector.j;
    this->vector.k = rhs.vector.k;

    if (debug)
    {
        cout << nameMethod << " : Exit" << endl;
    }
    
    return(* this);
}


Quaternion
Quaternion::operator+
(
 const
 Quaternion & rhs
)
{
    Quaternion   result;
    
    
    result.scalar   = this->scalar   + rhs.scalar;
    result.vector.i = this->vector.i + rhs.vector.i;
    result.vector.j = this->vector.j + rhs.vector.j;
    result.vector.k = this->vector.k + rhs.vector.k;
    
    
    return result;
}


Quaternion
Quaternion::operator*
(
 const
 Quaternion & rhs
)
{
    Quaternion   result;
   
    
    /*
    i((this->scalar * rhs.vector.i) + (this->vector.i * rhs.scalar) + (this->vector.j * rhs.vector.k) - (this->vector.k * rhs.vector.j)) +
    j((this->scalar * rhs.vector.j) - (this->vector.i * rhs.vector.k) + (this->vector.j * rhs.scalar) + (this->vector.k * rhs.vector.i)) +
    k((this->scalar * rhs.vector.k) + (this->vector.i * rhs.vector.j) - (this->vector.j * rhs.vector.i) + (this->vector.k * rhs.scalar))
     */
    
    // Compute the real component of the result.
    
    result.scalar   = (this->scalar * rhs.scalar) - (this->vector.i * rhs.vector.i) - (this->vector.j * rhs.vector.j) - (this->vector.k * rhs.vector.k);
    
    // Compute the imaginary (i) component of the result.
    
    result.vector.i = (this->scalar * rhs.vector.i) + (this->vector.i * rhs.scalar) + (this->vector.j * rhs.vector.k) - (this->vector.k * rhs.vector.j);

    //                (this->scalar * rhs.vector.i) + (this->vector.i * rhs.scalar) + (this->vector.j * rhs.vector.k) - (this->vector.k * rhs.vector.j)
    
    // Compute the imaginary (j) component of the result.
    
    result.vector.j = (this->scalar * rhs.vector.j) - (this->vector.i * rhs.vector.k) + (this->vector.j * rhs.scalar) + (this->vector.k * rhs.vector.i);

    //                (this->scalar * rhs.vector.j) - (this->vector.i * rhs.vector.k) + (this->vector.j * rhs.scalar) + (this->vector.k * rhs.vector.i)    

    
    // Compute the imaginary (k) component of the result.
    
    result.vector.k = (this->scalar * rhs.vector.k) + (this->vector.i * rhs.vector.j) - (this->vector.j * rhs.vector.i) + (this->vector.k * rhs.scalar) ;
    
    //              (this->scalar * rhs.vector.k) + (this->vector.i * rhs.vector.j) - (this->vector.j * rhs.vector.i) + (this->vector.k * rhs.scalar)
    
    return result;
}


void
Quaternion::display
(
 const
 string   label
)
const
{
    cout << label << endl;
    cout << "\t" << "scalar = " << this->scalar << endl;
    cout << "\t" << "imag_i = " << this->vector.i << endl;
    cout << "\t" << "imag_j = " << this->vector.j << endl;
    cout << "\t" << "imag_k = " << this->vector.k << endl;
}


Quaternion
Quaternion::conjugate
(
)
{
    this->vector.i *= -1;
    this->vector.j *= -1;
    this->vector.k *= -1;
    
    return * this;
}


ostream &
operator<<
(
 ostream    & os,
 const
 Quaternion & q
)
{
    os << q.scalar;

    if (q.vector.i < 0)
    {
	os << " - i";
    }
    else
    {
	os << " + i";
    }

    os << abs(q.vector.i);

    if (q.vector.j < 0)
    {
	os << " - j";
    }
    else
    {
	os << " + j";
    }

    os << abs(q.vector.j);

    if (q.vector.k < 0)
    {
	os << " - k";
    }
    else
    {
	os << " + k";
    }
    
    os << abs(q.vector.k);


    return os;
}


void
Quaternion::zero
(
)
{
    if (abs(this->scalar) < threshold_zero)
    {
	this->scalar = 0;
    }
    if (abs(this->vector.i) < threshold_zero)
    {
	this->vector.i = 0;
    }
    if (abs(this->vector.j) < threshold_zero)
    {
	this->vector.j = 0;
    }
    if (abs(this->vector.k) < threshold_zero)
    {
	this->vector.k = 0;
    }
}


/*
 * Have the current quaternion rotate the vector which has been passed to it by
 * this function.
 */

Quaternion
Quaternion::rotate
(
 const
 Quaternion   vec
)
{
    Quaternion   q = vec,
                 result;
    
    
    if (vec.scalar == 0)
    {
        // Assuming that what has been passed to this function is a vector.
        //
        // This in turn leads us to assume that this object contains the
        // rotational quaternion.
        
        // throw runtime_error("Argument does not have a scalar component which is 0.");
        
        result = (* this) * (q * ::conjugate(* this));
    }
    else
    {
        // Assuming that what has been passed to this function is a quaternion.
        //
        // This in turn leads us to assume that this object contains the
        // vector which is to be rotated.
        
        result = q * ((* this) * ::conjugate(q));
    }
    
    
    return result;
}


/*
Quaternion
Quaternion::v2q4r
(
 const
 Quaternion   vec
)
{
    return this->passVectorToQuaternionForRotation(vec);
}
 */


Quaternion
conjugate
(
 Quaternion   q
)
{
    Quaternion   result;
    
    
    result = q;
    
    result.conjugate();
    
    
    return result;
}
