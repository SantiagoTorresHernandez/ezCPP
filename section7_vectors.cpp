
#include <vector>
#include <iostream>

using namespace std;

int main(){

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "The elements in vector1 are: " 
    << vector1.at(0) << ", " 
    << vector1.at(1) << endl;
    cout << "The size of vector 1 is: " 
    << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "The elements in vector1 are: " 
    << vector2.at(0) << ", " 
    << vector2.at(1) << endl;
    cout << "The size of vector 1 is: " 
    << vector2.size() << endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Elements of the 2D vector: " << endl
    << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl
    << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    // vector_2d.push_back(vector1);
    // vector_2d.push_back(vector2);

    cout << "Elements of the 2D vector: " << endl
    << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl
    << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "The elements in vector1 are: " << vector1.at(0)
    << ", " << vector1.at(1) << endl;

    return 0;
}