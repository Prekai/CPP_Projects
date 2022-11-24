#include <iostream>

using namespace std;


int main ()
{
//    int age;
//    
//    cout << age << endl;
//    without initialization the age will be a stored number in the memory cell
    
    cout << "Enter the width of the room ";
    int room_width {0};    
    cin >> room_width;
    
    cout << "Enter the lenngth of the room ";    
    int room_length {0};
    cin >> room_length;
    
    cout << "The area of the room is " << room_width*room_length << " square feet" << endl;   
    
    return 0;
}    