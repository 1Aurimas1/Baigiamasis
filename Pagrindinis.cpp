#include "Prisijungimas.h"
#include "Registravimas.h"
#include "PagrindinisMeniu.h"
#include "KintamiejiKlases.h"
#include "NaujasOroUostas.h"
#include "RedaguotiOroUostus.h"
#include "SkrydziuApskaita.h"
#include "NaujasSkrydis.h"
#include "Apie.h"
#include "NaujasLektuvas.h"
#include "RedaguotiLektuvus.h"
#include "RedaguotiSkrydzius.h"
#include "Statistikos.h"
#include <string>
#include <fstream>

#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

void SkaitytiVartotojus(Vartotojas vartotojas[], int & n);
string SkaitytiOroPavadinima();
void SkaitytiOroUostus(OroUostas oroUostas[], int & n);
void SkaitytiSkrydzius(Skrydis skrydis[], int & n);
void SkaitytiLektuvus(Lektuvas lektuvas[], int & n);
void TrintiFaila(string failoPav);
string FailoKelias(string failoPav);
void RastiDazniausia(Skrydis skrydis[], int n, int index, int & isViso1, int & isViso2);
void Palyginti(int & max, int & sk, int & index, int i);

[STAThread]
int main(cli::array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Baigiamasis::Prisijungimas form;
	Application::Run(%form);
}

// patikrina ar textBox->text yra tuscias
bool ArStringTuscias(String^ s)
{
	if (String::IsNullOrWhiteSpace(s)) {
		return true;
	}
	else {
		return false;
	}
}

//----------------------------------------------------------------
//----------------			Vartotojai			------------------
//----------------------------------------------------------------
// patikrina ar vartotoju faile yra duoti string tipo duomenys
bool ArUzregistruotiVartotojuDuomenys(string vardas, string pastas, string slaptazodis)
{
	Vartotojas vartotojas[CMax];	// objektu masyvas
	int n = 0;						// duomenu skaicius

	SkaitytiVartotojus(vartotojas, n);

	for (int i = 0; i < n; i++) {
		if (vardas == vartotojas[i].GautiVarda()) {
			return true;
		}
		if (pastas == vartotojas[i].GautiPasta()) {
			return true;
		}
		if (slaptazodis == vartotojas[i].GautiSlaptazodi()) {
			return true;
		}
	}
	return false;
}

// skaito vartotoju faila i vartotoju objekto masyva
void SkaitytiVartotojus(Vartotojas vartotojas[], int & n)
{
	string vrds, psts, slptzds;		// vardas, pastas, slaptazodis - nuskaitomi is failo string tipu ir talpinami i objektu masyva
	ifstream fd(CDVartotojuDuomenys);
	for (int i = 0; !fd.eof(); i++) {
		getline(fd, vrds, '$');
		getline(fd, slptzds, '$');
		getline(fd, psts, '$');
		if (!vrds.empty() && !fd.eof()) {
			vartotojas[i].Deti(vrds, psts, slptzds);
			n++;
		}
		fd.ignore(80, '\n');
	}
	fd.close();
}

// iraso nauja vartotojo objekta i vartotoju faila
void IrasytiNaujaVartotoja(Vartotojas vartotojas)
{
	ofstream fr(CDVartotojuDuomenys, ios::app);
	fr << vartotojas.GautiVarda() + '$';
	fr << vartotojas.GautiSlaptazodi() + '$';
	fr << vartotojas.GautiPasta() + '$';
	fr << endl;
	fr.close();
}

//----------------------------------------------------------------
//----------------			Oro uostai			------------------
//----------------------------------------------------------------
// iraso nauja oro uosto objekta i orouostu faila
void IrasytiNaujaOroUosta(OroUostas oroUostas)
{
	ofstream fr(CDOroDuomenys, ios::app);
	fr << oroUostas.GautiPavadinima() + '$';
	fr << oroUostas.GautiTipa() + '$';
	fr << oroUostas.GautiAiksteliuSk() + '$';
	fr << oroUostas.GautiTakoIlgi() + '$';
	fr << endl;
	fr.close();
}

// iraso redaguotu oro uosto duomenu objekta i oro uostu faila
void IrasytiOroUostuPakeitimus(OroUostas oroUostas[], int n)
{
	ofstream fr(CDOroDuomenys);
	for (int i = 0; i < n; i++) {
		fr << oroUostas[i].GautiPavadinima() + '$';
		fr << oroUostas[i].GautiTipa() + '$';
		fr << oroUostas[i].GautiAiksteliuSk() + '$';
		fr << oroUostas[i].GautiTakoIlgi() + '$';
		fr << endl;
	}
	fr.close();
}

