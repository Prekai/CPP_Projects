#include <iostream>
using namespace std;

int main()
{
	int amount_of_cents;
    cout << "Enter an amount in cents: ";
    cin >> amount_of_cents;
    cout << "You can provide change for this change as follows:" << endl;
    
    int dollar;
    dollar=amount_of_cents/100;
    cout << "dollars  :"<< dollar << endl;
    int quarter;
    quarter=amount_of_cents%100/25;
    cout << "quarters :"<< quarter << endl;
    int dime;
    dime=amount_of_cents%100%25/10;
    cout << "dimes    :"<< dime << endl;
    int nickel;
    nickel=amount_of_cents%100%25%10/5;
    cout << "nickels  :"<< nickel << endl;
    int penny;
    penny=amount_of_cents%100%25%10%5/1;
    cout << "pennies  :"<< penny;
    

/* Better solution
    * const int dolla_value {100};
    * const int quarter_value {25};
    * const int dime_value {10};
    * const int nickel_value {5};
    * 
    * int change_amount {};
    * 
    * cout << "Enter an amount in cents: ";
    * cin >> change_amount;
    * 
    * int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    * 
    * dollars=change_amount/dollar_value;
    * balance=change_amount%dollar_value;
    * 
    * quarters=balance/quarter_value;
    * balance%=quarter_value;
    * 
    * dimes=balance/dime_value;
    * balance%=dime_value;
    * 
    * nickels=balance/nickel_value;
    * balance%=nickel_value;
    * 
    * pennies=balance;
    * cout << "You can provide change for this change as follows:" << endl;
    * cout << "dollars  :"<< dollars << endl;
    * cout << "quarters :"<< quarters << endl;
    * cout << "dimes    :"<< dimes << endl;
    * cout << "nickels  :"<< nickels << endl;
    * cout << "pennies  :"<< pennies;
 
*/
    
	return 0;
}
