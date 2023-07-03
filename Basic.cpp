#include <iostream>
//using namespace std;

/*int main()
 Write any of the  word normally
{
	cout<<"WELCOME";
	
	return 0;
}*/

/* Write the code for sum of the two numbers
{
	int a,b,c;
	cout<<"enter two numbers";
	cin>>a;
	cin>>b;
	c=a+b;
	cout<<"the sum is :"<<c;
	
	return 0;
}*/

/* write a code for multiplication;
int main()
{
	int a,b,c;
	cout<<"enter the two numbers";
	cin>>a;
	cin>>b;
	c=a*b;
	cout<<"the multiplication is :"<<c;
	
	return 0;
}*/

/* for division
int main()
{
	int a,b,c;
	cout<<"enter the two numbers";
	cin>>a;
	cin>>b;
	c=a/b;
	cout<<"the division is :"<<c;
	
	return 0;
}*/

/* multiplication for four numbers
int main()
{
	int a,b,c,d,e;
	cout<<"enter the four numbers";
	cin>>a>>b>>c>>d;

	e=a*b*c*d;
	cout<<"the multiplication of four number is :"<<e;
	
	return 0;
}*/

/*int main()
{
	cout<<"The size of the Fundamental Data Types are :";
	cout<<"The size of the (char) is :" << sizeof(char) << " bytes \n" ;
	cout<<"The size of the (int) is :" << sizeof(int) << " bytes \n" ;
	cout<<"The size of the (short) is :" << sizeof(short) << " bytes \n" ;
	cout<<"The size of the (long) is :" << sizeof(long) << " bytes \n" ;
	cout<<"The size of the (bool) is :" << sizeof(bool) << " bytes \n" ;
	cout<<"The size of the (float) is :" << sizeof(float) << " bytes \n" ;
	
	return 0;
}*/

/* Mixed data type and arithmetic operation...
#include<iomanip> //formatting floating point with 1 decimal place
using namespace std;

int main()
{
int m1 = 4 , m2 = 8;
double d1 = 3.2 , d2 = 4.8;
cout<<"Display Arithmetic Operation with various priimitive data type";
cout<<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl; 
cout<<" "<< d1 << " + " <<  d2 << " = " << d1+d2 << endl;
cout<<" "<< m1 << " + " << d2 << " = " << m1+d2 << endl;

cout<<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl; 
cout<<" "<< d1 << " - " <<  d2 << " = " << d1-d2 << endl;
cout<<" "<< m1 << " - " << d2 << " = " << m1-d2 << endl;

cout<<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl; 
cout<<" "<< d1 << " * " <<  d2 << " = " << d1*d2 << endl;
cout<<" "<< m1 << " * " << d2 << " = " << m1*d2 << endl;

cout<<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl; 
cout<<" "<< d1 << " / " <<  d2 << " = " << d1/d2 << endl;
cout<<" "<< m1 << " / " << d2 << " = " << m1/d2 << endl;

return 0;
}*/

/*using namespace std;
int main()
{
	cout<<"print the result of some expression :\n";
	
	cout<<"Result of first expression is :"<<(2*5/2)<<endl;
	cout<<"Result of second expression is :"<<(2*5*2)<<endl;
	cout<<"Result of third expression is :"<<((2+5)/7)<<endl;
	cout<<"Result of fourth expression is :"<<((9-5)/2)<<endl;
	
	return 0;
}*/

/* Swapping the numberss
using namespace std;
int main()
{
	int num1,num2,temp;
	cout<<"Enter the first number :";
	cin>>num1;
	cout<<"Enter the second number :";
	cin>>num2;
	temp=num2;
	num2=num1;
	num1=temp;
	
	cout<<"After Swapping the number first number is :"<<num1<<endl;
	cout<<"After Swapping the number second number is :"<<num2<<endl;
	
	return 0;
}*/

