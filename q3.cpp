#include <iostream>
#include <cstring>
#include <cmath>
#include <utility>

using namespace std;

#include <iostream>
using namespace std;



class Complex {
public:
    double real, imag;

    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
        // cout << "Constructor created" << endl;
    }

    Complex add(Complex val) {
        double new_real = real+val.real;
        double new_imag = imag+val.imag;
        Complex new_complex(new_real, new_imag);
        return new_complex;
    }

    Complex subtract(Complex val) {
        double new_real = real-val.real;
        double new_imag = imag-val.imag;
        Complex new_complex(new_real, new_imag);
        return new_complex;
    }

    Complex multiply(Complex val) {
        double new_real = real*val.real-imag*val.imag;
        double new_imag = real*val.imag + imag*val.real;
        Complex new_complex(new_real, new_imag);
        return new_complex;
    }

    Complex add(double val) {
        double new_real = real + val;
        double new_imag = imag;
        Complex new_complex(new_real, new_imag);
        return new_complex;
    }

    Complex subtract(double val) {
        double new_real = real - val;
        double new_imag = imag;
        Complex new_complex(new_real, new_imag);
        return new_complex;
    }

    Complex multiply(double val) {
        double new_real = real * val;
        double new_imag = imag * val;
        Complex new_complex(new_real, new_imag);
        return new_complex;
    }

    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};


int main()
{
    double real, imag;
    cin >> real >> imag;
    Complex c1 = {real, imag};

    cin >> real >> imag;
    Complex c2 = {real, imag};

    double d1;
    cin >> d1;

    Complex result;
    cout << "c1: "; c1.show();
    cout << "c2: "; c2.show();
    cout << "d1: " << d1 << endl;

    result = c1.add(c2);
    cout << "c1+c2: "; result.show();

    result = c1.subtract(c2);
    cout << "c1-c2: "; result.show();
    result = c1.multiply(c2);
    cout << "c1*c2: "; result.show();

    result = c1.add(d1);
    cout << "c1+d1: "; result.show();

    result = c1.subtract(d1);
    cout << "c1-d1: "; result.show();

    result = c1.multiply(d1);
    cout << "c1*d1: "; result.show();

    return 0;
}
