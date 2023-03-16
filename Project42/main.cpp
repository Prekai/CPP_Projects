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
//        cout << i*2-1 << "\n";    
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


//    //  inverted rows with *
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
    
//    // inverted rows count downward by colums
//    int rows {};
//    cout << "enter number of rows: ";
//    cin >> rows;
//    
//    for(int i {rows}; i>0; --i){
//        for(int j {i}; j>0; --j){
//            cout << j << " ";
//        }
//        cout << endl;    
//    }    
    
//    //inverted rows, count downward every rows
//    int rows {};
//    cout << "enter number of rows: ";
//    cin >> rows;
//    
//    for(int i {rows}; i>0; --i){
//        for(int j {i}; j>0; --j){
//            cout << i << " ";
//        }
//        cout << endl;    
//    }

//    //decreasing colums
//    int rows {};
//    cout << "enter number of rows: ";
//    cin >> rows;
//    
//    for(int i {rows}; 0<i; --i){
//        for(int j {1}; j<=i; ++j){
//            cout << j << " ";
//        }
//        cout << endl;    
//    }


//    // pyramid with *
//    int rows {};
//    cout << "enter number of rows: ";
//    cin >> rows;
//
//
//    for(int k{1}, i {rows}; 0<i; --i, ++k){
//        for(int j {1}; j<=i; ++j){
//            cout << "  ";
//        }
//        
//        for(int n {0}; n<(k*2-1);++n){
//            cout << "* ";}
//            cout << endl;
//    }

//    // pyramid with * different approach, better solution and last row didn't start with a space
//    int space {0}, rows{0};
//    cout << "Enter number of rows: ";
//    cin >> rows;
//    
//    for(int i {1}, k {0}; i <=rows; ++i, k=0){
//        for(space = 1; space <=rows-i; ++space){
//            cout << "  ";
//        }
//    
//        while(k != 2*i-1) {
//            cout << "* ";
//            ++k;
//        }
//        cout << endl;
//    }


    //number pyramid
    //        1
    //      2 3 2
    //    3 4 5 4 3
    //  4 5 6 7 6 5 4
    //5 6 7 8 9 8 7 6 5
    
    


	cout << endl;
	return 0;
}
