/*
*	Script: Telephone Iphone
*	Autheur: Nirawin29 (John Vazquez)
*
*	Description: Fonction Pour enlever tous ce qu'il y'a sur le telephone sauf le background
*
*	Parametres:	Aucun
*
*	Return: Rien
*
*/
#include "Defines.hpp"
ctrlEnable[GLOBAL_BTN_HOME,true];
ctrlShow[MAIN_BTN_AFFICHAGE_APPEL,false];
ctrlShow[MAIN_BTN_APPEL,false];
ctrlShow[MAIN_BTN_AFFICHAGE_MESSAGE,false];
ctrlShow[MAIN_BTN_MESSAGE,false];
ctrlShow[MAIN_BTN_AFFICHAGE_SYNC_DATA,false];
ctrlShow[MAIN_BTN_SYNC_DATA,false];
ctrlShow[MAIN_BTN_AFFICHAGE_SETTINGS,false];
ctrlShow[MAIN_BTN_SETTINGS,false];
ctrlShow[MAIN_BTN_AFFICHAGE_MAP,false];
ctrlShow[MAIN_BTN_MAP,false];
ctrlShow[MAIN_BTN_AFFICHAGE_CONTACT,false];
ctrlShow[MAIN_BTN_CONTACT,false];
ctrlShow[MAIN_BTN_AFFICHAGE_COMPTE,false];
ctrlShow[MAIN_BTN_COMPTE,false];

ctrlShow[SETINGS_BACKGROUND,false];
ctrlShow[SETINGS_SLIDER_1,false];
ctrlShow[SETTINGS_TEXT_NAME,false];
ctrlShow[SETTINGS_TEXT_INITIAL,false];
ctrlShow[SETINGS_SLIDER_2,false];
ctrlShow[SETINGS_SLIDER_3,false];
ctrlShow[COMBO_TEXT_4,false];
ctrlShow[COMBO_TEXT_5,false];
ctrlShow[COMBO_TEXT_6,false];
ctrlShow[SETINGS_TEXT_1,false];
ctrlShow[SETINGS_TEXT_2,false];
ctrlShow[SETINGS_TEXT_3,false];
ctrlShow[SETINGS_TEXT_4,false];
ctrlShow[SETINGS_TEXT_5,false];
ctrlShow[SETINGS_TEXT_6,false];
ctrlShow[SETINGS_EDIT_1,false];
ctrlShow[SETINGS_EDIT_2,false];
ctrlShow[SETINGS_EDIT_3,false];

ctrlShow[FRAME_MAP,false];

ctrlShow[COMPTE_BACKGROUND,false];
ctrlShow[COMPTE_TEXT_MONTANT,false];
ctrlShow[COMPTE_EDIT_MONTANT,false];
ctrlShow[COMPTE_COMBO_PLAYERLIST,false];
ctrlShow[COMPTE_BTN_VALIDER,false];

ctrlShow[BOURSE_BACKGROUND,false];
ctrlShow[BOURSE_LISTBOX_ITEMS,false];
ctrlShow[BOURSE_BTN_REFRESH,false];
ctrlShow[BOURSE_TEXT_ACHAT,false];
ctrlShow[BOURSE_TEXT_MONTANT_ACHAT,false];

ctrlShow[MESSAGE_MAIN_BACKGROUND,false];
ctrlShow[MESSAGE_MAIN_BTN_NEW_MESSAGE,false];
ctrlShow[MESSAGE_MAIN_BTN_REPLY_MESSAGE,false];
ctrlShow[MESSAGE_MAIN_BTN_ADD_CONTACT,false];
ctrlShow[MESSAGE_MAIN_BTN_SUPR_MESSAGE,false];
ctrlShow[MESSAGE_MAIN_LISTBOX_HISTORY_MESSAGE,false];
ctrlShow[MESSAGE_MAIN_TEXT_TITTLE,false];
ctrlShow[MESSAGE_MAIN_STRUCTUREDTEXT_MESSAGE_VIEW,false];
ctrlShow[MESSAGE_MAIN_BTN_COONTACT,false];

