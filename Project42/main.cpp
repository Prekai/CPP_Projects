//Create a letter pyramid, what is based in input
//
//   A
//  ABA
// ABCBA
//ABCDCBA

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    
//    cout << "I will make you a letter pyramid, please enter your characters: ";
//    
//    string letter_pyramid {};
//    string space = "space";
//    size_t i {};
//    
//    getline(cin, letter_pyramid);
//    
//    for (; i<letter_pyramid.size(); ++i)
//        if (i >=0)
//            cout << i*space;
//            cout << i;
//            
//    for (auto c:letter_pyramid)
//        cout << c << endl;
//    


//*********************************************************************************************************************************************
// ********************************************************************************************************************************************
// faild to create letter piramid based on the requiremnt, no problem I try to solve different puzzles and I will get back to the original project



//    int rows {};
//    cout << "enter rows: ";
//    cin >> rows;
//    
//    for (int i {1}; i<=rows; ++i){
//        for (int j {1}; j<=i; ++j){
//            cout << "* ";
//        }
//        cout << "\n";    
//    }
    
    
//    int numbers {};
//    cout << "enter a number: ";
//    cin >> numbers;
//    
//    for (int i {1}; i<=numbers; ++i){
//        for (int j {1}; j<=i; ++j){
//            cout << j << " ";
//        }
//        cout << "\n";
//    }
    
//    char input, alphabet = 'A';
//    cout << "enter a character";
//    cin >> input;
//    
//    input = toupper(input);
//    
//    
//    for(int i = 1; i <= (input-'A'+1); ++i) {
//        for(int j = 1; j <= i; ++j) {
//            cout << alphabet << " ";
//        }
//        ++alphabet;
//
//        cout << endl;
//    }


////  inverted rows
//    int rows {};
//    cout << "enter number of rows: ";
//    cin >> rows;
//    
//    for(int i {rows}; i>0; --i){
//        for(int j {i}; j>0; --j){
//            cout << "* ";
//        }
//        cout << endl;    
//    }
//   


    //  inverted rows
    int rows {};
    cout << "enter number of rows: ";
    cin >> rows;
    
    for(int i {rows}; i>0; --i){
        for(int j {i}; j>0; --j){
            cout << j << " ";
        }
        cout << endl;    
    }
    
    
    
    
	cout << endl;
	return 0;
}
