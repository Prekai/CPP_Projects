#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec {1 ,2 ,3};
    int result {0};
    
//    if (vec.size() <= 1){
//    result = 0;
//    } else {
//        for (int i {0}; vec.size()!=i;++i){
//            for ( int j {1}; vec.size ()!=j;++j){ 
//            cout << vec.at(i) << " * " << vec.at(j) << " = " << vec.at(i)*vec.at(j) << endl;
//            result +=vec.at(i)*vec.at(j);
//            }
//        }
//    }
//     
//    cout << result;

 for (int i=0; i< vec.size(); ++i)
       for (int j=i+1; j< vec.size(); ++j) 
            result = result + vec.at(i) * vec.at(j);

    
	cout << endl;
	return 0;
}