// skaito vartotoju faila i vartotoju objekto masyva
void SkaitytiOroUostus(OroUostas oroUostas[], int & n)
{
	string pvdnms, tps, akstlSk, tkIlg; // pavadinimas, tipas, aiksteliu skaicius, tako ilgis - nuskaitomi is failo string tipu ir talpinami i objektu masyva
	ifstream fd(CDOroDuomenys);
	for (int i = 0; !fd.eof(); i++) {
		getline(fd, pvdnms, '$');
		getline(fd, tps, '$');
		getline(fd, akstlSk, '$');
		getline(fd, tkIlg, '$');
		if (!pvdnms.empty() && !fd.eof()) {
			oroUostas[i].Deti(pvdnms, tps, akstlSk, tkIlg);
			n++;
		}
		fd.ignore(80, '\n');
	}
	fd.close();
}

// rikiuoja objektu masyva burbuliuku metodu
void RikiuotiOroUostai(OroUostas oroUostas[], int n)
{
	OroUostas pagalbinis;	// padeda keiciant duomenu vietas masyve
	for (int i = 0; i < n - 1; i++){
		for (int j = n - 1; j > i; j--){
			if (oroUostas[j].GautiPavadinima() < oroUostas[j - 1].GautiPavadinima()){
				pagalbinis = oroUostas[j];
				oroUostas[j] = oroUostas[j - 1];
				oroUostas[j - 1] = pagalbinis;
			}
		}
	}
}

// patikrinta ar duotas string tipo kintamasis yra ivestas faile
bool ArOroUostasRegistruotas(string oroPavadinimas)
{
	OroUostas oroUostas[CMax];	// objektu masyvas
	int n = 0;					// duomenu faile skaicius

	SkaitytiOroUostus(oroUostas, n);

	for (int i = 0; i < n; i++) {
		if (oroPavadinimas == oroUostas[i].GautiPavadinima()) {
			return true;
		}
	}
	return false;
}

//----------------------------------------------------------------
//---------------	Skrydziu failai   ----------------------------
//----------------------------------------------------------------
// raso pasirinkta oro uosto pavadinima i faila
void RasytiPavadinima(string OroUostoPav)
{
	ofstream fr(CDOroUostas);
	fr << OroUostoPav;
	fr.close();
}

// nuskaito irasyta oro uosto pavadinima is failo
string SkaitytiOroPavadinima()
{
	string OroUostoPav;		// oro uosto pavadinimo nuskaitymui
	ifstream fd(CDOroUostas);
	getline(fd, OroUostoPav);
	fd.close();
	return OroUostoPav;
}

// palygina duota masyva su nuskaitytu ir jeigu duotame masyve yra maziau duomenu tai istrina nesurastu duomenu (oro uosto) faila
void ArOroUostasIstrintas(OroUostas oroUostas2[], int n2)
{
	OroUostas oroUostas1[CMax]; int n1 = 0; // lyginamasis objekto masyvas ir jo duomenu kiekis
	bool nera;								// teigiama reiksme jei oro uostas nerastas
	SkaitytiOroUostus(oroUostas1, n1);
	if (n1 != n2) {
		for (int i = 0; i < n1; i++) {
			nera = true;
			for (int j = 0; j < n2; j++) {
				if (oroUostas1[i].GautiPavadinima() == oroUostas2[j].GautiPavadinima()) {
					nera = false;
				}
			}
			if (nera) {
				TrintiFaila(FailoKelias(oroUostas1[i].GautiPavadinima()));
			}
		}
	}
}

// istrina nerasto oro uosto faila
void TrintiFaila(string failoPav)
{
	ifstream fd(failoPav.c_str());
	if (fd.good()) {
		fd.close();
		remove(failoPav.c_str());
	}
	fd.close();
}

// grazina oro uosto skrydziu failo kelia
string FailoKelias(string failPav)
{
	return "Duomenys/Skrydziai/" + failPav + ".txt";
}

// patikrina ar failas yra aplanke
bool ArFailasEgzistuoja(string failoPav)
{
	ifstream fd(FailoKelias(failoPav).c_str());
	if (fd.good()) {
		fd.close();
		return true;
	}
	fd.close();
	return false;
}

// patikrina ar failas tuscias
bool ArFailasTuscias(string failoPav)
{
	ifstream fd(FailoKelias(failoPav).c_str());
	if (fd.peek() == std::ifstream::traits_type::eof()) {
		fd.close();
		return true;
	}
	fd.close();
	return false;
}

