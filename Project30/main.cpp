#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
//	int scores[] {10,20,30};
    
//    for (int scores:scores)
//        cout << scores << endl;
    
//    for (auto scores:scores)
//        cout << scores << endl;
    
//    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
//    double avarage_temp {};
//    double total {};
     
//    for (auto temp:temperatures)
//        total+=temp;
//    if(temperatures.size()!=0)
//        avarage_temp=total/temperatures.size();
    
//    cout << fixed << setprecision(1);     
//    cout << "Avarage temperature is " << avarage_temp << endl;
    
//    for (auto val:{1,2,3,4,5})
//        cout << val << endl;
  
//    for (auto c: "This is a test")
//        if (c!=' ')
//            cout << c;

     for (auto c: "This is a test")
        if (c == ' ')
           cout << "\t";
        else
           cout << c;

  
    cout << endl;
	return 0;
}
