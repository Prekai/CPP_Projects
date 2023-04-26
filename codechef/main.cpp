#include <iostream>
using namespace std;

//START01
//int main() {
//	int n {};
//	cin >> n;
//	cout <<  n << endl;
//	return 0;
//}

//GDTURN
//int main() {
//	// your code goes here
//	int  T {}, X {}, Y {};
//	cin >> T;
//	
//	for (;T>0;T--){
//        cin >> X >> Y;
//        if (X+Y >6){
//	        cout << "YES" << endl;
//        } else {
//	        cout << "NO" << endl;}
//    }
//	return 0;
//}

//FLOW001
//int main() {
//	// your code goes here
//	int X {0}, Y {0}, A {0}, T {0};
//	cin >> T;
//	for (; T>0; T--){
//	    cin >> X >> Y >> A;
//	    if (A>=X && A<Y){
//	        cout << "YES" << endl;
//	    }else{
//	        cout << "NO" << endl;}
//	}
//	return 0;
//}

//AGELIMIT
//int main() {
//	// your code goes here
//	int X {0}, Y {0}, A {0}, T {0};
//	cin >> T;
//	for (; T>0; T--){
//	    cin >> X >> Y >> A;
//	    if (A>=X && A<Y){
//	        cout << "YES" << endl;
//	    }else{
//	        cout << "NO" << endl;}
//	}
//	return 0;
//}

//Squats
//#include <iostream>
//using namespace std;
//
//int main() {
//	// your code goes here
//	int T {0}, X {0}, b {15};
//	
//	cin >> T;
//	
//	for (;0<T; --T) {
//	    cin >> X;
//	    cout << X*b << endl;
//	}
//	return 0;
//}


//squats solved by function
void squats ();
void sets ();

int main() {
	
    sets ();
    
	return 0;
}

    int X {0}, Y {0}, B {15};
    
    
    void squats () {
        cin >> Y;
        cout << Y*B << endl;
    }    
    
    void sets (){
        cin >> X;
        for (;0<X;--X){
            squats();
        }
    }