//----------------------------------------------------------------
//----------------			Skrydziai			------------------
//----------------------------------------------------------------
// iraso objekto skrydis duomenis i faila ir ji papildo
void IrasytiNaujaSkrydi(Skrydis skrydis)
{
	ofstream fr(FailoKelias(SkaitytiOroPavadinima()).c_str(), ios::app);
	fr << skrydis.GautiPradiniOroUosta() + '$';
	fr << skrydis.GautiGalutiniOroUosta() + '$';
	fr << skrydis.GautiIsvykimoLaikas() + '$';
	fr << skrydis.GautiAtvykimoLaikas() + '$';
	fr << skrydis.GautiLektuvoModelis() + '$';
	fr << skrydis.GautiAviakompanija() + '$';
	fr << skrydis.GautiSkrydzioNr() + '$';
	fr << skrydis.GautiKeleiviuSk() + '$';
	fr << endl;
	fr.close();
}

// iraso redaguotus objekto skrydis duomenis i faila
void IrasytiSkrydziuPakeitimus(Skrydis skrydis[], int n)
{
	ofstream fr(FailoKelias(SkaitytiOroPavadinima()).c_str());
	for (int i = 0; i < n; i++) {
		fr << skrydis[i].GautiPradiniOroUosta() + '$';
		fr << skrydis[i].GautiGalutiniOroUosta() + '$';
		fr << skrydis[i].GautiIsvykimoLaikas() + '$';
		fr << skrydis[i].GautiAtvykimoLaikas() + '$';
		fr << skrydis[i].GautiLektuvoModelis() + '$';
		fr << skrydis[i].GautiAviakompanija() + '$';
		fr << skrydis[i].GautiSkrydzioNr() + '$';
		fr << skrydis[i].GautiKeleiviuSk() + '$';
		fr << endl;
	}
	fr.close();
}

// nuskaito duomenis is pasirinkto oro uosto skrydziu failo i skrydzio objekto masyva
void SkaitytiSkrydzius(Skrydis skrydis[], int & n)
{
	string pOroUostas, gOroUostas, isLaikas, atLaikas, lModelis, kompanija, skrdzNr, kelSk;
	/* pradinis oro uostas, galutinis oro uostas, isvykimo laikas, atvykimo laikas, lektuvo modelis, aviakompanija, skrydziu numeris, keleiviu skaicius
	 - nuskaitomi duomenys is failo ir idedami i objekto masyva*/
	ifstream fd(FailoKelias(SkaitytiOroPavadinima()).c_str());
	for (int i = 0; !fd.eof(); i++) {
		getline(fd, pOroUostas, '$');
		getline(fd, gOroUostas, '$');
		getline(fd, isLaikas, '$');
		getline(fd, atLaikas, '$');
		getline(fd, lModelis, '$');
		getline(fd, kompanija, '$');
		getline(fd, skrdzNr, '$');
		getline(fd, kelSk, '$');
		if (!pOroUostas.empty() && !fd.eof()) {
			skrydis[i].Deti(pOroUostas, gOroUostas, isLaikas, atLaikas, lModelis, kompanija, skrdzNr, kelSk);
			n++;
		}
		fd.ignore(80, '\n');
	}
	fd.close();
}

// patikrina ar toks skrydis jau yra faile
bool ArSkrydisRegistruotas(string skrydzioNr)
{
	Skrydis skrydis[CMax];	// objekto masyvas nuskaitymui is failo
	int n = 0;				// duomenu skaicius

	if (ArFailasEgzistuoja(SkaitytiOroPavadinima())) {
		SkaitytiSkrydzius(skrydis, n);
		for (int i = 0; i < n; i++) {
			if (skrydzioNr == skrydis[i].GautiSkrydzioNr()) {
				return true;
			}
		}
	}
	return false;
}

// patikrina ar keleiviu skrendanciu lektuvu skaicius nevirsija lektuvo keleiviu vietu skaiciaus
bool LektuvoKeleiviuSkaicius(string pavadinimas, string sk)
{
	Lektuvas lektuvas[CMax];	// objekto masyvas duomenims skaityti
	int n = 0;					// duomenu skaicius
	SkaitytiLektuvus(lektuvas, n);
	for (int i = 0; i < n; i++) {
		if (pavadinimas == lektuvas[i].GautiLektuvoModeli()) {
			if (stoi(sk) > stoi(lektuvas[i].GautiKeleiviuSkaiciu())) {
				return true;
			}
		}
	}
	return false;
}

