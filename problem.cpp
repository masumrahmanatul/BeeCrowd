#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float input;
    cin>>fixed>>setprecision(2)>>input;

    input = input*100;

    int integerN = input;

    int note_100,note_50,note_20,note_10,note_5,note_2,coin_1,
    coin_05,coin_025,coin_010,coin_005,coin_001,remainder;

    note_100 = integerN/(100*100);
    remainder = integerN%(100*100);
    note_50 = remainder/(50*100);
    remainder = remainder%(50*100);
    note_20 = remainder/(20*100);
    remainder = remainder%(20*100);
    note_10 = remainder/(10*100);
    remainder = remainder%(10*100);
    note_5 = remainder/(5*100);
    remainder = remainder%(5*100);
    note_2 = remainder/(2*100);
    remainder = remainder%200;
    coin_1 = remainder/(1*100);
    remainder = remainder%(1*100);
    coin_05 = remainder/50;
    remainder = remainder%50;
    coin_025 = remainder/25;
    remainder = remainder%25;
    coin_010 = remainder/10;
    remainder = remainder%10;
    coin_005 = remainder/5;
    remainder = remainder%5;
    coin_001 = remainder/1;

    cout<<"NOTAS:"<<endl;
    cout<<note_100<<" nota(s) de R$ 100.00"<<endl;
    cout<<note_50<<" nota(s) de R$ 50.00"<<endl;
    cout<<note_20<<" nota(s) de R$ 20.00"<<endl;
    cout<<note_10<<" nota(s) de R$ 10.00"<<endl;
    cout<<note_5<<" nota(s) de R$ 5.00"<<endl;
    cout<<note_2<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<coin_1<<" moeda(s) de R$ 1.00"<<endl;
    cout<<coin_05<<" moeda(s) de R$ 0.50"<<endl;
    cout<<coin_025<<" moeda(s) de R$ 0.25"<<endl;
    cout<<coin_010<<" moeda(s) de R$ 0.10"<<endl;
    cout<<coin_005<<" moeda(s) de R$ 0.05"<<endl;
    cout<<coin_001<<" moeda(s) de R$ 0.01"<<endl;

}
