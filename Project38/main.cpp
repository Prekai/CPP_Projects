#include <iostream>
#include <string>

using namespace std;

int main()
{
	char txt [6] {"Frank"};
    cout << txt;
    char text [8] {"Frank\0y"};
    cout << text;
    char rtz [8];
    cout << rtz;
    char fine [9];
    cout << fine;
	return 0;
}
