#include <iostream>;
#include <cmath>;
#include <string>;

using namespace std;

void option1(int h,int w)
{
	if (abs(h - w) > 5)
		cout << "The area of the rectangular: " << h * w << endl;
	else
		cout << "The perimeter of the rectangular: " << (h + w) * 2 << endl;
}

void option2(int h, int w)
{
	char choise;
	double halfWidth, halfLength;

	cout << "Press 1 for the perimeter of the triangle and press 2 to print the triangle" << endl;
	cin >> choise;
	
	switch (choise)
	{
	case '1':
		halfWidth = w / 2.0;
		halfLength = sqrt(halfWidth * halfWidth + h * h);
		cout << "The perimeter of the triangle: " << w + 2 * halfLength << endl;
		break;
	case '2':
		if (w % 2 == 0 || w > h * 2)
			cout << "The triangle can't be printted" << endl;
		else
		{
			int num_row = h - 2;//מספר שורות אמצע
			int num_groups = (w - 2) / 2;//מספר קבוצות אמצע
			int num_of_rows_in_group = num_row / num_groups;//מספר שורות בקבוצת אמצע
			int sheerit = num_row % num_groups;
			for (int k = 0; k < w / 2; k++)
				cout << " ";
			cout << "*" << endl;
			for (int k = 1; k < h-1; k++)
			{
				if (k <= num_of_rows_in_group + sheerit)
				{
					for (int n = 0; n < (w - 2) / 2; n++)
					{
						cout << " ";
					}
					cout << "***" << endl;
				}
				else
				{
					string repeatedCharsFirst((w-4)/2, ' ');
					string repeatedCharsSecond(5, '*');
					cout << repeatedCharsFirst <<repeatedCharsSecond<< endl;
					

				}
			}
			for (int k = 0; k < w; k++)
				cout << "*";
			cout << endl;
			
		}
		break;


	default:
		cout << "Incorrect input\n";
		break;
	}
	
}

int main() {
	int choise=0;
	int heightT, widthT;
	cout << "Press 1 for a rectangular tower.\n Press 2 for a triangle tower.\n Press 3 for exit."<<endl;
	cin >> choise;
	while (choise != 3) 
	{
		cout << "Press 1 for a rectangular tower.\nPress 2 for a triangle tower.\nPress 3 for exit." << endl;
		cin >> choise;
		if (choise == 1) 
		{
			cout << "You pressed 1. You chose a rectangular tower.\nEnter the height and the width of the tower:" << endl;
			cin >> heightT;
			cin >> widthT;
			option1(heightT, widthT);
		}
		if (choise == 2)
		{
			cout << "You pressed 2. You chose a triangle tower.\nEnter the height and the width of the tower:" << endl;
			cin >> heightT;
			cin >> widthT;
			option2(heightT, widthT);
		}
		else
		{
			cout << "Your input is not correct\n" << endl;
		}
	}


}