/* Find the volume of the sphere
using namespace std;
int main()
{
	int r;
	float v;
	cout<<"Enter the radius of the sphere : ";
	cin>>r;
	v=(4*3.14*r*r*r)/3;

	cout<<"Volume of the sphere is : "<<v<<endl;
	
	return 0;
}*/


/* Volume of the cube
using namespace std;
int main()
{
	int rad1,vol;
	cout<<"enter the radius of the cube : ";
	cin>>rad1;
	vol=(rad1*rad1*rad1);
	cout<<"Volume of the cube is : "<<vol<<endl;
	return 0;
}*/

/* Volume of the Cylinder
using namespace std;
int main()
{
	int r,h;
	float v;
	cout<<"Enter the radius of the cylinder : ";
	cin>>r;
	cout<<"enter the height of the cylinder : ";
	cin>>h;
	v=(3.14*r*r*h);
	cout<<"volume of the Cylinder is : "<<v<<endl;
	
	return 0;
}*/

/* Area and perimeter of the rectangle
using namespace std;
int main()
{
	int l,b,per,area;
	cout<<"Enter the length : ";
	cin>>l;
	cout<<"Enter the Breadth : ";
	cin>>b;
	
	per=(2*(l+b));
	cout<<"The perimeter of the rectangle is : "<<per<<endl;
	
	area=(l*b);
	cout<<"The Area of the rectangle is : "<<area<<endl;
	
	return 0;
	
}*/

/*find the area of triangle using Heron's Formula A=(s(s-a)(s-b)(s-c))^1/2
#include<math.h>
using namespace std;
int main()
{
	float  a,b,c,s,area;
	cout<<"enter the value of first side : ";
	cin>>a;
	cout<<"enter the value of second side : ";
	cin>>b;
	cout<<"enter the value of third side : ";
	cin>>c;
	
	s = (a+b+c)/3;
	cout<<"Semiperimeter is : "<<s<<endl;
	
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of the Triangle is : "<<area<<endl;
	
	return 0;
}*/

/* find  the area and circumference of the circle
using namespace std;
int main()
{
	int rad;
	float area,circumference;
	
	cout<<"enter the radius of the circle : ";
	cin>>rad;
	
	circumference=(2*3.14*rad);
	cout<<"Circumference of the circle is : "<<circumference<<endl;
	
	area=(3.14*rad*rad);
	cout<<"Area of the circle is : "<<area<<endl;
	
	return 0;
}*/

/* convert the temperature in celcius to farenhite °F = (°C × 9/5) + 32
using namespace std;
int main()
{
	int c;
	float f;
	cout<<"Enter the Temp in Celius : ";
	cin>>c;
	
	f=(c*(9/5))+32;
	cout<<"The Conversion from celcius to farenhite is : "<<f<<endl;
	
	return 0;
} */

/* convert the temperature in farenhite to celcius °C = (°F - 32) ÷ 9/5

using namespace std;
int main()
{
	float f,c;
	
	cout<<"Enter the temp in farenhite : ";
	cin>>f;
	
    c=(f-32)/(9/5);
	cout<<"The Conversion from Farenhite to celcius is : "<<c<<endl;
	
	return 0;  
}*/

/*find the third angle of the triangle
using namespace  std;
int main()
{
	int ang1,ang2,ang3,t;
	
	cout<<"Enter the value of first angle : ";
	cin>>ang1;
	cout<<"Enter the value of second angle : ";
	cin>>ang2;
	
	t=(180-(ang1+ang2));
	
	cout<<"The value od the third angle is :"<<t<<endl;
	
	return 0;
}*/

/*kilometer  per hour to miles per hour
using namespace std;
int main()
{
	int km;
	float mile;
	cout<<"Enter the deistance in kilometer : ";
	cin>>km;
	
	mile=(0.6213*km);
	
	cout<<"So  the distance in miles per hour is :"<<mile<<endl;
	
	return 0;
}*/

