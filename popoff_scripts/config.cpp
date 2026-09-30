class CfgPatches
{
	class popoff_scripts
	{
		name = "popoff_scripts";
		author = "Popoff1888";
		url = "http://CommunityWork.fr";
        units[] = {};
        weapons[] = {};
		requiredAddons[] = {};
	};
};

class CfgFunctions
{
	class popoff_scripts
	{
		tag = "popoff";

		class ATM {
			file = "popoff_scripts\ATM";
			class atmMenu {};
			class atmMenuUpdate {};
			class atmTransfert {};
			class numberText {};
		};

		class Scripts
		{
			file = "popoff_scripts\scripts";

			class alertenuclaire {};
			class test_script	{};
			class ouvrirsasentree {};
			class ouvrirsasPC {};
			class ouvriratm {};
			class fermeratm {};
			class monter_montecharge_carshop {};
			class descendre_montecharge_carshop {};
			class pisser_carshop {};
			class chier_carshop {};
			class pisser_banque {};
			class chier_banque {};
			class posermalette {};
			class portermalette {};
			class dechargeratm {};
			class rechargeratm {};
			class numberText {};
			class compteratm {};
			class retraitmalettebanque {};
			class deposmalettebanque {};
			class rechargerfourgon {};
			class dechargerfourgon {};
			class percercoffre {};
			class placerperceuse {};
			class crochetergrille1 {};
			class crochetergrille2 {};
			class crochetergrille3 {};
			class crocheterporte1 {};
			class crocheterporte2 {};
			class crocheterabrisatm {};
			class retirerperceuse {};
			class ouvrircoffreperce {};
			class volercashbanque {};
			class voleratm {};
			class forceratm {};
			class fracturermalette {};
			class forcerfourgon {};
			class argentfourgon {};
			class couperalarme {};
			class volercashguichet {};
			class boucherieMenu {};
			class vente_boucherie {};
			class achat_boucherie {};
			class depeucervache {};
			class matierepremiereMenu {};
			class matierepremiereMenu2 {};
			class achat_cuivre {};
			class vente_cuivre {};
			class achat_fer {};
			class vente_fer {};
			class achat_argent {};
			class vente_argent {};
			class achat_plastic {};
			class vente_plastic {};
			class achat_or {};
			class vente_or {};
		};
	};
};
#include "dialog\MasterHandler.hpp"
