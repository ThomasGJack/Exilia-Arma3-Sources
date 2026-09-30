class CfgPatches
{
	class exilia_bouffe
	{
		units[]=
		{
			""
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class cfgMagazines
{
	class CA_Magazine;
	class Item_Core :CA_Magazine
	{
		mass=1;
		author="popoff";
		scope=2;
	};


	class allege: Item_Core
	{
		displayName="Fromage Allegé";
		model="\exilia_bouffe\3d\allege_item.p3d";
		picture ="\exilia_bouffe\textures\fauxcamembertpasbon.paa";
		mass=5;
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "15";
	    };
	};

	class apericube_item: Item_Core
	{
		displayName="Apericube";
		model="\exilia_bouffe\3d\apericube_item.p3d";
		picture ="\exilia_bouffe\textures\apericube.paa";
		class KSS
	    {
	        delay = 5;
	        type = "food";
	        add = "7";
	    };
	};
	
	class aspergeboite_item: Item_Core
	{
		displayName="Asperge en boite";
		model="\exilia_bouffe\3d\aspergeboite_item.p3d";
		picture ="\exilia_bouffe\textures\aspergesboite.paa";
		mass=2;
		class KSS
	    {
	        delay = 10;
	        type = "food";
	        add = "10";
	    };
	};
	
	class aspergeconserve_item: Item_Core
	{
		displayName="Asperge en conserve";
		model="\exilia_bouffe\3d\aspergeconserve_item.p3d";
		picture ="\exilia_bouffe\textures\asperges.paa";
		mass=2;
		class KSS
	    {
	        delay = 11;
	        type = "food";
	        add = "10";
	    };
	};
	
	class cancoillotte_item: Item_Core
	{
		displayName="Cancoillotte";
		model="\exilia_bouffe\3d\cancoillotte_item.p3d";
		picture ="\exilia_bouffe\textures\cancoillote.paa";
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "35";
	    };
	};
	
	class carreest_item: Item_Core
	{
		displayName="carre est";
		model="\exilia_bouffe\3d\carreest_item.p3d";
		picture ="\exilia_bouffe\textures\carreest.paa";
		mass=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "25";
	    };
	};
	
	class chabichou_item: Item_Core
	{
		displayName="Chabichou";
		model="\exilia_bouffe\3d\chabichou_item.p3d";
		picture ="\exilia_bouffe\textures\charichou.paa";
		class KSS
	    {
	        delay = 10;
	        type = "food";
	        add = "15";
	    };
	};
	
	class champi_item: Item_Core
	{
		displayName="Champignons en boite";
		model="\exilia_bouffe\3d\champi_item.p3d";
		picture ="\exilia_bouffe\textures\champi.paa";
		mass=2;
		class KSS
	    {
	        delay = 12;
	        type = "food";
	        add = "27";
	    };
	};
	
	class chavroux_item: Item_Core
	{
		displayName="Chavroux";
		model="\exilia_bouffe\3d\chavroux_item.p3d";
		picture ="\exilia_bouffe\textures\chavrou.paa";
		class KSS
	    {
	        delay = 7;
	        type = "food";
	        add = "7";
	    };
	};
	
	class coeurartichautboite_item: Item_Core
	{
		displayName="Coeur d'artichaut en boite";
		model="\exilia_bouffe\3d\coeurartichautboite_item.p3d";
		picture ="\exilia_bouffe\textures\artichautsboite.paa";
		mass=2;
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "18";
	    };
	};
	
	class coeurartichaut_item: Item_Core
	{
		displayName="Coeur d'artichaut";
		model="\exilia_bouffe\3d\coeurartichaut_item.p3d";
		picture ="\exilia_bouffe\textures\artichauts.paa";
		mass=2;
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "18";
	    };
	};
	
	class coeurpalmier_item: Item_Core
	{
		displayName="Coeur de palmier";
		model="\exilia_bouffe\3d\coeurpalmier_item.p3d";
		picture ="\exilia_bouffe\textures\coeurpalmier.paa";
		mass=3;
		class KSS
	    {
	        delay = 30;
	        type = "food";
	        add = "7";
	    };
	};
	
	class doublecreme_item: Item_Core
	{
		displayName="Double creme";
		model="\exilia_bouffe\3d\doublecreme_item.p3d";
		picture ="\exilia_bouffe\textures\coradouble.paa";
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "30";
	    };
	};
	
	class fausseraclette_item: Item_Core
	{
		displayName="Fromage a raclette";
		model="\exilia_bouffe\3d\fausseraclette_item.p3d";
		picture ="\exilia_bouffe\textures\raclettedemerde.paa";
		mass=3;
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "22";
	    };
	};
	
	class ficello_item: Item_Core
	{
		displayName="Ficello";
		model="\exilia_bouffe\3d\ficello_item.p3d";
		picture ="\exilia_bouffe\textures\ficello.paa";
		class KSS
	    {
	        delay = 7;
	        type = "food";
	        add = "6";
	    };
	};
	
	class fourme_item: Item_Core
	{
		displayName="Fourme d'Ambert";
		model="\exilia_bouffe\3d\fourme_item.p3d";
		picture ="\exilia_bouffe\textures\fourme.paa";
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "35";
	    };
	};
	
	class fromagepizza_item: Item_Core
	{
		displayName="Fromage à pizza";
		model="\exilia_bouffe\3d\fromagepizza_item.p3d";
		picture ="\exilia_bouffe\textures\entremontpizza.paa";
		class KSS
	    {
	        delay = 10;
	        type = "food";
	        add = "19";
	    };
	};
	
	class grande_bouteille_eau_item: Item_Core
	{
		displayName="Bouteille d'eau (1,5L)";
		model="\exilia_bouffe\3d\grande_bouteille_eau_item.p3d";
		picture ="\exilia_bouffe\textures\bouteille_eau.paa";
		mass=4;
		class KSS
	    {
	        delay = 15;
	        type = "drink";
	        add = "75";
	    };
	};
	
	class gruyererape_item: Item_Core
	{
		displayName="Gruyère ràpé";
		model="\exilia_bouffe\3d\gruyererape_item.p3d";
		picture ="\exilia_bouffe\textures\gruyererape.paa";
		class KSS
	    {
	        delay = 8;
	        type = "food";
	        add = "9";
	    };
	};
	
	class haricotsvertsDaucy_item: Item_Core
	{
		displayName="Haricots Verts Daucy";
		model="\exilia_bouffe\3d\haricotsverts_item.p3d";
		picture ="\exilia_bouffe\textures\haricotverts.paa";
		mass=2;
		class KSS
	    {
	        delay = 19;
	        type = "food";
	        add = "6";
	    };
	};
	
	class haricotsvertsAuchan_item: Item_Core
	{
		displayName="Haricots Verts Auchan";
		model="\exilia_bouffe\3d\haricotsverts2_item.p3d";
		picture ="\exilia_bouffe\textures\haricotverts2.paa";
		mass=2;
		class KSS
	    {
	        delay = 19;
	        type = "food";
	        add = "6";
	    };
	};
	
	class kiri_item: Item_Core
	{
		displayName="Kiri";
		model="\exilia_bouffe\3d\kiri_item.p3d";
		picture ="\exilia_bouffe\textures\kiri.paa";
		class KSS
	    {
	        delay = 5;
	        type = "food";
	        add = "3";
	    };
	};
	
	class lentilles_item: Item_Core
	{
		displayName="Lentilles";
		model="\exilia_bouffe\3d\lentilles_item.p3d";
		picture ="\exilia_bouffe\textures\lentilles.paa";
		mass=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "35";
	    };
	};
	
	class macedoine_item: Item_Core
	{
		displayName="Macédoine de Légumes";
		model="\exilia_bouffe\3d\macedoine_item.p3d";
		picture ="\exilia_bouffe\textures\macedoinelegume.paa";
		mass=2;
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "15";
	    };
	};
	
	class maxi_bouteille_eau_special_john_item: Item_Core
	{
		displayName="Trop grand bouteille d'eau";
		model="\exilia_bouffe\3d\maxi_bouteille_eau_special_john_item.p3d";
		picture ="\exilia_bouffe\textures\bouteille_eau.paa";
		mass=40;
		class KSS
	    {
	        delay = 200;
	        type = "drink";
	        add = "100";
	    };
	};
	
	class ortolan_item: Item_Core
	{
		displayName="l'Ortolan";
		model="\exilia_bouffe\3d\ortolan_item.p3d";
		picture ="\exilia_bouffe\textures\ortolan.paa";
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "35";
	    };
	};
	
	class parmesan_item: Item_Core
	{
		displayName="Parmesan";
		model="\exilia_bouffe\3d\parmesan_item.p3d";
		picture ="\exilia_bouffe\textures\parmesan.paa";
		class KSS
	    {
	        delay = 25;
	        type = "food";
	        add = "20";
	    };
	};
	
	class peteuxblanc_item: Item_Core
	{
		displayName="Boite de peteux blanc Auchan";
		model="\exilia_bouffe\3d\peteuxblanc_item.p3d";
		picture ="\exilia_bouffe\textures\peteuxblanc.paa";
		class KSS
	    {
	        delay = 5;
	        type = "food";
	        add = "35";
	    };
	};
	
	class peteuxblanc2_item: Item_Core
	{
		displayName="Boite de peteux blanc";
		model="\exilia_bouffe\3d\peteuxblanc2_item.p3d";
		picture ="\exilia_bouffe\textures\peteuxblanc2.paa";
		class KSS
	    {
	        delay = 5;
	        type = "food";
	        add = "35";
	    };
	};
	
	class peteuxrouge_item: Item_Core
	{
		displayName="Boite de peteux rouge";
		model="\exilia_bouffe\3d\peteuxrouge_item.p3d";
		picture ="\exilia_bouffe\textures\peteuxrouge.paa";
		class KSS
	    {
	        delay = 5;
	        type = "food";
	        add = "35";
	    };
	};
	
	class petitbrie_item: Item_Core
	{
		displayName="Petit Brie";
		model="\exilia_bouffe\3d\petitbrie_item.p3d";
		picture ="\exilia_bouffe\textures\petitbrie.paa";
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "35";
	    };
	};
	
	class petite_bouteille_eau_item: Item_Core
	{
		displayName="Bouteille d'eau (33cl)";
		model="\exilia_bouffe\3d\petite_bouteille_eau_item.p3d";
		picture ="\exilia_bouffe\textures\bouteille_eau.paa";
		class KSS
	    {
	        delay = 4;
	        type = "drink";
	        add = "30";
	    };
	};
	
	class petitspois_item: Item_Core
	{
		displayName="Petits Pois";
		model="\exilia_bouffe\3d\petitspois_item.p3d";
		picture ="\exilia_bouffe\textures\petitpoids.paa";
		mass=2;
		class KSS
	    {
	        delay = 25;
	        type = "food";
	        add = "11";
	    };
	};
	
	class poirot_item: Item_Core
	{
		displayName="poireaux Géant Vert";
		model="\exilia_bouffe\3d\poirot_item.p3d";
		picture ="\exilia_bouffe\textures\poirot.paa";
		mass=2;
		class KSS
	    {
	        delay = 19;
	        type = "food";
	        add = "18";
	    };
	};
	
	class poischiches_item: Item_Core
	{
		displayName="Pois Chiches";
		model="\exilia_bouffe\3d\poischiches_item.p3d";
		picture ="\exilia_bouffe\textures\poischiches.paa";
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "20";
	    };
	};
	
	class poussesojavegan_item: Item_Core
	{
		displayName="Soja Bio";
		model="\exilia_bouffe\3d\poussesojavegan_item.p3d";
		picture ="\exilia_bouffe\textures\trucdegeuvegan.paa";
		mass=5;
		class KSS
	    {
	        delay = 90;
	        type = "food";
	        add = "3";
	    };
	};
	
	class president_item: Item_Core
	{
		displayName="Camembert Présient";
		model="\exilia_bouffe\3d\president_item.p3d";
		picture ="\exilia_bouffe\textures\president.paa";
		mass=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "35";
	    };
	};
	
	class presidentemental_item: Item_Core
	{
		displayName="Emmental Président";
		model="\exilia_bouffe\3d\presidentemental_item.p3d";
		picture ="\exilia_bouffe\textures\crocemmental.paa";
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "25";
	    };
	};
	
	class ratatouille_item: Item_Core
	{
		displayName="Ratatouille en boite";
		model="\exilia_bouffe\3d\ratatouille_item.p3d";
		picture ="\exilia_bouffe\textures\ratatouille.paa";
		mass=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "20";
	    };
	};
	
	class ratatouillebocal_item: Item_Core
	{
		displayName="Ratatouille en bocal";
		model="\exilia_bouffe\3d\ratatouillebocal_item.p3d";
		picture ="\exilia_bouffe\textures\ratatouillebocal.paa";
		mass=2;
		class KSS
	    {
	        delay = 20;
	        type = "food";
	        add = "20";
	    };
	};
	
	class roblochon_item: Item_Core
	{
		displayName="Roblochon de Savoie";
		model="\exilia_bouffe\3d\roblochon_item.p3d";
		picture ="\exilia_bouffe\textures\roblechon.paa";
		mass=3;
		class KSS
	    {
	        delay = 40;
	        type = "food";
	        add = "60";
	    };
	};
	
	class saintagur_item: Item_Core
	{
		displayName="Saint Agur";
		model="\exilia_bouffe\3d\saintagur_item.p3d";
		picture ="\exilia_bouffe\textures\saintaugure.paa";
		mass=4;
		class KSS
	    {
	        delay = 40;
	        type = "food";
	        add = "55";
	    };
	};
	
	class tomatebocal_item : Item_Core
	{
		displayName="Sauce tomate pur tomates fraiches";
		model="\exilia_bouffe\3d\tomatebocal_item.p3d";
		picture ="\exilia_bouffe\textures\saucetomate.paa";
		mass=3;
		class KSS
	    {
	        delay = 15;
	        type = "food";
	        add = "7";
	    };
	};
	
	class tomateconserve_item: Item_Core
	{
		displayName="Tomates pellées au jus";
		model="\exilia_bouffe\3d\tomateconserve_item.p3d";
		picture ="\exilia_bouffe\textures\tomatenboite.paa";
		mass=2;
		class KSS
	    {
	        delay = 16;
	        type = "food";
	        add = "7";
	    };
	};
};
