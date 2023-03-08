#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secret_message {};
    string encrypted_secret_message {};
    
    cout << "Enter your secret message: ";
    getline(cin,secret_message);
    
    cout << "\nEncrypring message..." << endl;
    
//    cout << "\n\nEncrypted message: ";
//        for (size_t i {}; i<secret_message.size(); ++i)
//            cout << key.at(alphabet.find(secret_message.at(i)));
//        
//        for (size_t i {}; i<secret_message.size(); ++i)
//            encrypted_secret_message.push_back(key.at(alphabet.find(secret_message.at(i))));
//            
//    cout << "\n\nDecrypring message...";
//    
//    cout << "\n\nDecryprted message...";
//        for (size_t i {}; i<encrypted_secret_message.size(); ++i)
//            cout << alphabet.at(key.find(encrypted_secret_message.at(i)));   
    
//  Better solution, it can handle undefined characters  
    
    for (char c: secret_message){
        size_t position = alphabet.find(c);
        if(position != string::npos){
            char new_char {key.at(position)};
            encrypted_secret_message += new_char;
        }else{
            encrypted_secret_message += c;
        }
    }
    
    cout << "\nEncrypted message: " << encrypted_secret_message << endl;
    
    string decrypted_message {};
    cout << "\nDecrypting message..." << endl;
    
    for (char c: encrypted_secret_message){
        size_t position = key.find(c);
        if (position != string::npos){
            char  new_char{alphabet.at(position) };
            decrypted_message += new_char;
        } else {
            decrypted_message += c;
            }
        }
        cout << endl;
	return 0;
}
