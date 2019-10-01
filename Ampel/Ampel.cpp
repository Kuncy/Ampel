#include "Ampel.h"

Ampel::Ampel()
{
	Zustand = GELB_BLINKED;
}
void Ampel::SetZustand(Zustandenum AnAus)
{
	Zustand = AnAus;
}

std::string Ampel::GetZustand()
{
	std::string tmp;
	switch (Zustand) {

	case 0:
		tmp = "AUS";
		break;
	case 1:
		tmp = "GELB_BLINKED";
		break;
	case 2:
		tmp = "ROT";
		break;
	case 3:
		tmp = "GELB";
		break;
	case 4:
		tmp = "GRUEN";
		break;
	case 5:
		tmp = "AN";
		break;
	}
	return tmp;
}
void Ampel::AusSchalten()
{

}
void Ampel::Schalten()
{
	switch (Zustand) {

	case GELB_BLINKED:
		Zustand = ROT;
		break;
	case ROT:
		Zustand = GELB;
		VorZustand = ROT;
		break;
	case GELB:
		if (VorZustand == GRÜN) Zustand = ROT;
		else Zustand = GRÜN;
		break;
	case GRÜN:;
		Zustand = GELB;
		VorZustand = GRÜN;
		break;
	case AUS:
		Zustand = GELB_BLINKED;
		break;
	case AN:
		Zustand = GELB_BLINKED;
		break;
	}
}