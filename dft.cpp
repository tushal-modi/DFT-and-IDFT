#include<iostream>
#include<stdlib.h>
#include <math.h>
using namespace std;

class Dft{
public:
// Function to calculate
// discrete fourier transformation
void calculateDFT(int len)
{
    float xn[len];
    float Xr[len];
    float Xi[len];
    int i, k, n, N = 0;

    for (i = 0; i < len; i++)
    {
      cout<<"Enter the value of x["<<i<<"]=";
        cin>>xn[i];
    }

    cout<<"Enter the number of points in the DFT: ";
    cin>>N;
    for (k = 0; k < N; k++)
    {
        Xr[k] = 0;
        Xi[k] = 0;
        for (n = 0; n < len; n++)
        {
            Xr[k] = (Xr[k] + xn[n] * cos(2 * 3.141592 * k * n / N));
            Xi[k] = -(Xi[k] + xn[n] * sin(2 * 3.141592 * k * n / N));
        }

         cout.precision(4);
         if(Xi[k]>0)
         cout<<fixed<<Xr[k]<<"+"<<fixed<<Xi[k]<<"j"<<"\n";      
         else
         cout<<fixed<<Xr[k]<<fixed<<Xi[k]<<"j"<<"\n"; 
    }
}
};

int main()
{
    int len = 0;
    cout<<"Enter the length of the sequence: ";
    cin>>len;
    Dft o;
    o.calculateDFT(len);

    return 0;
}