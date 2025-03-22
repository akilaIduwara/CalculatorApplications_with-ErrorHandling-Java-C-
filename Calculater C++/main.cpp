#include<iostream>
#include<iostream>
using namespace std;

int first =0;
int second =0;
int sw =0;


int Addition(int first, int second) {
    return first + second;
}
int Subtraction(int first, int second) {
    return first - second;
}
int Multiplication(int first, int second) {
    return first * second;
}
int Division(int first, int second) {
    return first / second;
}
int Modulus(int first ,int second) {
    return first % second;
}


int main(){

    cout<<"Welcome \n ";
    //Getiing input
    cout<<"Enter the first number: ";
    cin >> first;
    cout<<"Enter the second number: ";
    cin >> second;

    cout<<"01.Addition \n"
          "02.Subtraction \n"
          "03.Multiplication \n"
          "04.Division \n"
          "05.Modulus \n";

    cout<<"Enter the Number for Proceess \n";
    cin>>sw;

    switch(sw) {
        case 1: {
            cout<<"Addition = "<<Addition(first,second);
            break;
        }
        case 2: {
            cout<<"Subtraction = "<<Subtraction(first,second);
            break;
        }
        case 3: {
            cout<<"Multiplication = "<<Multiplication(first,second);
            break;
        }
        case 4: {
            cout<<"Division = "<<Division(first,second);
            break;
        }
        case 5: {
            cout<<"Modulus = "<<Modulus(first,second);
            break;
        }

    }
}

