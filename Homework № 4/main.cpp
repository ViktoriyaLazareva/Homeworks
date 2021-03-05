#include <iostream>

using namespace std;

int main()
{
//Task 1
    int x, y, sum;
        cout << "Input numbers\n";
        cin >> x >> y;
    sum = x + y;
    if(sum >= 10 && sum <= 20) {
        cout << "true\n";
    }
        else {
        cout << "false\n";
    }
//-------------------------------

// Task 2

    int n = 0;
    int id = 0;//divisors counter
    cout << "Input number\n";
    cin >> n;
        for(int i = 1; i <= n; i++ ) {
        if(n % i == 0)  {
        id++;
    }
    }
        if(id > 2) {
        cout << "Composite number\n";
    }
        else {
        cout << "Prime natural number\n";
    }
//--------------------------------------

// Task 3

    const int a = 2;
    const int b = 8;
        if(a ==10 && b == 10 || a + b ==10) {
        cout << "true\n";
    }
        else {
        cout << "false\n";
    }
//-----------------------------------------

// Task 4
    int year = 0;
    cout << "Input year\n";
    cin >> year;

        if(year % 400 == 0) {
        cout << "leap year";
    }
        else if(year % 100 == 0) {
        cout << "not leap year";
    }
        else if(year % 4 == 0){
        cout << "leap year";
    }
        else {
        cout << "not leap year";
    }
        return 0;
}
