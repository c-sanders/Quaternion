#include <TestRoutines.hpp>


/*
Quaternion
conjugate
(
 Quaternion   q
);


double
degreesToRadians
(
 double   angleDegrees
);


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
 */


void
displayUsage
(
)
{
	cout << endl;
	cout << "Usage :" << endl;
	cout << endl;
	cout << "  quaternionTest angle x y z" << endl;
	cout << endl;
	cout << "where;" << endl;
	cout << endl;
	cout << "  angle : The angle in degrees which the vector should be rotated by. " << endl;
        cout << "  x     : The x component of the vector which is to be rotated." << endl;
        cout << "  y     : The y component of the vector which is to be rotated." << endl;
        cout << "  z     : The z component of the vector which is to be rotated." << endl;
	cout << endl;


	return;
}


int
quaternionMultiplicationTest
(
)
{
    Quaternion   q1(1,2,3,4),
                 q2(5,6,7,8),
                 q3,
                 q4,
                 q5,
                 q6;
    
    
    try
    {    
        cout << "########################################" << endl;
            
        q1.display("Quaternion q1 :");
    
        q3 = q1;
    
        q3.display("Quaternion q3 :");
    
        cout << "########################################" << endl;
    
        q4 = conjugate(q3);
    
        q4.display("Quaternion q4 :");
    
        cout << "########################################" << endl;
    
        q5 = q1 * q2;

        q5.display("Quaternion q5 :");
    
        cout << "########################################" << endl;
    }
    catch (runtime_error & e)
    {
        displayUsage();
    }    
    
    
    return 0;
}


int
quaternionRotationTest
(
 char * argv[]
)
{
    const
    string       nameMethod = "quaternionRotationTest";
    
    double       angleRadians;
    
    Quaternion   v,
                 q_x,
                 q_x_conjugate,
                 q_y,
                 q_y_conjugate,
                 q_z,
                 q_z_conjugate,
                 result_x,
                 result_xz,
                 result_z,
                 result_zx;
    
    
    cout << nameMethod << " : Enter" << endl;
        
    angleRadians = degreesToRadians(stod(* (new string(argv[1]))));	

    cout << "Angle (in degrees) = " << argv[1] << endl;
    cout << "Angle (in radians) = " << angleRadians << endl;
        
    v.scalar = 0;
    v.vector.i = stod(* (new string(argv[2])));
    v.vector.j = stod(* (new string(argv[3])));
    v.vector.k = stod(* (new string(argv[4])));

    // Quaternion for rotating around the x-axis.  
    
    q_x.scalar = cos(angleRadians/2.0);
    q_x.vector.i = sin(angleRadians/2.0);
    q_x.vector.j = 0;
    q_x.vector.k = 0;

    q_x_conjugate = conjugate(q_x);

    cout << "Quaternion q_x           = " << q_x           << endl;
    cout << "Quaternion q_x_conjugate = " << q_x_conjugate << endl;
    cout << "Vector v                 = " << v             << endl;
    
    // Quaternion for rotating around the y-axis.  
    
    q_y.scalar = cos(angleRadians/2.0);
    q_y.vector.i = 0;
    q_y.vector.j = sin(angleRadians/2.0);
    q_y.vector.k = 0;
    
    q_y_conjugate = conjugate(q_y);
    
    cout << "Quaternion q_y           = " << q_y           << endl;
    cout << "Quaternion q_y_conjugate = " << q_y_conjugate << endl;
    cout << "Vector v                 = " << v             << endl;
    
    // Quaternion for rotating around the z-axis.  
    
    q_z.scalar = cos(angleRadians/2.0);
    q_z.vector.i = 0;
    q_z.vector.j = 0;
    q_z.vector.k = sin(angleRadians/2.0);
    
    q_z_conjugate = conjugate(q_z);
    
    cout << "Quaternion q_z           = " << q_z           << endl;
    cout << "Quaternion q_z_conjugate = " << q_z_conjugate << endl;
    cout << "Vector v                 = " << v             << endl;
    
    {
        result_x  = q_x.rotate(v);
        result_xz = q_z.rotate(q_x.rotate(v));
        
        result_x.zero();
        result_xz.zero();
    
        cout << "Quaternion result_x        = " << result_x << endl;
        cout << "Quaternion result_xz       = " << result_xz << endl;
    }
    
    {
        result_z  = q_z.rotate(v);
        result_zx = q_x.rotate(q_z.rotate(v));
        
        result_z.zero();
        result_zx.zero();
    
        cout << "Quaternion result_z        = " << result_z << endl;
        cout << "Quaternion result_zx       = " << result_zx << endl;
    }

    cout << "########################################" << endl;	

    cout << nameMethod << " : Enter" << endl;
    
    
    return 0;
}
