/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class raisin {
        MaterialsReq[] = {{"raisin",2}};
        MaterialsGive[] = {{"vin",1}};
        Text = "Fabrication de vin";
        //ScrollText = "Process Oil";
        NoLicenseCost = 0;
    };

    class sucre {
        MaterialsReq[] = {{"betterave",1}};
        MaterialsGive[] = {{"sucre",1}};
        Text = "Pressage des Betteraves";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 0;
    };
    
    class vodka {
        MaterialsReq[] = {{"sucre",1}};
        MaterialsGive[] = {{"vodka",1}};
        Text = "Distillation de Vodka";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 0;
    };

    class cigare {
        MaterialsReq[] = {{"tabac_seche",1}};
        MaterialsGive[] = {{"cigare",1}};
        Text = "Roulage de Cigare";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 0;
    };

    class petrole_rafine {
        MaterialsReq[] = {{"petrole_brut",1}};
        MaterialsGive[] = {{"petrole_rafine",1}};
        Text = "STR_Process_petrole_rafine";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 0;
    };

    class essence {
        MaterialsReq[] = {{"petrole_rafine",1}};
        MaterialsGive[] = {{"essence",1}};
        Text = "STR_Process_essence";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 0;
    };

    class fonte {
        MaterialsReq[] = {{"fer",1},{"carbone",1}};
        MaterialsGive[] = {{"fonte_refined",1}};
        Text = "STR_Process_fonte";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 0;
    };

    class cristaux {
        MaterialsReq[] = {{"cristaux_unrefined",1}};
        MaterialsGive[] = {{"cristaux_refined",1}};
        Text = "STR_Process_cristaux";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 0;
    };

    class verre {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_verre";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 0;
    };

    class fabplatine {
        MaterialsReq[] = {{"platine_uncut",1}};
        MaterialsGive[] = {{"platine_cut",1}};
        Text = "STR_Process_fabplatine";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };
	
	class fabbijoux {
        MaterialsReq[] = {{"platine_cut",1}};
        MaterialsGive[] = {{"bijouxplatine",1}};
        Text = "Fabrication de Bijoux en Platine";
        NoLicenseCost = 0;
    };

	class bois {
        MaterialsReq[] = {{"bois",1}};
        MaterialsGive[] = {{"planche_bois",1}};
        Text = "STR_Process_bois";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };

	class excrements {
        MaterialsReq[] = {{"excrements",1}};
        MaterialsGive[] = {{"sacs_de_fumiers",1}};
        Text = "STR_Process_excrements";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };

    class bouteillestjames {
        MaterialsReq[] = {{"tonneaurhum",1}};
        MaterialsGive[] = {{"bouteillestjames",5}};
        Text = "STR_Process_bouteille_saint_james_legal";
        NoLicenseCost = 0;
    };
	
	class contrefaconrhum {
        MaterialsReq[] = {{"tonneaurhum",1}};
        MaterialsGive[] = {{"contrefaconrhum",5}};
        Text = "STR_Process_bouteille_saint_james_illegal";
        NoLicenseCost = 0;
    };

     class soufre {
        MaterialsReq[] = {{"soufrepur",1}};
        MaterialsGive[] = {{"soufre",1}};
        Text = "STR_Process_soufre";
        NoLicenseCost = 0;
    };

     class acier {
        MaterialsReq[] = {{"carbone",1},{"fer_lingot",1}};
        MaterialsGive[] = {{"acier",1}};
        Text = "STR_Process_acier";
        NoLicenseCost = 0;
    };

     class carbone {
        MaterialsReq[] = {{"charbon",1}};
        MaterialsGive[] = {{"carbone",1}};
        Text = "STR_Process_charbon";
        NoLicenseCost = 0;
    };

     class plastic {
        MaterialsReq[] = {{"petrole_rafine",1}};
        MaterialsGive[] = {{"plastic",4}};
        Text = "STR_Process_plastic";
        NoLicenseCost = 0;
    };


	// illegal

	class meth {
        MaterialsReq[] = {{"medicaments",1}};
        MaterialsGive[] = {{"meth",1}};
        Text = "STR_Process_meth";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };

	class uranium_instable {
        MaterialsReq[] = {{"uranium_pur",1}};
        MaterialsGive[] = {{"uranium_instable",1}};
        Text = "STR_Process_uranium_instable";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };

	class uranium_stable {
        MaterialsReq[] = {{"uranium_instable",1}};
        MaterialsGive[] = {{"uranium_stable",1}};
        Text = "STR_Process_uranium_stable";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };

	class billet {
        MaterialsReq[] = {{"goldbar",1}};
        MaterialsGive[] = {{"billet_bank",1}};
        Text = "STR_Process_billet";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };

	class canabis {
        MaterialsReq[] = {{"canabisnt",1}};
        MaterialsGive[] = {{"canabist",1}};
        Text = "STR_Process_canabis";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 0;
    };
};
