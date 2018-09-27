//Vector Program
//
//
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function Prototypes
void viewVector(double, double, double, double);
double EditVector(double, double);
void calc_difference(double, double, double, double);
void scalar_Result(double, double, double);
double scalar_prod(double, double, double, double, double); //Return prod
double magnitude(double, double, double); //Return Magnitude

int main() {
	//Vector Structure
	struct Vector {
		double x;
		double y;
	};

	//Scalar
	const double SCALAR = 10;

	//Vector Variables
	Vector vec1;
	Vector vec2;

	//Vec1 assignment
	vec1.x = 4;
	vec1.y = 9;

	//String for choice
	char choice;


	//Vec2 assignment
	vec2.x = 3;
	vec2.y = -1;

	//Return Variables
	double prod;
	double mag;

	//Input
	char ret;

	//Menu
	cout << "In this program you will be able to view/edit vectors and perform operations\n";
	cout << "to current values in the vectors. Each time the program is restarted the values are\n";
	cout << "defaulted to (4,9) in Vec1 and (3,-1) in Vec2. Your scalar is also automatically set to 10.\n";
	cout << endl;
	cout << "********************MENU**************************" << endl;
	
	
	//Variable for user input of first menu
	int input1;

		
		cout << "What would you like to do?\n";
		cout << "1: edit/view Vectors \t\t 2: Perform operations to current vectors\n";
		cin >> input1;

		switch (input1){
			case 1: {
						int input2;
						cout << "Would you like to edit or view your vectors?" << endl;
						cout << "1: View \t\t 2: Edit" << endl;
						cin >> input2;
						switch (input2)
						{
							case 1: {
								viewVector(vec1.x, vec1.y, vec2.x, vec2.y);
								break;
							}
							case 2: {
								int input3 = 0;
								do {
									cout << "Which vector would you like to edit? (You can only edit one at a time.)\n";
									cout << "1: Vec1 \t\t 2: Vec2\n";
									cin >> input3;
								}while (input3 != 1 || input3 != 2);
								switch (input3){
									case 1: {
											
											do
											{	

												EditVector(vec1.x, vec1.y);
												cout << "Would you like to edit the other vector?(Y/y)\n";
												cin >> ret;
												if (ret == 'y' || ret == 'Y')
												{
													EditVector(vec2.x, vec2.y);
												}
												else;
												cout << "Would you like to go back to the menu?(M/m)\n";
												cin >> ret;
												if (ret == 'm' || ret == 'M')
													main();
												else;
											} while(ret != 'y' || ret != 'm');	
											break;
									}
									case 2: {
										do 
										{
											EditVector(vec2.x, vec2.y);
											cout << "Would you like to edit the other vector?\n";
											cin >> ret;
											if (ret == 'y')
											{
												EditVector(vec1.x, vec1.y);
											}
											else;
											cout << "Would you like to go back to the menu?\n";
											cin >> ret;
											if (ret == 'm')
											{
												main();
											}
										} while(ret != 'y' || ret != 'm');
										break;	
									}
								}
							}
							break;
						}
			case 2: {
				int input4 = 0;

				do 
				{

					cout << "Which operations would you like to perform on the vectors?\n";
					cout << "1: Vector Subtraction \t\t 2: Scalar Multiplication\n";
					cout << "3: Scalar Product \t\t 4: Magnitude\t\t 5: EXIT\n";
					cin >> input4;		

					switch (input4)
					{
						case 1: {
							calc_difference(vec1.x, vec1.y, vec2.x, vec2.y);
							break;
						}
		

						case 2: {
							int input6;
							do{
								cout << "Which vector would you like to scale?\n";
								cout << "1: Vec1 \t\t 2: Vec2\n";
								cin >> input6;
							}while (input6 != 1 || input6 != 2);
							if (input6 == 1)
							{
								scalar_Result(vec1.x, vec1.y, SCALAR);
							}
							else if (input6 == 2)
							{
								scalar_Result(vec2.x, vec2.y, SCALAR);
							}
							else;
							
							break;
						}
					

						case 3:{
							scalar_prod(vec1.x, vec1.y, vec2.x, vec2.y, prod);
							break;
						}
						

						case 4:{
							int input5;

							do{
								cout << "Which vector would you like to see the magnitude?\n";
								cout << "1: Vec1 \t\t 2: Vec2\t";
								cin >> input5;
								if (input5 == 1)
								{
									magnitude(vec1.x, vec1.y, mag);
									cout << "The magnitude of Vec1 is: ";
									cout << fixed << showpoint << setprecision(2) << mag;
								}
								else if (input5 == 2)
								{
									magnitude(vec2.x, vec2.y, mag);
									cout << "The magnitude of Vec2 is: ";
									cout << fixed << showpoint << setprecision(2) << mag;
								}
								else
								{
									cout << "Error! Please try again!\n";
								}
							} while(input5 != 1 || input5 != 2);
						break;
						}
						
						case 5: {
							return 0;
						}
				}

					cout << "Again? y/n?" << endl;
					cin >> choice;
				} while(choice == 'y' || choice == 'Y');
			}
		}
	}
	return 0;
}

void viewVector(double x, double y, double a, double b)
{
	cout << "Vec1: ";
	cout << "(" << x << ", " << y << ")" << endl;
	cout << "Vec2: " << "(" << a << ", " << b << ")" << endl;
}

void calc_difference(double x, double y, double a, double b)
{
	cout << "(" << (x-a) << ", " << (y-b) << ")" << endl;
}

double EditVector(double x, double y)
{
	cout << "Please enter the value for x: ";
	cin >> x;
	cout << "Please emter the value for y: ";
	cin >> y;
	return x;
}

void scalar_Result(double x, double y, double s)
{
	cout << "The result of the vector multiplied by the scalar is: ";
	cout << "(" << (x*s) << ", " << (y*s) << ")" << endl; 
}

double scalar_prod(double x, double y, double a, double b, double p)
{
	p = (x*a) + (y*b);
	
	return p;
}

double magnitude(double x, double y, double m)
{
	double h;

	h = (pow(x, 2.0)) + (pow(y, 2.0));
	m = sqrt(h);

	return m;
}

