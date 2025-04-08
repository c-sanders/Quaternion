#include <QuaternionTest.hpp>


int
main
(
 int    argc,
 char * argv[]
)
{
    const
    string       nameMethod = "main";
    
    char         selection = 'x';

    // Quaternion   v;
    

    cout << nameMethod << " : Enter" << endl;
    
    try
    {
        if (argc != 5)
        {
            throw runtime_error("Incorrect number of arguments passed to function main.");
        }
        
        while 
        (
         (selection != '1') and 
         (selection != '2')
        )
        {
            cout << endl;
            cout << "What do you want to do?" << endl;
            cout << endl;
            cout << "  1) Quaternion multiplications" << endl;
            cout << "  2) Quaternion rotations" << endl;
            cout << endl;
            cout << "Press 1 or 2 ...> ";

            cin >> selection;
            
            if 
            (
             (selection != '1') and 
             (selection != '2')
            )
            {
                cout << endl;
                cout << "You have selected an invalid option." << endl;
                cout << endl;
            }
        }
        
        if (selection == '1')
        {
            quaternionMultiplicationTest();
        }
        else
        {
            quaternionRotationTest(argv);
        }
    }
    catch (runtime_error & e)
    {
        displayUsage();
    }
    
    cout << nameMethod << " : Exit" << endl;
    
    
    return 0;
}