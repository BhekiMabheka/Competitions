
#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    // Chicken burger variables
    const int chicken_burger_pick = 1;
    const double chicken_burger = 35.00;

    // Beef Burger variables
    const int beef_burger_pick = 2;
    const double beef_burger = 40.00;

    // Vegan Burger
    const int vegan_burger_pick = 2;
    const double vegan_burger = 45.00;


    int pick,num_of_items;
    //double total_cost = 0.0;
  
    cout << "__________MENU_____________\n";
	cout << 1 << " Chicken Burger:"<< "R35" << endl ;
	cout << 2 << " Beef Burger   :"<< "R40" << endl ;
	cout << 3 << " Vegan Burger  :"<< "R45" << endl ;
	cout << 0 << " End Order " ;
    cout <<"\n___________________________\n\n";

    cout<<"Enter a number to pick the above menu: "<<endl;
    cin >> pick;

    cout<<"How many do you want?: "<<endl;
    cin >> num_of_items;
    
    // Calculations for Chicken Burger
    if(pick == 1){

        cout<<"\nYou picked Chicken Burger\n";
        cout<<"Total cost = "<<"R"<<(chicken_burger * num_of_items)<<endl;
        cout<<"Your order will be delivered soon, have a lovely day!"<<endl;
    }
    // Calculations for Beef Burger
    if(pick == 2){

        cout<<"\nYou picked Beef Burger\n";
        cout<<"Total cost = "<<"R"<<(beef_burger * num_of_items)<<endl;
        cout<<"Your order will be delivered soon, have a lovely day!"<<endl;
    }
    // Calculations for Vegan Burger
    if(pick == 3){

        cout<<"\nYou picked Vegan Burger\n";
        cout<<"Total cost = "<<"R"<<(vegan_burger * num_of_items)<<endl;
        cout<<"Your order will be delivered soon, have a lovely day!"<<endl;
    }

        return 0;
    
}

	
