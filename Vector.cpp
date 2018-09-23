//Vector Program
//
//
//

#include<iostream>
#include<iomanip>
using namespace std;

//Function Prototypes
void ViewVector();
double EditVector(double, double);
void calc_difference(double, double)
void scalar_result(double, double)
void scalar_prod(double, double)
void magnitude(double)

main() {
	//Vector Structure
	struct Vector {
			double x;
			double y;
		};
	
	//Global Scalar
	const double SCALAR = 10;
	
	//Vector Variables
	Vector vec1;
	Vector vec2;

	//Vec1 assignment
	vec1.x = 4;
	vec1.y = 9;

	

	//Vec2 assignment
	vec2.x = 3;
	vec2.y = -1;

	//Menu
	cout << "In this program you will be able to view/edit vectors and perform operations\n";
	cout << "to current values in the vectors. Each time the program is restarted the values are\n";
	cout << "defaulted to (4,9) in Vec1 and (3,-1) in Vec2. Your scalar is also automatically set to 10.\n";
	cout << endl;
	cout << "********************MENU**************************" << endl;
	
	
	//Variable for user input of first menu
	int input1;

	do {
		cout << "What would you like to do?\n";
		cout << "1: edit/view Vectors \t\t 2: Perform operations to current vectors\n";
		cin >> input1;
	}while (input != 1 || input != 2)

		switch (input1)
		{
			case 1 {
						int input2;
					do {
							cout << "Would you like to edit or view your vectors?" << endl;
							cout << "1: View \t\t 2: Edit" << endl;
							cin >> input2;
						}while(input2 != 1 || input2 != 2)
						switch (input2)
						{
							case 1{
								ViewVector();
							}
							case 2{
								
								do {
									cout << "Which vector would you like to edit? (You can only edit one at a time.)\n";
									cout << "1: Vec1 \t\t 2: Vec2\n";
									int input3;
									cin >> input3;
								}while (input3 != 1 || input3 != 2)
								switch (input3)
								{
									case 1{
											char ret;
											do {
												EditVector(vec1.x, vec1.y)
												cout << "Would you like to edit the other vector?\n";
												cin >> ret;
												if (ret = 'y')
												{
													EditVector(vec2.x, vec2.y)
												}
												else;
												cout << "Would you like to go back to the menu?\n";
												cin >> ret;
											}while(ret != 'y' || ret != 'm' || ret == NULL)
										
												
											

									}
									case 2{
										do {
											EditVector(vec2.x, vec2.y)
												cout << "Would you like to edit the other vector?\n";
											cin >> ret;
											if (ret = 'y')
											{
												EditVector(vec1.x, vec1.y)
											}
											else;
											cout << "Would you like to go back to the menu?\n";
											cin >> ret;
										} while (ret != 'y' || ret != 'm' || ret == NULL)
										
									}
								}
								

							}
						}
			}
			case 2 {
				int input4;

				do {
					cout << "Which operations would you like to perform on the vectors?\n";
					cout << "1: Vector Subtraction \t\t 2: Scalar Multiplication\n";
					cout << "3: Scalar Product \t\t 4: Magnitude\n";
					cin >> input4;
				} while(input4 != 1 || input4 != 2 || input4 != 3 || input4 != 4)
				
					switch (input4)
					{
						case 1{
							calc_difference(vec1, vec2)
						}
						case 2{
							int input5;
							
							do {
								cout << "Which vector would you like to multiply by the scalar?\n";
								cout << "1: Vec1 \t\t 2: Vec2\n";
								cin >> input5;
							}while(input5 != 1 || input5 != 2)
							

						}
				}
			}
		}




	return 0;
}
