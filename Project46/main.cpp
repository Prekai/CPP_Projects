#include <iostream>

using namespace std;

void param_test (int formal);

int main () {
   int actual {50};
   cout << actual << endl;     //50
   param_test(actual);         //pass in 50 to param_test
   cout << actual << endl;     //50 - did not change
   return 0;
}


void param_test (int formal) { // formal is a copy of actual
   cout << formal << endl;     // 50
   formal = 100;
   cout << formal << endl;     //100
}
