//If you want to compile and run it, 
//copy/paste the code into the hello.cpp file in lab0's zip file

#include <stdio.h>


//define a struct type named Point
//then you can use Point as a datatype just like int, double, char...
struct Point{	

	//define some fields
	double x; 
	double y; 
	
};

//you can use a defined struct type as function's return type
//then this will return a variable that stores a Point
struct Point makePoint(double p_x, double p_y);

double computeDis(Point p1, Point p2);


int main(void)
{
	
	int num;
	
	num = 12;
	
	printf("%d", num);
	
	Point p1;
	
	//option 1
	//p1 = {2.5, 3.5};
	
	
	//option 2
	// p1.x = 2.5;
	// p1.y = 3.5;
	
	//option 3
	//define a function to initialize a Point
	p1 = makePoint(2.5, 3.5);
	
	Point p2 = makePoint(4.5, 10);
	
	printf("%d", p1.x); //p1.x access field x of Point p1
	
	   
    return 0;

}

//function definition
struct Point makePoint(double p_x, double p_y){

	Point p;
	
	//two ways to initialize/assign values to each field of a Point
	//option 1
	p = {p_x, p_y};
	
	//option 2
	//p.x = p_x;
	//p.y = p_y;
	
	return p;

}