ctrlShow[MESSAGE_CONTACT_BACKGROUND,false];
ctrlShow[MESSAGE_CONTACT_LISTBOX_CONTACT,false];
ctrlShow[MESSAGE_CONTACT_TEXT_NAME,false];
ctrlShow[MESSAGE_CONTACT_TEXT_INITIAL,false];
ctrlShow[MESSAGE_CONTACT_TEXT_NUMBER,false];
ctrlShow[MESSAGE_CONTACT_BTN_MESSAGE,false];
ctrlShow[MESSAGE_CONTACT_BTN_APPEL,false];
ctrlShow[MESSAGE_CONTACT_BTN_CONTACT_SUPR,false];
ctrlShow[MESSAGE_CONTACT_BTN_CONTACT_ADD,false];
ctrlShow[MESSAGE_CONTACT_BTN_ANNULER,false];

ctrlShow[MESSAGE_SEND_BACKGROUND,false];
ctrlShow[MESSAGE_SEND_EDIT_MESSAGE,false];
ctrlShow[MESSAGE_SEND_EDIT_NUMBER,false];
ctrlShow[MESSAGE_SEND_BTN_ENVOIEMESSAGE,false];
ctrlShow[MESSAGE_SEND_BTN_ANNULER,false];

ctrlShow[MESSAGE_ADDCONTACT_BACKGROUND,false];
ctrlShow[MESSAGE_ADDCONTACT_BTN_ANNULER,false];
ctrlShow[MESSAGE_ADDCONTACT_BTN_OK,false];
ctrlShow[MESSAGE_ADDCONTACT_EDIT_NAME,false];
ctrlShow[MESSAGE_ADDCONTACT_EDIT_NUMBER,false];

ctrlShow[APPEL_CLAVIER_BACKGROUND,false];
ctrlShow[APPEL_CLAVIER_BTN_1,false];
ctrlShow[APPEL_CLAVIER_BTN_2,false];
ctrlShow[APPEL_CLAVIER_BTN_3,false];
ctrlShow[APPEL_CLAVIER_BTN_4,false];
ctrlShow[APPEL_CLAVIER_BTN_5,false];
ctrlShow[APPEL_CLAVIER_BTN_6,false];
ctrlShow[APPEL_CLAVIER_BTN_7,false];
ctrlShow[APPEL_CLAVIER_BTN_8,false];
ctrlShow[APPEL_CLAVIER_BTN_9,false];
ctrlShow[APPEL_CLAVIER_BTN_0,false];
ctrlShow[APPEL_CLAVIER_BTN_ETOILE,false];
ctrlShow[APPEL_CLAVIER_BTN_DIESE,false];
ctrlShow[APPEL_CLAVIER_BTN_APPEL,false];
ctrlShow[APPEL_CLAVIER_BTN_ERASE,false];
ctrlShow[APPEL_CLAVIER_BTN_CONTACT,false];
ctrlShow[APPEL_CLAVIER_TEXT_NUMBER,false];

ctrlShow[APPEL_DENIED_BACKGROUND,false];
ctrlShow[APPEL_DENIED_APPELLANT,false];

ctrlShow[APPEL_CALL_BACKGROUND,false];
ctrlShow[APPEL_CALL_APPELLANT,false];
ctrlShow[APPEL_CALL_BTN_HP,false];
ctrlShow[APPEL_CALL_BTN_CONTACT,false];
ctrlShow[APPEL_CALL_BTN_END,false];
ctrlShow[APPEL_CALL_BTN_MUTE,false];

ctrlShow[APPEL_END_BACKGROUND,false];
ctrlShow[APPEL_END_APPELLANT,false];

ctrlShow[APPEL_INPROGRESS_BACKGROUND,false];
ctrlShow[APPEL_INPROGRESS_APPELLANT,false];
ctrlShow[APPEL_INPROGRESS_TIME,false];
ctrlShow[APPEL_INPROGRESS_BTN_HP,false];
ctrlShow[APPEL_INPROGRESS_BTN_CONTACT,false];
ctrlShow[APPEL_INPROGRESS_BTN_END,false];
ctrlShow[APPEL_INPROGRESS_BTN_MUTE,false];

ctrlShow[APPEL_REQUEST_BACKGROUND,false];
ctrlShow[APPEL_REQUEST_APPELLANT,false];
ctrlShow[APPEL_REQUEST_BTN_ALLOW,false];
ctrlShow[APPEL_REQUEST_BTN_DENIED,false];
