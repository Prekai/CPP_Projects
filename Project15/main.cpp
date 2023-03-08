/* 
    + addition
    - subtraction
    * multiplication
    / division
    % modulo or remainde (works only with intigers other operators overloded to work with muliple types such as int, double. etc.)
*/    

#include <iostream>

using namespace std;

int main()
{
    int num1 {200};
    int num2 {100};
    int result {0};
    
    cout << num1    << " + " << num2 << " = " << result << endl;
    
    result=num1+num2;
    cout << num1    << " + " << num2 << " = " << result << endl;
	
    result=num1-num2;
    cout << num1    << " - " << num2 << " = " << result << endl;
    
    result=num1*num2;
    cout << num1    << " * " << num2 << " = " << result << endl;
    
    result=num1/num2;
    cout << num1    << " / " << num2 << " = " << result << endl;
    
    result=num2/num1; 
    cout << num2    << " / " << num1 << " = " << result << endl;
    
    result=num1%num2;
    cout << num1    << " % " << num2 << " = " << result << endl;
    
    num1=10;
    num2=3;
    
    result=num1%num2;
    cout << num1    << " % " << num2 << " = " << result << endl;
    
    result=num1*10+num2;
    
    cout << 5/10 << endl;
    cout << 5.0/10.0 << endl; 
    
    return 0;
}   
