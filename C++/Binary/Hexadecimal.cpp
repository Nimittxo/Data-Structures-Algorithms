#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        double a, b, c;
        cin >> a >> b >> c; 
        
        stringstream sa, sb, sc;
        sa << hex << (int)a; 
        sb << fixed << setprecision(2) << showpos << setw(15) << setfill('_') << b; // Format 'b'
        sc << scientific << uppercase << setprecision(9) << c; // Format 'c' in scientific notation
        
        // Print formatted numbers
        cout << sa.str() << endl;
        cout << sb.str() << endl;
        cout << sc.str() << endl;
    }
    
    return 0;
}
