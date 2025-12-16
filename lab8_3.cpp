/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int A;
    double B;
    double H;
    cout << "Enter your age: ";
    cin >> A;
        if (A <= 25 ){
            cout <<  "Enter your height: ";   
            cin >> H;   
                if (H < 100){
                    cout << "Your character = Chopper";
                    }else if (H < 180){
                        cout << "Your character = Usopp";
                        }else{
                            cout << "Enter your bounty: ";
                            cin >> B;
                            if (B <= 1100000000){
                            cout << "Your character = Sanji";
                            }
                                else{
                                cout << "Your character = Zoro";
                                }
            }
        }
                 else if (A > 25 and A <= 60){
                    cout << "Enter your bounty: ";
                    cin >> B;
                        if (B <= 500000000){
                            cout << "Your character = Franky";
                            }
                            else {
                                cout << "Your character = Jinbe";
                                }
                    }
                    else if (A > 60) {
                        cout << "Your character = Brook";
                        }
    
    
}
