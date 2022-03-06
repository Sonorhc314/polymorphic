#include "types.h"
#include "template.h"
#include <Windows.h>
#include <conio.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int loop = 5;
	cout << "\t\t\t\t\t\t|////////////////////|\n"
		"\t\t\t\t\t\t| Rybalka/Shevchenko |\n"
		"\t\t\t\t\t\t|      KV-01         |\n"
		"\t\t\t\t\t\t|      LAB_2         |\n"
		"\t\t\t\t\t\t|      VAR_1         |\n"
		"\t\t\t\t\t\t|////////////////////|\n" << endl;
	const char* task = R"(					
		Develop a family (hierarchy) of polymorphic classes according to the variant.
		Classes that implement containers for simple types (char, int, float, double,bool) 
		and arrays of values of these types.
		For all types of containers implement at least the following methods:
		~ Display values (for example, using printf functions
		or the output stream std :: cout) or in a string (for example, std :: string or
		char *).
		~ Enter values from the keyboard (for example, using functions
		scanf or input stream std :: cin) or from the string.
		~ Designing a container according to a given value / values.
		~ Output type in text form in a string or on the screen (for arrays -
		indicating the size). Examples: “int”, “float”, “int [10]”.
		)";
	cout << task << endl << endl;
	system("pause");
	system("CLS");
	const char* task2 = R"(
		~ Obtaining the size of the array (number of elements).
		~ Resize the array (if the size increases - new elements
		get some default value (usually 0)).
		~ Obtaining the value of the element by index. This item must be
		returned from the method also in the form of a container containing
		values ​​of the corresponding type. It is allowed to create this
		container in dynamic memory and return a pointer to it (c
		in this case, the responsibility for the removal of this object may
		rely on the user).
		~ Constructing a container of a given size from an array of values, or
		by repeating a certain value a specified number of times.
	)";
	cout << task2 << endl << endl;
	system("pause");
	system("CLS");
	while (loop != 27)
	{
		cout << "\nMenu" << endl;
		task = R"(	
		With which variable type would you like to work?	
		1 - CHAR
		2 - INT
		3 - (Exit and see default console)
		)";
		cout << task << endl << endl;
		cout << "Enter number: ";
		int sw, length, length2;
		cin >> sw;
		system("CLS");
		cout << endl;
		cout << "By default the amount of objects is 4 " << endl;
			if (sw == 1)
			{
				char a1, a2, a3, a4;
				cout << "a1: "; cin >> a1; cout << "a2: "; cin >> a2; cout << "a3: "; cin >> a3; cout << "a4: "; cin >> a4;
				NChar a11(a1);
				NChar a22(a2);
				NChar a33(a3);
				NChar a44(a4);
				cout << "Enter the length of you array: "; cin >> length;
				cout << endl;
				Array<char> charA1(length, 4, a11.getValue());
				Array<char> charVar(length);
				cout << "1) charNull array initialized with nulls only"; cout << endl;
				for (int i = 0; i < charVar.getLength(); i++)
				{
					cout << charVar[i] << " ";
				} cout << endl;
				cout << "2) variable-initialized array"; cout << endl;
				for (int i = 0; i < charA1.getLength(); i++)
				{
					cout << charA1[i] << " ";
				} cout << endl;
				cout << "3) all-variable array"; cout << endl;
				charVar[0] = a11.getValue();
				charVar[1] = a22.getValue();
				charVar[2] = a33.getValue();
				charVar[3] = a44.getValue();
				for (int i = 0; i < charVar.getLength(); i++)
				{
					cout << charVar[i] << " ";
				}
				cout << endl;
				cout << "Enter new length for an all-variable array: "; cin >> length2;
				charVar.resize(length2);
				for (int i = 0; i < charVar.getLength(); i++)
				{
					cout << charVar[i] << " ";
				}cout << endl;
				Sleep(25);
				system("pause");
				system("CLS");
			}
			if (sw == 2)
			{
				int b1, b2, b3, b4;
				cout << "b1: "; cin >> b1; cout << "b2: "; cin >> b2; cout << "b3: "; cin >> b3; cout << "b4: "; cin >> b4;
				NInt b11(b1);
				NInt b22(b2);
				NInt b33(b3);
				NInt b44(b4);
				cout << "Enter the length of you array: "; cin >> length;
				cout << endl;
				Array<int> intA1(length, 4, b11.getValue());
				Array<int> intVar(length);
				cout << "1) charNull array initialized with nulls only"; cout << endl;
				for (int i = 0; i < intVar.getLength(); i++)
				{
					cout << intVar[i] << " ";
				} cout << endl;
				cout << "2) variable-initialized array"; cout << endl;
				for (int i = 0; i < intA1.getLength(); i++)
				{
					cout << intA1[i] << " ";
				} cout << endl;
				cout << "3) all-variable array"; cout << endl;
				intVar[0] = b11.getValue();
				intVar[1] = b22.getValue();
				intVar[2] = b33.getValue();
				intVar[3] = b44.getValue();
				for (int i = 0; i < intVar.getLength(); i++)
				{
					cout << intVar[i] << " ";
				}
				cout << endl;
				cout << "Enter new length for an all-variable array: "; cin >> length2;
				intVar.resize(length2);
				for (int i = 0; i < intVar.getLength(); i++)
				{
					cout << intVar[i] << " ";
				}cout << endl;
				Sleep(25);
				system("pause");
				system("CLS");
			}
			if (sw == 3)
			{
				cout << "\n\n>> Esc to escape " << endl;
				loop = (int)_getch();
				system("CLS");
			}
		}
    /*NChar a1('a');
    NChar a2('b');
    NChar a3('c');
    NChar a4('d');
    NChar a5('e');
    NChar a6('f');

    NInt b1(3);

    Array<char> charArray(6, 4, a1.getValue());
    Array<int> intArray(5, 4, b1.getValue());
    for (int i = 0; i < charArray.getLength(); i++)
    {
        cout << charArray[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < intArray.getLength(); i++)
    {
        cout << intArray[i] << " ";
    }

    cout << endl;
    intArray.printType();
    cout << endl;
    charArray.printType();

    intArray.resize(10);

    for (int i = 0; i < intArray.getLength(); i++)
    {
        cout << intArray[i] << " ";
    }
	*/
    return 0;
}