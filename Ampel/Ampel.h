#pragma once
#include <string>
#include <iostream>

enum Zustandenum {
	AUS,
	GELB_BLINKED,
	ROT,
	GELB,
	GRÜN,
	AN
};

class Ampel {
private:
	
	Zustandenum VorZustand;
	Zustandenum Zustand;

public:

	Ampel();
	std::string GetZustand();
	void Schalten();
	void AusSchalten();
	void SetZustand(Zustandenum);

};