#include <iostream>
#include <vector>


using namespace std;


int
main
(
 void
)
{
    // Create a vector of doubles, which is comprised of three values of 0.
    
    vector<double>             vec(3, 0);
    
    vector<double>::iterator   iter;
    
    int                        index = 0;
    

    // Add some additional values into the vector.
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    
    vec.insert(vec.begin(), 0);
    vec.insert(vec.end(),   4);
    
    vec.erase(vec.end() - 4);
    
    vec.assign(vec.begin(), vec.end());
    // vec.swap(vec.begin(), vec.end());
    
    vec.clear();
    
    // Display some diagnostics about the vector.
    //
    // Display the values in the vector.
    
    cout << "Number of elements in vector = " << vec.size() << endl;
    
    iter = vec.begin();
    
    while (iter != vec.end())
    {
        cout << "vec[" << index << "] = " << vec.at(index) << endl;
    
        ++iter;
        ++index;
    }
    
    cout << "First value in vector = " << vec.front() << endl;
    cout << "Last value in vector = "  << vec.back() << endl;
    
    cout << "Data in vector = " << vec.data() << endl;
    
    cout << "Data in vector = " << ((double *)(vec.data()))[2] << endl;
    
        
    return 0;
}