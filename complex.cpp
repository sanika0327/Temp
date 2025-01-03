#include<iostream>
using namespace std;

class complex
{
    float real;
    float img;
    public:
        void set_data(float r,float i)
        {
            real=r;
            img=i;
        }
        void display()
        {
            
            
                cout<<real<<"+"<<img<<"i"<<endl;
            
        }
		void add(complex,complex);	
		void sub(complex,complex);
		void mul(complex,complex);
		void div(complex,complex);
		void conjugate(complex)
};

	void complex::add(complex c1,complex c2)
{
	real=c1.real+c2.real;
	img=c1.img+c2.img;
}
	void complex::sub(complex c1,complex c2)
	{
		real=c1.real-c2.real;
		img=c1.img-c2.img;
	}
	void complex::mul(complex c1,complex c2)
	{
		real=(c1.real*c2.real)-(c1.img*c2.img);
		img=(c1.real*c2.img)-(c2.real*c1.real);
	}
	void complex::conjugate()
	{
		real=c2.real;
		img=c2.img;
	}
	void complex::div(complex c1,complex c2)
	{
		real=((c1.real*c2.real)-(c2.img*c1.img))/((c2.real*c2.real))
	}
main()
{
	complex c1,c2,c3;
    c1.set_data(5,4);
    c2.set_data(2,3);
    c3.mul(c1,c2);
    c3.display();
}



