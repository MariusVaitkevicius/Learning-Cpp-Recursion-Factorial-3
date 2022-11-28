#include <iostream>
using namespace std;

/*
A sequence of positive real numbers is entered on the keyboard, with a negative number entered at the end.
Describe a recursive function SumTotal() with no parameters to find the sum of positive numbers. */

int SumTotal();

int main() {
	cout << "Enter the numbers in a row. A negative number means the end of input." << endl;
	cout << SumTotal() << endl;
    return 0;
}

int SumTotal() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num < 0) return 0;
       else return num + SumTotal();

}