// suranda ir grazina per funkcijos parametrus duomenis reikalingus statistikai
void SurastiStatistika(StringKeitimas keitimas, string data, Skrydis skrydis[], int n, string & skrydziuSk,
	string & kelSk, string & aviakompanija, string & atOroUostas, int sk)
{
	string failoData1, failoData2;	// kintamieji dviems datoms saugoti
	int sSk = 0, kSk = 0, aSk = 0, oSk = 0; // skrydziu skaicius, keleiviu skaicius, pasikartojanciu aviakompaniju ir oro uostu skaiciai
	int max1 = 0, max2 = 0, index1 = 0, index2 = 0; // pagalbiniai skaiciavimo kintamieji
	bool surasta = false; // jeigu neranda duomenu pagal data grazina false reiksme
	for (int i = 0; i < n; i++) {
		failoData1 = skrydis[i].GautiIsvykimoLaikas();
		failoData2 = skrydis[i].GautiAtvykimoLaikas();
		if (data == failoData1.substr(0, sk) || data == failoData2.substr(0, sk)) {
			sSk++;
			kSk += stoi(skrydis[i].GautiKeleiviuSk());
			RastiDazniausia(skrydis, n, i, aSk, oSk);
			Palyginti(max1, aSk, index1, i);
			Palyginti(max2, oSk, index2, i);
			surasta = true;
		}
	}
	if (surasta) {
		skrydziuSk = to_string(sSk);
		kelSk = to_string(kSk);
		aviakompanija = skrydis[index1].GautiAviakompanija();
		atOroUostas = skrydis[index2].GautiGalutiniOroUosta();
	}
}

// grazina kiekvienos aviakompanijos ir oro uosto pasikartojanti kieki
void RastiDazniausia(Skrydis skrydis[], int n, int index, int & isViso1, int & isViso2)
{
	for (int j = 0; j < n; j++) {
		if (skrydis[j].GautiAviakompanija() == skrydis[index].GautiAviakompanija()) {
			isViso1++;
		}
		if (skrydis[j].GautiGalutiniOroUosta() == skrydis[index].GautiGalutiniOroUosta() && skrydis[index].GautiGalutiniOroUosta() != SkaitytiOroPavadinima()) {
			isViso2++;
		}
	}
}

// palygina skaicius ir juos grazina per parametrus
void Palyginti(int & max, int & sk, int & index, int i)
{
	if (max < sk) {
		max = sk;
		index = i;
	}
	sk = 0;
}

//----------------------------------------------------------------
//----------------			Lektuvai			------------------
//----------------------------------------------------------------
// patikrina ar lektuvo modelis yra irasytas i duomenu faila
bool ArLektuvasRegistruotas(string lektuvoModelis)
{
	Lektuvas lektuvas[CMax];	// objekto masyvas skaityti duomenims
	int n = 0;					// duomenu skaicius

	SkaitytiLektuvus(lektuvas, n);

	for (int i = 0; i < n; i++) {
		if (lektuvoModelis == lektuvas[i].GautiLektuvoModeli()) {
			return true;
		}
	}
	return false;
}

// iraso lektuvo objekto duomenis i faila
void IrasytiNaujaLektuva(Lektuvas lektuvas) 
{
	ofstream fr(CDLektuvuDuomenys, ios::app);
	fr << lektuvas.GautiLektuvoModeli() + '$';
	fr << lektuvas.GautiKeleiviuSkaiciu() + '$';
	fr << lektuvas.GautiSparnuIlgi() + '$';
	fr << lektuvas.GautiMase() + '$';
	fr << lektuvas.GautiLektuvoIlgi() + '$';
	fr << endl;
	fr.close();
}

// nuskaito lektuvu duomenis ir juos talpina i objekto masyva
void SkaitytiLektuvus(Lektuvas lektuvas[], int & n) 
{
	string lektuvoModelis, keleiviuSk, sparnuIlgis, mase, lektuvoIlgis; // kintamieji talpinti duomenims i objekto masyva
	ifstream fd(CDLektuvuDuomenys);
	for (int i = 0; !fd.eof(); i++) {
		getline(fd, lektuvoModelis, '$');
		getline(fd, keleiviuSk, '$');
		getline(fd, sparnuIlgis, '$');
		getline(fd, mase, '$');
		getline(fd, lektuvoIlgis, '$');
		if (!lektuvoModelis.empty() && !fd.eof()) {
			lektuvas[i].Deti(lektuvoModelis, keleiviuSk, sparnuIlgis, mase, lektuvoIlgis);
			n++;
		}
		fd.ignore(80, '\n');
	}
	fd.close();
}

// iraso redaguotus lektuvo objekto masyvo duomenis i faila
void IrasytiLektuvuPakeitimus(Lektuvas lektuvas[],  int n)
{
	ofstream fr(CDLektuvuDuomenys);
	for (int i = 0; i < n; i++) {
		fr << lektuvas[i].GautiLektuvoModeli() + '$';
		fr << lektuvas[i].GautiKeleiviuSkaiciu() + '$';
		fr << lektuvas[i].GautiSparnuIlgi() + '$';
		fr << lektuvas[i].GautiMase() + '$';
		fr << lektuvas[i].GautiLektuvoIlgi() + '$';
		fr << endl;
	}
	fr.close();
}