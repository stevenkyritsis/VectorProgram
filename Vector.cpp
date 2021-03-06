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
void calc_difference(double, double, double, double);
void scalar_Result(double, double, double);
double scalar_prod(double, double, double, double); //Return prod
double magnitude(double, double); //Return Magnitude

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

	//char for choice
	char choice;


	//Vec2 assignment
	vec2.x = 3;
	vec2.y = -1;


	//Input
	char ret;
	char input3;

	//Menu
	cout << "In this program you will be able to view/edit vectors and perform operations\n";
	cout << "to current values in the vectors. Each time the program is restarted the values are\n";
	cout << "defaulted to (4,9) in Vec1 and (3,-1) in Vec2. Your scalar is also automatically set to 10.\n";
	cout << endl;
	cout << "********************************MENU**********************************" << endl;
	
	
	//Variable for user input of first menu
	int input1 = 0;

		
	cout << "What would you like to do?\n";
	cout << "1: View Vectors \t 2: Perform operations to current vectors\n";
	cin >> input1;
	while (input1 < 1 || input1 > 2)
		{
			input1 = 0;
			cout << "Error! Please try again!\n";
			cout << "What would you like to do?\n";
			cout << "1: View Vectors \t 2: Perform operations to current vectors\n";
			cin >> input1;
		}
	
		
		//Switch from menu
	switch (input1){
			case 1: {
						viewVector(vec1.x, vec1.y, vec2.x, vec2.y);
							while (input3 != 'y' || input3 != 'Y' || input3 != 'n' || input3 != 'N')
								{
									cout << "Would you like to go back to the Menu?(y/n)\n";
									cin >> input3;
									if(input3 == 'y' || input3 == 'Y')
									{
										main();
										break;
									}
									else if (input3 == 'n' || input3 == 'N')
									{
										return 0;
										break;
									}
									else
									{
										cout << "Error! Please try again!\n";
									}
								}	
						break;
						}
			case 2: {
				int input4;

				do 
				{
					cout << "Which operations would you like to perform on the vectors?\n";
					cout << "1: Vector Subtraction \t 2: Scalar Multiplication \t 3: Scalar Product\n";
					cout << "4: Magnitude\t 5: Menu \t 6: EXIT\n";
					cin >> input4;		

					switch (input4)
					{
						case 1: {
							calc_difference(vec1.x, vec1.y, vec2.x, vec2.y);
							break;
						}
		

						case 2: {
							int input6;
							while (input6 != 0 || input6 != 1 || input6 != 2)
							{
								cout << "Which vector would you like to scale?\n";
								cout << "1: Vec1 \t 2: Vec2\n";
								cin >> input6;
								if (input6 == 1)
								{
									scalar_Result(vec1.x, vec1.y, SCALAR);
									break;
								}
								else if (input6 == 2)
								{
									scalar_Result(vec2.x, vec2.y, SCALAR);
									break;
								}
								else
								{
									cout << "Error! Please try again!\n";
								}
							}	
								
							
							break;
						}
					

						case 3:{
							cout << "The scalar product is: ";
							cout << scalar_prod(vec1.x, vec1.y, vec2.x, vec2.y) << endl;
							break;
						}
						

						case 4:{
							int input5;
							while (input5 != 0 || input5 != 1 || input5 != 2)
							{
								input5 = 0;
								cout << "Which vector would you like to see the magnitude?\n";
								cout << "1: Vec1 \t 2: Vec2\t";
								cin >> input5;
								if (input5 == 1)
								{
									
									cout << "The magnitude of Vec1 is: ";
									cout << fixed << showpoint << setprecision(2) << magnitude(vec1.x, vec1.y) << endl;
									break;
								}
								else if (input5 == 2)
								{
									cout << "The magnitude of Vec2 is: ";
									cout << fixed << showpoint << setprecision(2) << magnitude(vec2.x, vec2.y) << endl;
									break;
								}
								else;
								}
								
						break;
						}
						
						case 5: {
							main();
							break;
						}

						case 6: {
							return 0;
						}
						break;
				}

					cout << "Again? y/n?" << endl;
					cin >> choice;
				} while(choice == 'y' || choice == 'Y');
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
	cout << "The difference between Vec1 & Vec2 is: ";
	cout << "(" << (x-a) << ", " << (y-b) << ")" << endl;
}

void scalar_Result(double x, double y, double s)
{
	cout << "The result of the vector multiplied by the scalar is: ";
	cout << "(" << (x*s) << ", " << (y*s) << ")" << endl; 
}

double scalar_prod(double x, double y, double a, double b)
{
	return (x*a) + (y*b);
}

double magnitude(double x, double y)
{
	const double POWER = 2.0;
	return sqrt(pow(x, POWER) + pow(y, POWER));
}