//Muhammed Ali Cheema
//Mike Zamansky
//CS135

#include <iostream>
using namespace std;

int main() {

    int num1;
    cout << "Enter a number"<<endl;
    cin >> num1;

    int num2;
    cout << "Enter a number" <<endl;
    cin >> num2;

    if (num1 < num2){
        cout << num1;
    }

    if(num2 < num1){
        cout << "The smaller number is " << num2;
    }

    return 0;
    

}