#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    
    char choice {};
    vector <int> vec {};
    do {
        cout << "\nP - Print numbers"  << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        cout << endl;
        
        if (choice == 'P' || choice == 'p'){
            if (vec.size()>0) {
                cout << "[ ";
                for (size_t i {}; vec.size()!=i;++i){
                    cout <<vec.at(i) <<" ";
                    }
                cout<< "]" <<endl;
            } else {
            cout << "[] - the list is empty" << endl;
            }
        }else if (choice == 'A' || choice == 'a'){
            int vector_add {};
            cout << "Enter an integer to add to the list: ";
            cin >> vector_add;
            vec.push_back(vector_add);
            cout << vector_add << " added" << endl;
            }
            
            
        else if (choice == 'M' || choice == 'm')
             if (vec.size()>0) {
                 double sum_of_vec {};
                 for (size_t i {}; vec.size()!=i;++i){                    
                 sum_of_vec +=vec.at(i);
                    }
                cout << "The mean is: " << sum_of_vec/vec.size();
            } else {
            cout << "Unable to calculate the mean - no data" << endl;
            }
        else if (choice == 'S' || choice == 's')
             if (vec.size()>0) {
                auto result = min_element(vec.begin(), vec.end());
                if (vec.end()!=result)
                    cout << "The smallest number is: " << *result;
            } else {
            cout << "Unable to determine the smallest number - list is empty" << endl;
            }
        else if (choice == 'L' || choice == 'l')
            if (vec.size()>0) {
                auto result = max_element(vec.begin(), vec.end());
                if (vec.end()!=result)
                    cout << "The largest number is: " << *result;
            } else {
            cout << "Unable to determine the largest number - list is empty" << endl;
            }
        else if (choice == 'Q' || choice == 'q')
            cout << "Good bye!";
        else 
            cout << "invalid character" << endl;
    } while (choice != 'Q' && choice != 'q');

    
    cout << endl;
	return 0;
}