/* find the quotient and the remainder

using namespace std;
int main()
{
	int div,dnd,quo,rem;
	
	cout<<"Enter the  Divisor : ";
	cin>>div;
	cout<<"Enter the divident : ";
	cin>>dnd;
	
	quo=(div/dnd);
	cout<<"Quotent is : "<<quo<<endl;
	
	rem=(div-(quo*dnd));
	cout<<"Remainder is : "<<rem<<endl;
	
}*/
/*compute the total and average of the four numbers
using namespace std;
int main()
{
	int num1,num2,num3,num4,total;
	float avg;
	
	cout<<"Enter the four numbers : ";
	cin>>num1>>num2>>num3>>num4;
	
	total=(num1+num2+num3+num4);
	cout<<"Total of the four number is : "<<total<<endl;
	
	avg=(num1+num2+num3+num4)/4;
	cout<<"the average of the four numbers is : "<<avg<<endl;
}*/
/*print a rectangular forrm of the digit 5 with 4 rows and 6  columns

#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the digit : ";
	cin>> a;
	cout<<" "<<a<<a<<a<<a<<endl;
	cout<<" "<<a<<" "<<" "<<a<<endl;
	cout<<" "<<a<<" "<<" "<<a<<endl;
	cout<<" "<<a<<" "<<" "<<a<<endl;
	cout<<" "<<a<<" "<<" "<<a<<endl;
	cout<<" "<<a<<a<<a<<a<<endl;
	
	return 0;
}*/

/* Check the number is positive, negative or zero
using namespace std;
int main()
{
	int num1;
	cout<<"Enter the number : ";
	cin>>num1;
	
	if(num1>0)
	cout<<"The following number is positive";
	
	else if (num1<0)
	cout<<"The following  number is negative";
	
	else
	cout<<"The number is zero";
	
	return 0;
}*/
/*divide two numbers
using namespace std;
int main()
{
	int dvd,dsr,quo;
	cout<<"Enter the Dividend : ";
	cin>>dvd;
	
	cout<<"Enter the divisor : ";
	cin>>dsr;
	
	quo=(dvd/dsr);
	cout<<"The quotient is : "<<quo<<endl;
	
	return 0;
}*/

/*multiplication table of any number upto 10
using namespace std;
int  main()
{
	int num;
	cout<<"Enter the number : ";
	cin>>num;
    
    cout<<num<<" X 1 = "<<num*1<<" "<<endl;
     cout<<num<<" X 2 = "<<num*2<<" "<<endl;
	  cout<<num<<" X 3 = "<<num*3<<" "<<endl;
	   cout<<num<<" X 4 = "<<num*4<<" "<<endl;
	    cout<<num<<" X 5 = "<<num*5<<" "<<endl;
		 cout<<num*6<<" "<<endl;
		  cout<<num*7<<" "<<endl;
		   cout<<num*8<<" "<<endl;
		    cout<<num*9<<" "<<endl;
			 cout<<num*10<<" "<<endl;    
    return 0;
}*/

