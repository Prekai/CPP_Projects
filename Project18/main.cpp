#include <iostream>

using namespace std;

int main()
{
	int total{};
    int num1{}, num2{}, num3{};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double avarage {0.0};
    
    avarage = static_cast<double>(total)/count;
    // avarage = (double)total/count; old version no double check
    
    cout << "The 3 numbers were: "<< num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The avarage of the numbers is: " << avarage << endl;
	return 0;
}
