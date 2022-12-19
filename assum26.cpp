Q=1
/*
#include<iostream.h>
#include<conio.h>
class complex
{
   private:
	float x;
	float y;
   public:
	void set(float real, float img)
	{
		x=real; y=img;
	}
	complex sum(complex);
	void disp();
};
complex complex::sum(complex C)
{
	complex t;
	t.x = x + C.x;
	t.y = y + C.y;
	return t;
}
void complex::disp()
{
	cout<<x<<" + j"<<y<<endl;
}
int main()
{
	complex C1,C2,C3;
	C1.set(2.5,7.1);
	C2.set(4.2,5.5);
	C3=C1.sum(C2);
	cout<<"\n complex Number 1 = ";C1.disp();
	cout<<"\n complex Number 2 = ";C2.disp();
	cout<<"\n complex Number 3 = ";C3.disp();
	getch();
	return 0;
}*/
Q=2
/*
#include<iostream>
#include<iomanip>
using namespace std;
 
class Time
{
    private :
        int hour;
        int minute;
        int second;
    public :
        //constructor with default value 0
        Time(int h = 0, int m  = 0, int s = 0);
        //setter function 
        void setTime(int h, int m, int s);
        //print description of object in hh:mm:ss
        void print();
        //compare two time object
        bool equals(Time);
};
 
Time :: Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
 
void Time :: setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;     
}        
 
void Time :: print()
{
    cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << "\n";    
}
 
bool Time :: equals(Time otherTime)
{
    if(hour == otherTime.hour && 
        minute == otherTime.minute && 
        second == otherTime.second)
        return true;
    else
        return false;
}
 
int main()
{
    Time t1(10, 50, 59);
    t1.print();  // 10:50:59
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setTime(6, 39, 9); //set the new time in object
    t2.print();  // 06:39:09
   
    if(t1.equals(t2))
        cout << "Two objects are equals\n";
    else
        cout << "Two objects are not equals\n";    
  
    return 0;
}*/
Q=3
/*

#include<iostream>

using namespace std;



class cube

{

            public:

                        double side;

                        double volume()

                        {

                            return(side*side*side);

                        }

                        cube(double side1)

                        {

                            cout << "\nA constructor is called" << endl;

                            side=side1;

                        }

                        cube()

                        {

                            cout << "\nA default constructor is called " << endl;

                        }

                        ~cube()

                        {

                            cout << "\nDestructing " << side << endl;

                        }

};



int main()

{

            cube c1(2.34);

            cube c2;

            cout << "\nThe side of the cube is: " << c1.side << endl;

            cout << "\nThe volume of the first cube is : " << c1.volume() << endl;

            cout << "\nEnter the length of the second cube : " ;

            cin >> c2.side;

            cout << "\nThe volume of second cube is : " << c2.volume() << endl;

            return(0);

}*/
Q=4
/*
#include<iostream>
using namespace std;

class counter
{
    private:
        int count;
    public:
        counter ()        // constructor
        {
            count=0;
        }

        void inc_count ()
        {
            count++;
        }

        int get_count ()
        {
            return count;
        }
};

int main ()
{
    counter c1;
    cout<<"\nBefore calling Counter Function, Count = ";
    cout<<c1.get_count ();

    c1.inc_count ();
    cout<<"\n\nAfter calling Counter Function, Count = ";
    cout<<c1.get_count ();

    cout<<"\n";

    return 0;
}*/
Q=5
/*
/*  C++ Program to Display Date using Constructors 

#include<iostream>
using namespace std;

class date
{
    private:
        int dd, mm, yy;

    public:
        date()
        {
            dd=31;
            mm=12;
            yy=2016;
            cout<<"\nDate Object has been created..............\n";
        }

        void display()
        {
            cout<<"\nThe Entered Date is :: ";
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};
int main ()
{
date date1;
date1.display ();

return 0;
}*/
Q=6
/*
#include<iostream>
using namespace std;
class square
{
   private:
        int n,r;
        float n1,r1;
        static int b;
        public:
                void input();
          void calc();
                void display();
                
};
int square::b=0;
 void square::input()
{
        cout<<"Enter an integer:";
        cin>>n;
        cout<<"Enter a float no.:";
        cin>>n1;
        b++;
        
}
 void square::calc()
{
        r=n*n;
        r1=n1*n1;
        b++;
}
void square::display()
{
        cout<<"Square of integer:"<<r;
        cout<<"\nSquare of float:"<<r1;
        cout<<"\nFunction is called "<<b<<" times by the objects";
}
        

int main()
{
        square s;
        s.input();
        s.calc();
        s.display();
}*/
Q=7
/*

#include <iostream>
using namespace std;

class box
{
    double length,width,height;
    double volume;

    public:
        box(double a,double b,double c);
        void vol();
};

box::box(double a,double b,double c)
{
    length=a;
    width=b;
    height=c;
    volume=length*width*height;
}

void box::vol()
{
    cout<<"\nDimensions of Box are :: \n";
    cout<<"\nLength of Box :: "<<length<<"\n";
    cout<<"\nWidth of Box :: "<<width<<"\n";
    cout<<"\nHeight of Box :: "<<height<<"\n";
    cout<<"\nVolume of Box :: "<<volume<<"\n";
}


int main()
{
    box x(2.4,5.7,2.1),y(3.3,4.4,5.5);

    x.vol();
    y.vol();

    return 0;
}*/
Q=8
/*
#include<iostream>
using namespace std;

class bank
{
 private:
     float p;
     float r;
     float t;
     float si;
     float amount;

 public:
    void read ( )
          {
                 cout <<" Enter Principle Amount :: ";
                 cin>>p ;
                 cout<<"\n Enter Rate of Interest :: ";
                 cin>>r;
                 cout <<"\n Enter Number of years :: ";
                 cin>>t;

                 si= (p *r*t) /100;
                 amount = si + p;

          }

    void show( )
         {
                cout<<"\n Entered Details are :: \n";
                cout<<"\n Principle Amount: "<<p;
                cout <<"\n\n Rate of Interest: "<<r;
                cout <<"\n\n Number of years: "<<t;
                cout <<"\n\n Interest : "<<si;
                cout <<"\n\n Total Amount : "<<amount<<"\n";
         }
};


int main ()
{
    bank b ;

    b.read ( );
    b.show ( );

    return 0;
}*/
Q=9
/*

// C++ implementation to calculate the
// electricity bill
#include<bits/stdc++.h>
using namespace std;
 
// Function to calculate the
// electricity bill
int calculateBill(int units)
{
 
    // Condition to find the charges
    // bar in which the units consumed
    // is fall
    if (units <= 100)
    {
        return units * 10;
    }
    else if (units <= 200)
    {
        return (100 * 10) +
               (units - 100) * 15;
    }
    else if (units <= 300)
    {
        return (100 * 10) +
               (100 * 15) +
               (units - 200) * 20;
    }
    else if (units > 300)
    {
        return (100 * 10) +
               (100 * 15) +
               (100 * 20) +
               (units - 300) * 25;
    }
    return 0;
}
 
// Driver Code
int main()
{
    int units = 250;
    cout << calculateBill(units);
}*/