/*user first and last name and print them in reverse order
using namespace std;
int main()
{
	string name1,name2,name;
	cout<<"Enter the first name : ";
	cin>>name1;
	
	cout<<"Enter the second name : ";
	cin>>name2;
	
	name=(name2 + " "+ name1);
	
	cout<<"The Full name is : "<<name<<endl;
	
	return 0;
	
}*/
/* volume of sphere
using namespace std;
int main()
{
	int rad,vol;
	cout<<"Enter the Radius of the Sphere : ";
	cin>>rad;
	
	vol=((4/3)*3.14*rad*rad*rad);
	cout<<"Volume of the sphere is : "<<vol<<endl;
	
}*/
/*find the volume of cone
using namespace std;
int main()
{
	int rad,hei,vol;
	cout<<"Enter Radius : ";
	cin>>rad;
	
	cout<<"Enter Height : ";
	cin>>hei;
	
	vol=((4/3)*3.14*rad*rad*rad);
	cout<<"Volume of cube is  : "<<vol<<endl;
	
	return 0;
}*/
/*Write a C++ program to calculate the sum of all even and odd numbers in an array




















*/
/*  swapping without using any three variable
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter first no : ";
	cin>>num1;
	
	cout<<"Enter second num : ";
	cin>>num2;
	
	cout<<"After swapping the firrst number is : "<<num2<<endl;
	
	cout<<"After swapping the second number is : "<<num1<<endl;
}*/
/*enter the length in cm and  convert to  mtr n km.
using namespace std;
int main()
{
	int cm,mtr,km;
	cout<<"enter length in cm : ";
	cin>>cm;
	
	mtr=(cm/100);
	cout<<"The length in meter is : "<<mtr<<endl;
	
	km=(cm/1000);
	cout<<"The length in Km is : "<<km<<endl;
	
	return 0;
	
}*/
/* Program to find the simple interest
using namespace std;
int main()
{
	int p,r,t,si;
	cout<<"Enter principle,rate,time  : ";
	cin>>p>>r>>t;
	
	si=(p*r*t/100);
	cout<<"Simple Interest is: "<<si<<endl;
	
	return 0;
} */
/* find the compound interest
#include<math.h>
using namespace std;
int main()
{
	int p,r,t,ci;
	cout<<"Enter  principle,rate and time : ";
	cin>>p>>r>>t;
	
	ci=((p^t)+(p*r/100)^t);
	cout<<"the compound interst is : "<<ci<<endl;
	return 0;

}*/
/*manipulation of the string
using namespace std;
int main()
{
	string txt="Welcome, W3resources";
	cout<<"The String  : "<<txt<<endl;
	cout<<"The length of string is : "<<txt.length()<<endl;
	cout<<"The second letter of string is : "<<txt.at(1)<<endl;
	cout<<"The string is empty :  "<<txt.empty()<<endl;
	cout<<"Retrive the sub string from 3rd position for four characters: "<<txt.substr(3,4)<<endl;
	cout<<"The substring replaced by went : "<<txt.replace(3,4,"went")<<endl;
	cout<<"Append a string 'end' at last of the string: "<<txt.append(" end")<<endl;
	cout<<"Append a string 'end' at last of the string using operator: "<<txt + " end"<<endl;
	cout<<"The string 'insert' inserting at 3rd position of the string: "<<txt.insert(3,"Hii")<<endl;
	cout<<"The new string is: "<<txt<<endl;
	cout<<"Input a sentence: "<<"A quick brown fox jumps over the lazy dog"<<endl;
	
	return 0;
	
}*/
/*area of hexagon
using namespace std;
int main()
{
	int side;
	float area;
	cout<<"Enter the side of the hexagon  :" ;
	cin>>side;
	
	area=((3*1.73)/2*side*side);
	cout<<"The area of the hexagon is : "<<area<<endl;
	
	return 0;
}*/
/*Area of polygon
using namespace std;
int main()
{
	int s,per,ap;
	float area;
	cout<<"Enter the side of polygon : ";
	cin>>s;
	
	per=(5*s);
	cout<<"The perimeter of the polygon is : "<<per<<endl;
	
	cout<<"Enter Apothium";
	cin>>ap;
	
	area=(ap*per/2);
	cout<<"The area of the polygon is : "<<area<<endl;
	
	return 0;
	
}*/
/*sum of two binary numbers
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the first Binary number : ";
	cin>>num1;
	
	cout<<"Enter the second binary number : ";
	cin>>num2;
	
}*/

/*









*/
//Write a C++ program to swap the first and last digits of any number.
#include<string>
using namespace std;
int main()
{
	string number;
	cout<<"Enter the number : ";
	cin>>number;
	
	swap(number.front(), number.back());
	
	cout<<"The number of the first n the last digit are swapped : "<<number<<endl;
	
	return 0;
}
/*Write a C++ program to compute the sum of the two given integers and count the number of digits in the sum value.
#include<sstream>
using namespace std;
int main()
{
	int x,y;
	while (cin>>x>>y)
	{
		stringstream str1;
		str1 << x + y;
		cout<< str1.str().size()<<endl;
	}
	return 0;
}*/



