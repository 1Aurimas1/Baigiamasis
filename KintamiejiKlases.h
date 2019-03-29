#pragma once

#include <msclr\marshal_cppstd.h>
#include <string>

using namespace std;
using namespace msclr::interop;

const int CMax = 100;	// duomenu maksimumas

const char CDVartotojuDuomenys[] = "Duomenys/VartotojuDuomenys.txt"; // vartotoju duomenu saugojimo vieta
const char CDOroDuomenys[] = "Duomenys/OroUostuDuomenys.txt"; // oro uostu duomenu saugojimo vieta
const char CDOroUostas[] = "Duomenys/OroUostoPavadinimas.txt"; // oro uosto pavadinimo saugojimo vieta
const char CDLektuvuDuomenys[] = "Duomenys/LektuvuDuomenys.txt"; // lektuvo duomenu saugojimo vieta

// klase skirta konvertuoti string i std::string ar i system::string
class StringKeitimas
{
public:// keicia String^ i string
	string StringToStd(System::String^ s)
	{
		string pakeistas = marshal_as<std::string>(s);
		return pakeistas;
	}
	// keicia string i String^
	System::String^ StringToSystem(string s)
	{
		System::String^ pakeistas = marshal_as<System::String^>(s);
		return pakeistas;
	}
};

class Vartotojas
{
private:
	string vardas, ePastas, slaptazodis; // kintamieji duomenu talpinimui; ePastas - elektroninis pastas
public:
	// gautas objekto reiksmes priskiria klases kintamiesiems
	void Deti(string vrds, string psts, string slptzds)
	{
		vardas = vrds;
		ePastas = psts;
		slaptazodis = slptzds;
	}
	// likusios funkcijos grazina kintamuju reiksmes
	string GautiVarda()
	{
		return vardas;
	}
	string GautiPasta()
	{
		return ePastas;
	}
	string GautiSlaptazodi()
	{
		return slaptazodis;
	}
};

class OroUostas
{
private:
	string pavadinimas, tipas, aiksteliuSk, takoIlgis; // kintamieji duomenu talpinimui
public:
	// gautas objekto reiksmes priskiria klases kintamiesiems
	void Deti(string pvds, string tps, string akstlSk, string takIlg) {
		pavadinimas = pvds;
		tipas = tps;
		aiksteliuSk = akstlSk;
		takoIlgis = takIlg;
	}
	// likusios funkcijos grazina kintamuju reiksmes
	string GautiPavadinima() {
		return pavadinimas;
	}
	string GautiTipa() {
		return tipas;
	}
	string GautiAiksteliuSk() {
		return aiksteliuSk;
	}
	string GautiTakoIlgi() {
		return takoIlgis;
	}
};

class Skrydis
{
private:
	string pradinisOroUostas, galutinisOroUostas, isvykimoLaikas, // kintamieji duomenu talpinimui
		atvykimoLaikas, lektuvoModelis, keleiviuSk, aviakompanija, skrydzioNr; // keleiviuSk - skaicius skrendanciu keleiviu lektuvu, skrydzioNr - skrydzio numeris
public:
	// gautas objekto reiksmes priskiria klases kintamiesiems
	void Deti(string pOroUostas, string gOroUostas, string isLaikas, 
		string atLaikas, string lModelis, string kompanija, string skrdzNr, string kelSk) {
		pradinisOroUostas = pOroUostas;
		galutinisOroUostas = gOroUostas;
		isvykimoLaikas = isLaikas;
		atvykimoLaikas = atLaikas;
		lektuvoModelis = lModelis;
		keleiviuSk = kelSk;
		aviakompanija = kompanija;
		skrydzioNr = skrdzNr;
	}
	// likusios funkcijos grazina kintamuju reiksmes
	string GautiPradiniOroUosta() {
		return pradinisOroUostas;
	}
	string GautiGalutiniOroUosta() {
		return galutinisOroUostas;
	}
	string GautiIsvykimoLaikas() {
		return isvykimoLaikas;
	}
	string GautiAtvykimoLaikas() {
		return atvykimoLaikas;
	}
	string GautiLektuvoModelis() {
		return lektuvoModelis;
	}
	string GautiKeleiviuSk() {
		return keleiviuSk;
	}
	string GautiAviakompanija() {
		return aviakompanija;
	}
	string GautiSkrydzioNr() {
		return skrydzioNr;
	}
};

class Lektuvas
{
private:
	string lektuvoModelis, keleiviuSk, sparnuIlgis, mase, lektuvoIlgis; // kintamieji duomenu talpinimui; keleiviuSk - skaicius lektuve telpanciu keleiviu
public:
	// gautas objekto reiksmes priskiria klases kintamiesiems
	void Deti(string modelis, string kelSk, string sprnIlgis, string mas, string lekIlgis) {
		lektuvoModelis = modelis;
		keleiviuSk = kelSk;
		sparnuIlgis = sprnIlgis;
		mase = mas;
		lektuvoIlgis = lekIlgis;
	}
	// likusios funkcijos grazina kintamuju reiksmes
	string GautiLektuvoModeli() {
		return lektuvoModelis;
	}
	string GautiKeleiviuSkaiciu() {
		return keleiviuSk;
	}
	string GautiSparnuIlgi() {
		return sparnuIlgis;
	}
	string GautiMase() {
		return mase;
	}
	string GautiLektuvoIlgi() {
		return lektuvoIlgis;
	}
};