#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double A, B, C;
    cin>>A>>B>>C;

    double R1 = (-B+sqrt(B*B-4*A*C))/(2*A);

    double R2 = (-B-sqrt(B*B-4*A*C))/(2*A);

    if(A!=0 && sqrt(B*B-4*A*C)>=0)
    {
        cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl;
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}
