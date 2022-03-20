#include <iostream>
#include<stdlib.h>
#include <math.h>
using namespace std;

class Idft{

public:
// Function to calculate the inverse
// discrete fourier transformation
void calculate_IDFT(int len)
{
	float x[len];
	float Xr[len];
	float Xi[len];
	int i, k, n, N = 0;
	for (i = 0; i < len; i++) {
		cout<<"Enter the real and imaginary bits of X("<<i<<")=";
		cin>>Xr[i]>>Xi[i];
	}

	cout<<"Enter the number of points in the IDFT: ";
	cin>>N;

	for (n = 0; n < N; n++) {
		x[n] = 0;
		for (k = 0; k < N; k++) {
			x[n] = x[n] + (Xr[k] * cos((2 * 3.141592 * k * n) / N))-( Xi[k] * sin((2 * 3.141592 * k * n) / N));
              
		}
		cout.precision(4);
		x[n] = x[n] / N;
		
        cout<<endl<<"x["<<n<<"]="<<fixed<<x[n];    
	}

}
};

int main()
{
	int len = 0;
	cout<<"Enter the length of the sequence: ";
	cin>>len;
    Idft o;
	o.calculate_IDFT(len);

	return 0;
}
