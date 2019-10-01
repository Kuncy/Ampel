#include <iostream>
#include "Ampel.h"
#include "windows.h"

using namespace std;

int main()
{
	do {
		Ampel * cAmpel1 = new Ampel();
		cAmpel1->SetZustand(AUS);
		cout << "Ampel ist " << cAmpel1->GetZustand() << endl;
		Sleep(2000);
		cAmpel1->SetZustand(AN);
		cout << "Ampel ist " << cAmpel1->GetZustand() << endl;
		Sleep(2000);
		cAmpel1->SetZustand(GELB_BLINKED);
		cout << "Ampel ist " << cAmpel1->GetZustand() << endl;
		Sleep(2000);

		for (int i = 0; i < 10; i++)
		{
			cAmpel1->Schalten();
			cout << "Ampel ist " << cAmpel1->GetZustand() << endl;
			Sleep(2000);
		}
		cAmpel1->SetZustand(GELB_BLINKED);
		cout << "Ampel ist " << cAmpel1->GetZustand() << endl;
		Sleep(2000);

	} while (true);
		return 0;
}