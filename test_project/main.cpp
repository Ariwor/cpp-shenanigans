#include <iostream>
using namespace std;

int main() {
    int x,y;
    
    cin >> x;
    cin >> y;
    
    if (x > y)
        cout << "x is greater than y\n";
    else if (y > x)
        cout << "y if greater than x\n";
    else
        cout << "x and y are equal\n";

    return 0;
}

