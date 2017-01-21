#include<iostream>
#include"Exceptie.h"
#include"Reminder.h"

void main() {
/*	try {
		cReminder R1, R2, R3;
		R1.addSedinta(121, 8, 0.5, “Stabilirea temelor de casa pentru studentii de anul 3”); // adaugarea in Reminder a unei sedinte care incepe la ora 8, ziua 121 si dureaza jumatate de ora, avand subiectul mentionat.
		R1.addApel(121, 12, “0722123321”); // adaugarea in Reminder a unei apel care trebuie realizat in ziua 121, ora 12, catre numarul mentionat.
		R1.addSedinta(121, 10, 3, “Stabilirea proiectelor finale pentru anul 4”); // adaugarea in Reminder a unei sedinte care incepe la ora 10, ziua 121 si dureaza 3 ore, avand subiectul mentionat.
		R1.addSedinta(121, 9, 2, “Stabilirea proiectelor pentru anul 2”); // incerc adaugarea in Reminder a unei sedinte care incepe la ora 9, ziua 121 si dureaza 2 ore, avand subiectul mentionat. Rezulta exceptie: suprapunere cu alta sedinta.
		R1.addApel(121, 12, “0744990099”); // adaugarea in Reminder a unei apel care trebuie realizat la ora 12, ziua 121 catre numarul mentionat. E ok (difera de nota adaugata deja mai sus)
		R1.display(20, 0); // afisarea notelor memorate in Reminder care sunt “active” dupa ziua 20, ora 0.
		R1[2].display(); // afisare detalii despre nota memorata, cu indexul 2. (sedinta de la ora 10 ziua 121)
		R2.addSedinta(8, 121, 0.5, “Stabilirea temelor de casa pentru studentii de anul 3”);
		R2.addApel(12, 121, “0722123321”);
		R2.addApel(13, 121, “0722123000”);
		R2.display(); // afisarea notelor memorate in Reminder care sunt active dupa ziua 1, ora 0.
		R3 = R1 + R2;
		R3.display();
		int ziua, ora;
		cin >> ziua; cin >> ora;
		R3.run(ziua, ora);
		/*SmartReminder sm;
		sm.addSedinta(121, 8, 0.5, “Sedinta de la ora 08:00 la 08 : 30”);
		sm.addSedinta(121, 9, 2, “Sedinta de la ora 09:00 la 11 : 00”);
		sm.addSedinta(121, 11, 9, “Sedinta de la ora 11:00 la 20 : 00”);
		sm.setWorkInterval(8, 22); // setare interval orar de lucru 08:00 – 22:00
		sm.addSedinta(3, “Sedinta de 3 ore”, 121, 128); //se incearca setarea unei sedinte de 3 ore cu subiectul mentionat intre zilele 121 si 128, in intervalul orar 08:00-22:00. Se va afisa pe ecran ca sedinta a fost planificata in ziua 122 de la ora 8:00 la ora 11:00.
		
	}
	catch (cException *e) {
		e->printErrMessage();
		delete e;
	}*/
}