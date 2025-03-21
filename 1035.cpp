#include <iostream>
using namespace std;
int main()
{
    int A, B, C, D;

    cin>>A>>B>>C>>D;

    if(A%2==0)
    {
        if(C>0 && D>0)
        {
            if(B>C && D>A)
            {
                if((C+D)>(A+B))
                {
                    cout<<"Valores aceitos"<<endl;
                }
                else
                {
                    cout<<"Valores nao aceitos"<<endl;
                }
            }
            else
            {
                cout<<"Valores nao aceitos"<<endl;
            }
        }
        else
        {
            cout<<"Valores nao aceitos"<<endl;
        }
    }
    else
    {
        cout<<"Valores nao aceitos"<<endl;
    }

    return 0;
}
