#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cin >> A >> B;
    C = A%10;
    for(int iA=1; iA<10;iA++){
        //cout << C*iA << endl;
        if((C*iA)%10 == 0 || (C*iA)%10 == B){
            cout << iA << endl;
            break;
        }
    }
    return 0;
}
