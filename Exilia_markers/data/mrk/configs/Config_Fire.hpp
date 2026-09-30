
class CfgFire {

	tempMiniAvantLancement = 240;			// temp minimum avant le lancement du script suite au demarage
    nombreFoyerMax = 22;                    // Nombre maximum de feu
    tempMinEntreChaqueFeu = 900;             // temp minimum entre chaque incendie
    tempMaxEntreChaqueFeu = 7200;             // temp maximum entre chaque incendie
    temppropagation = 13;                  // Temp entre chaque propagation de foyer
    tempExtinctionEntreChaqueFeu = 8;     // Temp d'extinction entre chaque foyer
    tempAvantExtinction = 1200;               // Temp a attendre une fois la propagation fini pour que le feu s'eteigne seul
    rayonPropagation = 25;                  // rayon max de propagation du feu
	annonceIncediePompier = 1;				// hint qui indique au pompier un incendie
	annonceIncendiePublic = 0;				// hint qui annonce au joueurs un incendie
    markerClass = "mil_warning";            // Classname du marker
    markerText = "INCENDIE EN COURS : %1";  // Texte du marker (%1 = mapgridpos)
    markerSize[] = {1.2,1.2};               // taille du marker
    markerColor = "ColorRed";               // couleur du marker
    numberFireMaxEnMemeTemp = 1;            // nombre de depart de feu maximum en meme temp NE PAS TOUCHER LAISSE A 1
    independantMin = 1;                     // nombre de pompier minimum pour lancer un feux
	rayonCity  = 5000;                      // Rayon maximum ou le feux peux ce creer autour des villes
};