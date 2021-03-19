#include <iostream> 
#include <bitset>      
#include <math.h>

using namespace std;

int convert(int decimal)
{
    int i = 1, octal = 0;
    //converting decimal to octal
    while (decimal != 0)
    {
        int rem = decimal % 8;
        decimal /= 8;
        octal += rem * i;
        i *= 10;
    }
    return octal;
}

int main()
{
	int val;
	do
	{
		cout << "\nValmynd" << endl;
		cout << "1. Breyta í Tvíundakerfið" << endl;
		cout << "2. Breyta í Áttundakerfið" << endl;
		cout << "3. Breyta í Sextándakerfið" << endl;
		cout << "0. Hætta" << endl; 
		cout << "Sláðu inn 1, 2, 3, eða 4: " << endl; 
		cin >> val; 

		while (val < 1 || val > 4)
		{
			cout << "Rangt Valið [Veldu aftur:]" << endl;
			cout << "Sláðu inn 1, 2, 3, eða 4: " << endl;
			cin >> val;
		}

		switch (val)
		{
		case 1:
            int val1;
            cout << "Sláðu inn tölu: \n";
            cin >> val1;
    	    cout << bitset<32>(val1);
            cout << "\n";
			break;
            
		case 2: // Tekinn af vefsíðunni https://prepinsta.com/cpp-program/cpp-program-for-decimal-to-octal-conversion/ með int convert fallinu.
        int decimal,octal;
        cout << "Sláðu inn tölu: ";
        //user input
        cin >> decimal;
        //calling function
        octal = convert(decimal);
        //printing output
        cout << decimal << " í tugakerfinu er " << octal << " í áttundakerfinu";    
		break;

		case 3:
        cout << "Þarfnast aðstoð með þetta..";
        // þarf aðstoð kannski í næsta tíma, man ekki hvernig á að setja upp hex tölur í C++.
			break;

		case 4: cout << "Takk fyrir að keyra forritið" << endl;
		}
	} while (val <= 3 && val >= 1);

	return 0;
} // Mesta sem ég náði á tímanum núna....