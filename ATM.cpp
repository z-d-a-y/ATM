#include <iostream>
#include <string>
using namespace std;

class bank{
    public:
    int useram;
    int balancs;
    string name;
    void add(int x, int y){
        balancs += (x * y);
    }
    void remove(int x, int y){
        balancs -= (x * y);
    }
    void print(){
        cout << "User: " << name << endl << "balancs: " << balancs << "$" << endl; 
    }
};

int main() {
    int useram;
    int userdem;
    char userinput = 'a';
    bank Account1;
    Account1.name = "walter white";
    Account1.balancs = 871904231;
    Account1.print();
    bank account1bef;
    account1bef.name = "walter white";
    account1bef.balancs = 871904231;

    cout << "Enter (a) to add or (r) to witdraw: " << endl;
    cin >> userinput;
    do{
        if (userinput == 'a' || userinput == 'r'){
            break;
        }
        else
            {printf("Error, make sure you enter lower case.\n");
            cout << "Enter (a) to add or (r) to witdraw: " << endl;
            cin >> userinput;
            }


    }
    while (userinput != 'a' || userinput != 'r');
    
    if (userinput == 'a'){
        cout << "Denominations available: " << endl << "| 1 |> 5$" << endl << "| 2 |> 50$" << endl << "| 3 |> 100$" << endl << "| 4 |> 200$" << endl << "Enter: ";
        cin >> userdem;
        do{
            if (userdem == 1 && userdem == 2 && userdem == 3 && userdem == 4){
                break;
            }
            else if (userdem != 1 && userdem != 2 && userdem != 3 && userdem != 4){
                printf("Error, try again.\n");
                cout << "Denominations available: " << endl << "| 1 |> 5$" << endl << "| 2 |> 50$" << endl << "| 3 |> 100$" << endl << "| 4 |> 200$" << endl << "Enter: ";
                cin >> userdem;
            }
        }
        while(userdem != 1 && userdem != 2 && userdem != 3 && userdem != 4);
        cout << endl << "> Min 1" << endl <<  "> Max 20" << endl << "How many: ";
        cin >> useram;
        do{
            if (useram == 1 && useram == 2 && useram == 3 && useram == 4 && useram == 5 && useram == 6 && useram == 7 && useram == 8
                && useram == 9 && useram == 10 && useram == 11 && useram == 12 && useram == 13 && useram == 14 && useram == 15 && useram == 16
                && useram == 17 && useram == 18 && useram == 19 && useram == 20){
                break;
            }
            else if (useram != 1 && useram != 2 && useram != 3 && useram != 4 && useram != 5 && useram != 6 && useram != 7 && useram != 8
                && useram != 9 && useram != 10 && useram != 11 && useram != 12 && useram != 13 && useram != 14 && useram != 15 && useram != 16
                && useram != 17 && useram != 18 && useram != 19 && useram != 20){
                printf("Error, try again.\n");
                cout << endl << "> Min 1" << endl <<  "> Max 20" << endl << "How many: ";
                cin >> useram;
            }
        }
        while(useram != 1 && useram != 2 && useram != 3 && useram != 4 && useram != 5 && useram != 6 && useram != 7 && useram != 8
            && useram != 9 && useram != 10 && useram != 11 && useram != 12 && useram != 13 && useram != 14 && useram != 15 && useram != 16
            && useram != 17 && useram != 18 && useram != 19 && useram != 20);
        if (userdem == 1){
            int userdem = 5;
            Account1.add(userdem, useram);
        } 
        else if (userdem == 2){
            int userdem = 50;
            Account1.add(userdem, useram);
        } 
        else if (userdem == 3){
            int userdem = 100;
            Account1.add(userdem, useram);
        } 
        else if (userdem == 4){
            int userdem = 200;
            Account1.add(userdem, useram);
        }    
        cout << "--------"<< endl; account1bef.print(); cout << "--------" << endl << "   | v" << endl << "To | v" << endl << "   | v" << endl  << "_______" << endl ; Account1.print(); cout << "_______";
    }
    else if (userinput == 'r'){
        cout << "Denominations available: " << endl << "| 1 |> 5$" << endl << "| 2 |> 50$" << endl << "| 3 |> 100$" << endl << "| 4 |> 200$" << endl << "Enter: ";
        cin >> userdem;
        do{
            if (userdem == 1 && userdem == 2 && userdem == 3 && userdem == 4){
                break;
            }
            else if (userdem != 1 && userdem != 2 && userdem != 3 && userdem != 4){
                printf("Error, try again.\n");
                cout << "Denominations available: " << endl << "| 1 |> 5$" << endl << "| 2 |> 50$" << endl << "| 3 |> 100$" << endl << "| 4 |> 200$" << endl << "Enter: ";
                cin >> userdem;
            }
        }
        while(userdem != 1 && userdem != 2 && userdem != 3 && userdem != 4);
        cout << endl << "> Min 1" << endl <<  "> Max 20" << endl << "How many: ";
        cin >> useram;
        do{
            if (useram == 1 && useram == 2 && useram == 3 && useram == 4 && useram == 5 && useram == 6 && useram == 7 && useram == 8
                && useram == 9 && useram == 10 && useram == 11 && useram == 12 && useram == 13 && useram == 14 && useram == 15 && useram == 16
                && useram == 17 && useram == 18 && useram == 19 && useram == 20){
                break;
            }
            else if (useram != 1 && useram != 2 && useram != 3 && useram != 4 && useram != 5 && useram != 6 && useram != 7 && useram != 8
                && useram != 9 && useram != 10 && useram != 11 && useram != 12 && useram != 13 && useram != 14 && useram != 15 && useram != 16
                && useram != 17 && useram != 18 && useram != 19 && useram != 20){
                printf("Error, try again.\n");
                cout << endl << "> Min 1" << endl <<  "> Max 20" << endl << "How many: ";
                cin >> useram;
            }
        }
        while(useram != 1 && useram != 2 && useram != 3 && useram != 4 && useram != 5 && useram != 6 && useram != 7 && useram != 8
            && useram != 9 && useram != 10 && useram != 11 && useram != 12 && useram != 13 && useram != 14 && useram != 15 && useram != 16
            && useram != 17 && useram != 18 && useram != 19 && useram != 20);
    
        if (userdem == 1){
            int userdem = 5;
            Account1.remove(userdem, useram);
        } 
        else if (userdem == 2){
            int userdem = 50;
            Account1.remove(userdem, useram);
        } 
        else if (userdem == 3){
            int userdem = 100;
            Account1.remove(userdem, useram);
        } 
        else if (userdem == 4){
            int userdem = 200;
            Account1.remove(userdem, useram);
        }    
        cout << "_______"<< endl; account1bef.print(); cout << "_______" << endl << "   | v" << endl << "To | v" << endl << "   | v" << endl  << "--------" << endl ; Account1.print(); cout << "--------";
    }
    return 0;
}
