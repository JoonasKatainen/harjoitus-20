#include <iostream>
using namespace std;
int main()
{
	int *osoitin;
	int nopeus[5] = {0, 0, 0, 0, 0,};
	cout << "Nopeus = 0km/h"<<endl;
	int i = 0, j;
	int uusinopeus, keskiarvo, apu;
	for(j = 0; j == 0;)
	{
		cout<<"Anna nopeus"<<endl;
		cin >> uusinopeus;
		osoitin = &uusinopeus;
			if(*osoitin < 0)
			{	
			j++;
			}
			else
			{
				if(i == 5)
					i = 0;
			nopeus[i] = *osoitin;
			i++;
			apu = nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4];
			keskiarvo = apu / 5;
			cout << "Nopeus on "<<keskiarvo<<" km/h"<<endl;
			}
	}
	cout<<"Loppu"<<endl;
return 0;
}