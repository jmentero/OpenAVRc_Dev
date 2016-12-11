/***************************************************************
 * Name:      OpenAVRc_DesktopMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    OpenAVRc_TEAM ()
 * Created:   2016-09-08
 * Copyright: OpenAVRc_TEAM ()
 * License:
 **************************************************************/

#include "CompilerOptionsFrame.h"
#include "OpenAVRc_DesktopMain.h"
#include "CommunicationsFrame.h"
#include <wx/msgdlg.h>
#include <wx/filedlg.h>


extern wxString AppPath;
extern bool Ini_Changed;


//(*InternalHeaders(CompilerOptionsFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)


//(*IdInit(CompilerOptionsFrame)
const long CompilerOptionsFrame::ID_STATICBOX6 = wxNewId();
const long CompilerOptionsFrame::ID_STATICBOX4 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX17 = wxNewId();
const long CompilerOptionsFrame::ID_STATICBOX5 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT4 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX16 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE4 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE6 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE1 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT2 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT1 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE3 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT3 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX7 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX14 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX1 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX15 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX9 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX12 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE7 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT6 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE5 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT5 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE8 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT7 = wxNewId();
const long CompilerOptionsFrame::ID_BUTTON3 = wxNewId();
const long CompilerOptionsFrame::ID_BUTTON2 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE9 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT8 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE10 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT9 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX18 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX19 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX20 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX21 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE11 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT10 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX40 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX41 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE13 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT12 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE12 = wxNewId();
const long CompilerOptionsFrame::ID_STATICTEXT11 = wxNewId();
const long CompilerOptionsFrame::ID_PANEL2 = wxNewId();
const long CompilerOptionsFrame::ID_STATICBOX3 = wxNewId();
const long CompilerOptionsFrame::ID_STATICBOX2 = wxNewId();
const long CompilerOptionsFrame::ID_STATICBOX1 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX10 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX11 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX13 = wxNewId();
const long CompilerOptionsFrame::ID_CHOICE2 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX2 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX3 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX4 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX5 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX6 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX8 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX23 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX24 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX25 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX26 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX27 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX29 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX30 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX31 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX32 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX34 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX36 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX37 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX38 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX39 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX43 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX44 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX45 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX47 = wxNewId();
const long CompilerOptionsFrame::ID_CHECKBOX28 = wxNewId();
const long CompilerOptionsFrame::ID_PANEL3 = wxNewId();
const long CompilerOptionsFrame::ID_NOTEBOOK1 = wxNewId();
const long CompilerOptionsFrame::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CompilerOptionsFrame,wxFrame)
    //(*EventTable(CompilerOptionsFrame)
    //*)
END_EVENT_TABLE()

CompilerOptionsFrame::CompilerOptionsFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(CompilerOptionsFrame)
    Create(parent, wxID_ANY, _("Compil-O-matic"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(807,377));
    SetToolTip(_("R�f�rence de l\'�cran"));
    SetHelpText(_("Protocoles DSM"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,0), wxSize(752,327), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Notebook1 = new wxNotebook(Panel1, ID_NOTEBOOK1, wxPoint(0,0), wxSize(808,376), 0, _T("ID_NOTEBOOK1"));
    Panel2 = new wxPanel(Notebook1, ID_PANEL2, wxDefaultPosition, wxSize(802,302), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    StaticBox6 = new wxStaticBox(Panel2, ID_STATICBOX6, _("Autres options"), wxPoint(464,8), wxSize(192,328), 0, _T("ID_STATICBOX6"));
    StaticBox4 = new wxStaticBox(Panel2, ID_STATICBOX4, _("Mat�riel"), wxPoint(24,8), wxSize(200,328), 0, _T("ID_STATICBOX4"));
    CheckBoxPPM_LIMITS_SYMETRICAL = new wxCheckBox(Panel2, ID_CHECKBOX17, _("PPM Simm limits"), wxPoint(528,296), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX17"));
    CheckBoxPPM_LIMITS_SYMETRICAL->SetValue(true);
    CheckBoxPPM_LIMITS_SYMETRICAL->SetToolTip(_("Option ajuster le gain fonction du subtrim"));
    StaticBox5 = new wxStaticBox(Panel2, ID_STATICBOX5, _("Interface"), wxPoint(232,8), wxSize(224,328), 0, _T("ID_STATICBOX5"));
    StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Unit�s"), wxPoint(264,304), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    CheckBoxPPM_CENTER_ADJUSTABLE = new wxCheckBox(Panel2, ID_CHECKBOX16, _("PPM Center adjust"), wxPoint(528,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX16"));
    CheckBoxPPM_CENTER_ADJUSTABLE->SetValue(true);
    CheckBoxPPM_CENTER_ADJUSTABLE->SetToolTip(_("Option r�glage des neutres ind�pendant"));
    ChoicePPM_UNIT  = new wxChoice(Panel2, ID_CHOICE4, wxPoint(336,296), wxSize(112,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
    ChoicePPM_UNIT ->SetSelection( ChoicePPM_UNIT ->Append(_("PERCENT_PREC1")) );
    ChoicePPM_UNIT ->Append(_("PERCENT_PREC0"));
    ChoicePPM_UNIT ->Append(_("US"));
    ChoicePPM_UNIT ->SetToolTip(_("Affichage des valeurs des voies en % ou uS"));
    ChoicePCB = new wxChoice(Panel2, ID_CHOICE6, wxPoint(112,32), wxSize(96,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE6"));
    ChoicePCB->SetSelection( ChoicePCB->Append(_("MEGA2560")) );
    ChoicePCB->Append(_("9X"));
    ChoicePCB->Append(_("9X128"));
    ChoicePCB->Append(_("9X2561"));
    ChoicePCB->Append(_("9XR"));
    ChoicePCB->Append(_("9XR128"));
    ChoicePCB->Append(_("9XR2561"));
    ChoicePCB->Append(_("GRUVIN9X"));
    ChoicePCB->SetToolTip(_("Type de radio"));
    ChoiceLCD = new wxChoice(Panel2, ID_CHOICE1, wxPoint(112,72), wxSize(96,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    ChoiceLCD->Append(_("DEFAULT"));
    ChoiceLCD->Append(_("ST7565P"));
    ChoiceLCD->Append(_("ST7565R "));
    ChoiceLCD->Append(_("ERC12864FSF"));
    ChoiceLCD->SetSelection( ChoiceLCD->Append(_("ST7920")) );
    ChoiceLCD->Append(_("KS108"));
    ChoiceLCD->Append(_("SSD1306"));
    ChoiceLCD->SetToolTip(_("R�f�rence de l\'�cran"));
    StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Processeur"), wxPoint(32,40), wxSize(64,13), 0, _T("ID_STATICTEXT2"));
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("LCD"), wxPoint(64,80), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    ChoiceVOICE = new wxChoice(Panel2, ID_CHOICE3, wxPoint(112,120), wxSize(96,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    ChoiceVOICE->SetSelection( ChoiceVOICE->Append(_("NO")) );
    ChoiceVOICE->Append(_("YES"));
    ChoiceVOICE->Append(_("WTV20SD"));
    ChoiceVOICE->Append(_("JQ6500"));
    ChoiceVOICE->SetToolTip(_("Option annonces vocales"));
    StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Voice"), wxPoint(56,128), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    CheckBoxAUDIO = new wxCheckBox(Panel2, ID_CHECKBOX7, _("Audio"), wxPoint(112,160), wxSize(48,16), 0, wxDefaultValidator, _T("ID_CHECKBOX7"));
    CheckBoxAUDIO->SetValue(false);
    CheckBoxAUDIO->SetToolTip(_("Option audio"));
    CheckBoxHAPTIC = new wxCheckBox(Panel2, ID_CHECKBOX14, _("Haptic"), wxPoint(112,192), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX14"));
    CheckBoxHAPTIC->SetValue(false);
    CheckBoxHAPTIC->SetToolTip(_("Option Vibreur"));
    CheckBoxHELI = new wxCheckBox(Panel2, ID_CHECKBOX1, _("HELI"), wxPoint(528,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBoxHELI->SetValue(false);
    CheckBoxHELI->SetToolTip(_("Option h�licopt�re"));
    CheckBoxTEMPLATES = new wxCheckBox(Panel2, ID_CHECKBOX15, _("TEMPLATES"), wxPoint(528,176), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX15"));
    CheckBoxTEMPLATES->SetValue(false);
    CheckBoxTEMPLATES->SetToolTip(_("AOption mod�les pr� programm�s"));
    CheckBoxRTCLOCK = new wxCheckBox(Panel2, ID_CHECKBOX9, _("RTC Clock"), wxPoint(112,248), wxSize(80,21), 0, wxDefaultValidator, _T("ID_CHECKBOX9"));
    CheckBoxRTCLOCK->SetValue(false);
    CheckBoxRTCLOCK->SetToolTip(_("Option horloge temps r�el"));
    CheckBoxSD_CARD = new wxCheckBox(Panel2, ID_CHECKBOX12, _("Carte SD"), wxPoint(112,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX12"));
    CheckBoxSD_CARD->SetValue(false);
    CheckBoxSD_CARD->SetToolTip(_("Option carte SD (Sauvegarde - Fichiers log)"));
    ChoiceTRANSLATIONS = new wxChoice(Panel2, ID_CHOICE7, wxPoint(336,32), wxSize(72,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE7"));
    ChoiceTRANSLATIONS->Append(_("CZ"));
    ChoiceTRANSLATIONS->Append(_("DE"));
    ChoiceTRANSLATIONS->Append(_("EN"));
    ChoiceTRANSLATIONS->SetSelection( ChoiceTRANSLATIONS->Append(_("ES")) );
    ChoiceTRANSLATIONS->Append(_("FR"));
    ChoiceTRANSLATIONS->Append(_("HU"));
    ChoiceTRANSLATIONS->Append(_("IT"));
    ChoiceTRANSLATIONS->Append(_("NL"));
    ChoiceTRANSLATIONS->Append(_("PL"));
    ChoiceTRANSLATIONS->Append(_("PT"));
    ChoiceTRANSLATIONS->Append(_("SE"));
    ChoiceTRANSLATIONS->Append(_("SK"));
    ChoiceTRANSLATIONS->SetToolTip(_("Langue affich�e"));
    StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT6, _("Langue"), wxPoint(264,40), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    ChoiceTTS = new wxChoice(Panel2, ID_CHOICE5, wxPoint(336,72), wxSize(72,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE5"));
    ChoiceTTS->Append(_("CZ"));
    ChoiceTTS->Append(_("DE"));
    ChoiceTTS->Append(_("EN"));
    ChoiceTTS->SetSelection( ChoiceTTS->Append(_("ES")) );
    ChoiceTTS->Append(_("FR"));
    ChoiceTTS->Append(_("HU"));
    ChoiceTTS->Append(_("IT"));
    ChoiceTTS->Append(_("NL"));
    ChoiceTTS->Append(_("PL"));
    ChoiceTTS->Append(_("PT"));
    ChoiceTTS->Append(_("SE"));
    ChoiceTTS->Append(_("SK"));
    ChoiceTTS->SetToolTip(_("Langue de la synth�se vocale"));
    StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("Langue voice"), wxPoint(240,80), wxSize(80,13), 0, _T("ID_STATICTEXT5"));
    ChoiceNAVIGATION = new wxChoice(Panel2, ID_CHOICE8, wxPoint(336,248), wxSize(80,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE8"));
    ChoiceNAVIGATION->SetSelection( ChoiceNAVIGATION->Append(_("NO")) );
    ChoiceNAVIGATION->Append(_("POT1"));
    ChoiceNAVIGATION->Append(_("POT2"));
    ChoiceNAVIGATION->Append(_("POT3"));
    ChoiceNAVIGATION->Append(_("POTS"));
    ChoiceNAVIGATION->Append(_("STICKS"));
    ChoiceNAVIGATION->Append(_("ROTENC"));
    ChoiceNAVIGATION->SetToolTip(_("Peut remplacer les boutons de navigation"));
    StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT7, _("Navigation"), wxPoint(248,256), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    ButtonEXIT = new wxButton(Panel2, ID_BUTTON3, _("SORTIE"), wxPoint(696,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    ButtonCOMPILE = new wxButton(Panel2, ID_BUTTON2, _("COMPILER"), wxPoint(696,208), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    ChoiceUNITS = new wxChoice(Panel2, ID_CHOICE9, wxPoint(528,32), wxSize(64,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE9"));
    ChoiceUNITS->SetSelection( ChoiceUNITS->Append(_("METRIC")) );
    ChoiceUNITS->Append(_("IMPERIAL"));
    ChoiceUNITS->SetToolTip(_("Unit�es"));
    StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT8, _("Unit�s"), wxPoint(480,40), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    ChoiceDEFAULT_MODE = new wxChoice(Panel2, ID_CHOICE10, wxPoint(528,72), wxSize(64,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE10"));
    ChoiceDEFAULT_MODE->SetSelection( ChoiceDEFAULT_MODE->Append(_("NO")) );
    ChoiceDEFAULT_MODE->Append(_("1"));
    ChoiceDEFAULT_MODE->Append(_("2"));
    ChoiceDEFAULT_MODE->Append(_("3"));
    ChoiceDEFAULT_MODE->Append(_("4"));
    ChoiceDEFAULT_MODE->SetToolTip(_("Mode de la radio"));
    StaticText9 = new wxStaticText(Panel2, ID_STATICTEXT9, _("Mode"), wxPoint(480,80), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    CheckBoxFLIGHT_MODES = new wxCheckBox(Panel2, ID_CHECKBOX18, _("Flight modes"), wxPoint(528,200), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX18"));
    CheckBoxFLIGHT_MODES->SetValue(true);
    CheckBoxFLIGHT_MODES->SetToolTip(_("Option phases de vol"));
    CheckBoxCURVES = new wxCheckBox(Panel2, ID_CHECKBOX19, _("Curves"), wxPoint(528,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX19"));
    CheckBoxCURVES->SetValue(true);
    CheckBoxCURVES->SetToolTip(_("Option courbes"));
    CheckBoxGVARS = new wxCheckBox(Panel2, ID_CHECKBOX20, _("Global vars"), wxPoint(528,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX20"));
    CheckBoxGVARS->SetValue(true);
    CheckBoxGVARS->SetToolTip(_("Option variables globales"));
    CheckBoxSPLASH = new wxCheckBox(Panel2, ID_CHECKBOX21, _("�cran d\'accueil"), wxPoint(336,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX21"));
    CheckBoxSPLASH->SetValue(false);
    CheckBoxSPLASH->SetToolTip(_("Ecran d\'accueil"));
    ChoiceFONT = new wxChoice(Panel2, ID_CHOICE11, wxPoint(336,176), wxSize(80,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE11"));
    ChoiceFONT->SetSelection( ChoiceFONT->Append(_("STD")) );
    ChoiceFONT->Append(_("SQT5"));
    ChoiceFONT->SetToolTip(_("Police de caract�re"));
    StaticText10 = new wxStaticText(Panel2, ID_STATICTEXT10, _("Font"), wxPoint(272,184), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    CheckBoxBOLD = new wxCheckBox(Panel2, ID_CHECKBOX40, _("Bold"), wxPoint(336,112), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX40"));
    CheckBoxBOLD->SetValue(false);
    CheckBoxBOLD->SetToolTip(_("Vrai police en gras"));
    CheckBoxBATTGRAPH = new wxCheckBox(Panel2, ID_CHECKBOX41, _("Batt graph"), wxPoint(336,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX41"));
    CheckBoxBATTGRAPH->SetValue(false);
    CheckBoxBATTGRAPH->SetToolTip(_("Affichage graphique de l\'�tat de la batterie"));
    ChoiceFAI = new wxChoice(Panel2, ID_CHOICE13, wxPoint(528,112), wxSize(64,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE13"));
    ChoiceFAI->SetSelection( ChoiceFAI->Append(_("NO")) );
    ChoiceFAI->Append(_("YES"));
    ChoiceFAI->Append(_("CHOICE"));
    ChoiceFAI->SetToolTip(_("Pour les comp�titions"));
    StaticText12 = new wxStaticText(Panel2, ID_STATICTEXT12, _("FAI"), wxPoint(488,120), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    ChoiceTHREE_POS = new wxChoice(Panel2, ID_CHOICE12, wxPoint(112,288), wxSize(96,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE12"));
    ChoiceTHREE_POS->SetSelection( ChoiceTHREE_POS->Append(_("NO")) );
    ChoiceTHREE_POS->Append(_("POT1"));
    ChoiceTHREE_POS->Append(_("POT2"));
    ChoiceTHREE_POS->Append(_("POT3"));
    StaticText11 = new wxStaticText(Panel2, ID_STATICTEXT11, _("3POS"), wxPoint(64,296), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxDefaultPosition, wxSize(800,356), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    StaticBox3 = new wxStaticBox(Panel3, ID_STATICBOX3, _("Autres param�tres"), wxPoint(328,16), wxSize(464,264), 0, _T("ID_STATICBOX3"));
    StaticBox2 = new wxStaticBox(Panel3, ID_STATICBOX2, _("T�lemetrie"), wxPoint(184,16), wxSize(136,312), 0, _T("ID_STATICBOX2"));
    StaticBox1 = new wxStaticBox(Panel3, ID_STATICBOX1, _("Protocole"), wxPoint(8,16), wxSize(168,264), 0, _T("ID_STATICBOX1"));
    CheckBoxPPM = new wxCheckBox(Panel3, ID_CHECKBOX10, _("PPM"), wxPoint(72,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX10"));
    CheckBoxPPM->SetValue(true);
    CheckBoxPPM->SetToolTip(_("Protocole PPM 8 � 16 voies"));
    CheckBoxPXX = new wxCheckBox(Panel3, ID_CHECKBOX11, _("PXX"), wxPoint(72,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX11"));
    CheckBoxPXX->SetValue(false);
    CheckBoxPXX->SetToolTip(_("Protocole PXX "));
    CheckBoxDSM2SERIAL = new wxCheckBox(Panel3, ID_CHECKBOX13, _("DSM2 SERIAL"), wxPoint(72,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX13"));
    CheckBoxDSM2SERIAL->SetValue(false);
    CheckBoxDSM2SERIAL->SetToolTip(_("Protocoles DSM .."));
    ChoiceEXT = new wxChoice(Panel3, ID_CHOICE2, wxPoint(208,40), wxSize(96,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    ChoiceEXT->SetSelection( ChoiceEXT->Append(_("STD")) );
    ChoiceEXT->Append(_("FRSKY"));
    ChoiceEXT->Append(_("FRSKY_SPORT"));
    ChoiceEXT->Append(_("JETI"));
    ChoiceEXT->Append(_("NMEA"));
    ChoiceEXT->Append(_("ARDUPILOT"));
    ChoiceEXT->Append(_("MAVLINK"));
    ChoiceEXT->Append(_("TELEMETREZ"));
    ChoiceEXT->SetToolTip(_("T�l�m�trie install�e"));
    CheckBoxFRSKY_HUB = new wxCheckBox(Panel3, ID_CHECKBOX2, _("FrSky Hub"), wxPoint(208,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
    CheckBoxFRSKY_HUB->SetValue(false);
    CheckBoxFAS_OFFSET = new wxCheckBox(Panel3, ID_CHECKBOX3, _("FAS Offset"), wxPoint(208,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
    CheckBoxFAS_OFFSET->SetValue(false);
    CheckBoxGAUGES = new wxCheckBox(Panel3, ID_CHECKBOX4, _("Gauges"), wxPoint(208,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
    CheckBoxGAUGES->SetValue(false);
    CheckBoxGPS = new wxCheckBox(Panel3, ID_CHECKBOX5, _("GPS"), wxPoint(208,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
    CheckBoxGPS->SetValue(false);
    CheckBoxVARIO = new wxCheckBox(Panel3, ID_CHECKBOX6, _("Vario"), wxPoint(208,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
    CheckBoxVARIO->SetValue(false);
    CheckBoxSPORT_FILE_LOG = new wxCheckBox(Panel3, ID_CHECKBOX8, _("Sport file log"), wxPoint(208,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX8"));
    CheckBoxSPORT_FILE_LOG->SetValue(false);
    CheckBoxPCBREV = new wxCheckBox(Panel3, ID_CHECKBOX23, _("PCB Rev0"), wxPoint(656,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX23"));
    CheckBoxPCBREV->SetValue(false);
    CheckBoxPCBREV->SetToolTip(_("REV1 pour gruvin9x si pas coch�"));
    CheckBoxTURNIGY_TRANSMITTER_FIX = new wxCheckBox(Panel3, ID_CHECKBOX24, _("TURNIGY Fix"), wxPoint(656,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX24"));
    CheckBoxTURNIGY_TRANSMITTER_FIX->SetValue(false);
    CheckBoxFRSKY_STICKS = new wxCheckBox(Panel3, ID_CHECKBOX25, _("FRSKY_Sticks"), wxPoint(656,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX25"));
    CheckBoxFRSKY_STICKS->SetValue(false);
    CheckBoxCORRECT_NEGATIVE_VALUES = new wxCheckBox(Panel3, ID_CHECKBOX26, _("CORRECT_NEGATIVE_VALUES"), wxPoint(456,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX26"));
    CheckBoxCORRECT_NEGATIVE_VALUES->SetValue(false);
    CheckBoxARITHMETIC_OVERFLOW_CHECK = new wxCheckBox(Panel3, ID_CHECKBOX27, _("ARITHMETIC_OVERFLOW_CHECK"), wxPoint(456,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX27"));
    CheckBoxARITHMETIC_OVERFLOW_CHECK->SetValue(false);
    CheckBoxARITHMETIC_OVERFLOW_CHECK->SetToolTip(_("Ajoute du code pour pr�voir d�bordement aritmethique"));
    CheckBoxSP22 = new wxCheckBox(Panel3, ID_CHECKBOX29, _("SP22"), wxPoint(656,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX29"));
    CheckBoxSP22->SetValue(false);
    CheckBoxSP22->SetToolTip(_("Smartie Parts Backlight"));
    CheckBoxPWM_BACKLIGHT = new wxCheckBox(Panel3, ID_CHECKBOX30, _("PWM_BACKLIGHT"), wxPoint(456,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX30"));
    CheckBoxPWM_BACKLIGHT->SetValue(false);
    CheckBoxOVERRIDE_CHANNEL_FUNCTION = new wxCheckBox(Panel3, ID_CHECKBOX31, _("Override channel function"), wxPoint(456,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX31"));
    CheckBoxOVERRIDE_CHANNEL_FUNCTION->SetValue(false);
    CheckBoxWS_HOW_HIGH = new wxCheckBox(Panel3, ID_CHECKBOX32, _("WS_HOW_HIGH"), wxPoint(208,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX32"));
    CheckBoxWS_HOW_HIGH->SetValue(false);
    CheckBoxWS_HOW_HIGH->SetToolTip(_("WS HowHigh Altimeter"));
    CheckBoxTX_CADDY = new wxCheckBox(Panel3, ID_CHECKBOX34, _("TX_CADDY"), wxPoint(656,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX34"));
    CheckBoxTX_CADDY->SetValue(false);
    CheckBoxTX_CADDY->SetToolTip(_("Pour gruvin9x seulement"));
    CheckBoxTOGGLETRIM = new wxCheckBox(Panel3, ID_CHECKBOX36, _("Toggle trims"), wxPoint(456,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX36"));
    CheckBoxTOGGLETRIM->SetValue(false);
    CheckBoxTOGGLETRIM->SetToolTip(_("Change les trim de la main droite � la main gauche, et vice-versa"));
    CheckBoxNOANDSECONDE = new wxCheckBox(Panel3, ID_CHECKBOX37, _("NOANDSECONDE"), wxPoint(336,184), wxSize(102,16), 0, wxDefaultValidator, _T("ID_CHECKBOX37"));
    CheckBoxNOANDSECONDE->SetValue(true);
    CheckBoxSHUTDOWN_CONFIRMATION = new wxCheckBox(Panel3, ID_CHECKBOX38, _("SHUTDOWN_CONFIRMATION"), wxPoint(456,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX38"));
    CheckBoxSHUTDOWN_CONFIRMATION->SetValue(false);
    CheckBoxACCURAT_THROTTLE_STATS = new wxCheckBox(Panel3, ID_CHECKBOX39, _("ACCURAT_THROTTLE_STATS"), wxPoint(456,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX39"));
    CheckBoxACCURAT_THROTTLE_STATS->SetValue(false);
    CheckBoxEEPROM_PROGRESS_BAR = new wxCheckBox(Panel3, ID_CHECKBOX43, _("EEPROM bar"), wxPoint(336,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX43"));
    CheckBoxEEPROM_PROGRESS_BAR->SetValue(false);
    CheckBoxAUTOSWITCH = new wxCheckBox(Panel3, ID_CHECKBOX44, _("AUTOSWITCH"), wxPoint(336,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX44"));
    CheckBoxAUTOSWITCH->SetValue(false);
    CheckBoxAUTOSOURCE = new wxCheckBox(Panel3, ID_CHECKBOX45, _("AUTOSOURCE"), wxPoint(336,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX45"));
    CheckBoxAUTOSOURCE->SetValue(false);
    CheckBoxAUTOSOURCE->SetFocus();
    CheckBoxDBLKEYS = new wxCheckBox(Panel3, ID_CHECKBOX47, _("Double keys"), wxPoint(336,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX47"));
    CheckBoxDBLKEYS->SetValue(false);
    CheckBoxDSM2PPM = new wxCheckBox(Panel3, ID_CHECKBOX28, _("DSM2 PPM"), wxPoint(72,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX28"));
    CheckBoxDSM2PPM->SetValue(false);
    Notebook1->AddPage(Panel2, _("R�glages"), false);
    Notebook1->AddPage(Panel3, _("Options avanc�es"), false);

    Connect(ID_CHOICE8,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&CompilerOptionsFrame::OnChoiceNAVIGATIONSelect);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CompilerOptionsFrame::OnButtonEXITClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CompilerOptionsFrame::OnButtonCOMPILEClick);
    Connect(ID_CHECKBOX13,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&CompilerOptionsFrame::OnCheckBoxDSM2SERIALClick);
    Connect(ID_CHECKBOX45,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&CompilerOptionsFrame::OnCheckBoxAUTOSOURCEClick1);
    Connect(ID_CHECKBOX28,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&CompilerOptionsFrame::OnCheckBoxDSM2PPMClick);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&CompilerOptionsFrame::OnClose);
    //*)

    {
        wxIcon FrameIcon;
        SetIcon(wxICON(nsrcd_icon));
    }

    ChoicePCB->SetStringSelection(PCB);
    ChoiceLCD->SetStringSelection(LCD);
    ChoiceVOICE->SetStringSelection(VOICE);
    ChoiceEXT->SetStringSelection(EXT);
    CheckBoxAUDIO->SetValue(AUDIO);
    CheckBoxHELI->SetValue(HELI);
    ChoiceTTS->SetStringSelection(TTS);
    ChoiceTRANSLATIONS->SetStringSelection(TRANSLATIONS);
    ChoiceNAVIGATION->SetStringSelection(NAVIGATION);
    CheckBoxFRSKY_HUB->SetValue(FRSKY_HUB);
    CheckBoxHAPTIC->SetValue(HAPTIC);
    ChoicePPM_UNIT->SetStringSelection(PPM_UNIT);
    CheckBoxGAUGES->SetValue(GAUGES);
    CheckBoxGPS->SetValue(GPS);
    CheckBoxVARIO->SetValue(VARIO);
    CheckBoxRTCLOCK->SetValue(RTCLOCK);
    CheckBoxSPORT_FILE_LOG->SetValue(SPORT_FILE_LOG);
    CheckBoxPPM->SetValue(PPM);
    CheckBoxPXX->SetValue(PXX);
    CheckBoxDSM2SERIAL->SetValue(DSM2SERIAL);
    CheckBoxDSM2PPM->SetValue(DSM2PPM);
    CheckBoxSD_CARD->SetValue(SD_CARD);
    CheckBoxFAS_OFFSET->SetValue(FAS_OFFSET);
    CheckBoxTEMPLATES->SetValue(TEMPLATES);
    ChoiceTHREE_POS->SetStringSelection(THREE_POS);
    CheckBoxSPLASH->SetValue(SPLASH);
    ChoiceUNITS->SetStringSelection(UNITS);
    ChoiceDEFAULT_MODE->SetStringSelection(DEFAULT_MODE);
    ChoiceFONT->SetStringSelection(FONT);
    CheckBoxBOLD->SetValue(BOLD);
    CheckBoxBATTGRAPH->SetValue(BATTGRAPH);
    CheckBoxEEPROM_PROGRESS_BAR->SetValue(EEPROM_PROGRESS_BAR);
    ChoiceFAI->SetStringSelection(FAI);
    CheckBoxAUTOSWITCH->SetValue(AUTOSWITCH);
    CheckBoxAUTOSOURCE->SetValue(AUTOSOURCE);
    CheckBoxDBLKEYS->SetValue(DBLKEYS);
    CheckBoxPPM_CENTER_ADJUSTABLE->SetValue(PPM_CENTER_ADJUSTABLE);
    CheckBoxPPM_LIMITS_SYMETRICAL->SetValue(PPM_LIMITS_SYMETRICAL);
    CheckBoxFLIGHT_MODES->SetValue(FLIGHT_MODES);
    CheckBoxCURVES->SetValue(CURVES);
    CheckBoxGVARS->SetValue(GVARS);
    CheckBoxPCBREV->SetValue(PCBREV);
    CheckBoxTURNIGY_TRANSMITTER_FIX->SetValue(TURNIGY_TRANSMITTER_FIX);
    CheckBoxFRSKY_STICKS->SetValue(FRSKY_STICKS);
    CheckBoxCORRECT_NEGATIVE_VALUES->SetValue(CORRECT_NEGATIVE_VALUES);
    CheckBoxARITHMETIC_OVERFLOW_CHECK->SetValue(ARITHMETIC_OVERFLOW_CHECK);
    CheckBoxACCURAT_THROTTLE_STATS->SetValue(ACCURAT_THROTTLE_STATS);
    CheckBoxSP22->SetValue(SP22);
    CheckBoxPWM_BACKLIGHT->SetValue(PWM_BACKLIGHT);
    CheckBoxOVERRIDE_CHANNEL_FUNCTION->SetValue(OVERRIDE_CHANNEL_FUNCTION);
    CheckBoxWS_HOW_HIGH->SetValue(WS_HOW_HIGH);
    CheckBoxTX_CADDY->SetValue(TX_CADDY);
    CheckBoxTOGGLETRIM->SetValue(TOGGLETRIM);
    CheckBoxNOANDSECONDE->SetValue(NOANDSECONDE);// Hardwired
    CheckBoxSHUTDOWN_CONFIRMATION->SetValue(SHUTDOWN_CONFIRMATION);
}

CompilerOptionsFrame::~CompilerOptionsFrame()
{
    //(*Destroy(CompilerOptionsFrame)
    //*)
}

void CompilerOptionsFrame::OnClose(wxCloseEvent& event)
{
    Destroy();
}

void CompilerOptionsFrame::BatFunction()
{
  // Write splash file
    WriteSplashFile();


    // .bat file for compilation
    wxString CompiBat = "make";
    CompiBat += (" PCB=" + PCB);
    CompiBat += (" LCD=" + LCD);
    CompiBat += (" VOICE=" + VOICE);
    CompiBat += (" EXT=" + EXT);
    if (AUDIO) CompiBat += (" AUDIO=YES");// default should be NO
    if (HELI) CompiBat += (" HELI=YES");// default should be NO
    CompiBat += (" TTS=" + TTS);
    CompiBat += (" TRANSLATIONS=" + TRANSLATIONS);
    CompiBat += (" NAVIGATION=" + NAVIGATION);
    if (FRSKY_HUB) CompiBat += (" FRSKY_HUB=YES");// default should be NO
    if (HAPTIC) CompiBat += (" HAPTIC=YES");// default should be NO
    CompiBat += (" PPM_UNIT=" + PPM_UNIT);
    if (GAUGES) CompiBat += (" GAUGES=YES");// default should be NO
    if (GPS) CompiBat += (" GPS=YES");// default should be NO
    if (VARIO) CompiBat += (" VARIO=YES");// default should be NO
    if (RTCLOCK) CompiBat += (" RTCLOCK=YES");// default should be NO
    if (SPORT_FILE_LOG) CompiBat += (" SPORT_FILE_LOG=YES");// default should be NO
    if (PPM) CompiBat += (" PPM=YES");// default should be YES
    if (PXX) CompiBat += (" PXX=YES");// default should be NO
    if (DSM2SERIAL) CompiBat += (" DSM2=SERIAL");// default should be NO
    if (DSM2PPM) CompiBat += (" DSM2=PPM");// default should be NO
    if (SD_CARD) CompiBat += (" SDCARD=YES");// default should be NO
    if (FAS_OFFSET) CompiBat += (" FAS_OFFSET=YES");// default should be NO
    if (TEMPLATES) CompiBat += (" TEMPLATES=YES");// default should be NO
    CompiBat += (" THREE_POS=" + THREE_POS);
    if (SPLASH) CompiBat += (" SPLASH=YES");
    CompiBat += (" UNITS=" + UNITS);
    CompiBat += (" DEFAULT_MODE=" + DEFAULT_MODE);
    CompiBat += (" FONT=" + FONT);
    if (BOLD) CompiBat += (" BOLD=YES");
    if (BATTGRAPH) CompiBat += (" BATTGRAPH=YES");
    if (EEPROM_PROGRESS_BAR) CompiBat += (" EEPROM_PROGRESS_BAR=YES");
    CompiBat += (" FAI=" + FAI);
    if (AUTOSWITCH) CompiBat += (" AUTOSWITCH=YES");
    if (AUTOSOURCE) CompiBat += (" AUTOSOURCE=YES");
    if (DBLKEYS) CompiBat += (" DBLKEYS=YES");
    if (PPM_CENTER_ADJUSTABLE) CompiBat += (" PPM_CENTER_ADJUSTABLE=YES");
    if (PPM_LIMITS_SYMETRICAL) CompiBat += (" PPM_LIMITS_SYMETRICAL=YES");
    if (FLIGHT_MODES) CompiBat += (" FLIGHT_MODES=YES");
    if (CURVES) CompiBat += (" CURVES=YES");
    if (GVARS) CompiBat += (" GVARS=YES");
    if (PCBREV) CompiBat += (" PCBREV=REV0");
    if (TURNIGY_TRANSMITTER_FIX) CompiBat += (" TURNIGY_TRANSMITTER_FIX=YES");
    if (FRSKY_STICKS) CompiBat += (" FRSKY_STICKS=YES");
    if (CORRECT_NEGATIVE_VALUES) CompiBat += (" CORRECT_NEGATIVE_VALUES=YES");
    if (ARITHMETIC_OVERFLOW_CHECK) CompiBat += (" ARITHMETIC_OVERFLOW_CHECK=YES");
    if (ACCURAT_THROTTLE_STATS) CompiBat += (" ACCURAT_THROTTLE_STATS=YES");
    if (SP22) CompiBat += (" SP22=YES");
    if (PWM_BACKLIGHT) CompiBat += (" PWM_BACKLIGHT=YES");
    if (OVERRIDE_CHANNEL_FUNCTION) CompiBat += (" OVERRIDE_CHANNEL_FUNCTION=YES");
    if (WS_HOW_HIGH) CompiBat += (" WS_HOW_HIGH=YES");
    if (TX_CADDY) CompiBat += (" TX_CADDY=YES");
    if (TOGGLETRIM) CompiBat += (" TOGGLETRIM=YES");
    if (NOANDSECONDE) CompiBat += (" NOANDSECONDE=YES");
    if (SHUTDOWN_CONFIRMATION) CompiBat += (" SHUTDOWN_CONFIRMATION=YES");

    wxMessageBox(CompiBat);
    CreateCompileBatFile(CompiBat);
    wxExecute(AppPath+ "\\CompileBatFile.bat",wxEXEC_SYNC);// Create firmware
    Close();
    wxMessageBox(AppPath+ "\\firmware\\OpenAVRc.hex","Le nouveau Firmware est Le fichier:");
}

void CompilerOptionsFrame::OnButtonCOMPILEClick(wxCommandEvent& event)
{
    CollectDatas();
    Ini_Changed = true;
    BatFunction();
}

void CompilerOptionsFrame::CollectDatas()
{
    PCB  = ChoicePCB->GetString(ChoicePCB->GetSelection());
    LCD  = ChoiceLCD->GetString(ChoiceLCD->GetSelection());
    VOICE  = ChoiceVOICE->GetString(ChoiceVOICE->GetSelection());
    EXT  = ChoiceEXT->GetString(ChoiceEXT->GetSelection());
    AUDIO = CheckBoxAUDIO->GetValue();
    HELI = CheckBoxHELI->GetValue();
    TTS  = ChoiceTTS->GetString(ChoiceTTS->GetSelection());
    TRANSLATIONS  = ChoiceTRANSLATIONS->GetString(ChoiceTRANSLATIONS->GetSelection());
    NAVIGATION  = ChoiceNAVIGATION->GetString(ChoiceNAVIGATION->GetSelection());
    FRSKY_HUB = CheckBoxFRSKY_HUB->GetValue();
    HAPTIC = CheckBoxHAPTIC->GetValue();
    PPM_UNIT  = ChoicePPM_UNIT->GetString(ChoicePPM_UNIT->GetSelection());
    GAUGES = CheckBoxGAUGES->GetValue();
    GPS = CheckBoxGPS->GetValue();
    VARIO = CheckBoxVARIO->GetValue();
    RTCLOCK = CheckBoxRTCLOCK->GetValue();
    SPORT_FILE_LOG = CheckBoxSPORT_FILE_LOG->GetValue();
    PPM = CheckBoxPPM->GetValue();
    PXX = CheckBoxPXX->GetValue();
    DSM2SERIAL = CheckBoxDSM2SERIAL->GetValue();
    DSM2PPM = CheckBoxDSM2PPM->GetValue();
    SD_CARD = CheckBoxSD_CARD->GetValue();
    FAS_OFFSET = CheckBoxFAS_OFFSET->GetValue();
    TEMPLATES = CheckBoxTEMPLATES->GetValue();
    THREE_POS = ChoiceTHREE_POS->GetString(ChoiceTHREE_POS->GetSelection());// defaults to NO
    SPLASH = CheckBoxSPLASH->GetValue();
    UNITS = ChoiceUNITS->GetString(ChoiceUNITS->GetSelection());
    DEFAULT_MODE = ChoiceDEFAULT_MODE->GetString(ChoiceDEFAULT_MODE->GetSelection());
    FONT = ChoiceFONT->GetString(ChoiceFONT->GetSelection());
    BOLD = CheckBoxBOLD->GetValue();
    BATTGRAPH = CheckBoxBATTGRAPH->GetValue();
    EEPROM_PROGRESS_BAR = CheckBoxEEPROM_PROGRESS_BAR->GetValue();
    FAI = ChoiceFAI->GetString(ChoiceFAI->GetSelection());
    AUTOSWITCH = CheckBoxAUTOSWITCH->GetValue();
    AUTOSOURCE = CheckBoxAUTOSOURCE->GetValue();
    DBLKEYS = CheckBoxDBLKEYS->GetValue();
    PPM_CENTER_ADJUSTABLE = CheckBoxPPM_CENTER_ADJUSTABLE->GetValue();
    PPM_LIMITS_SYMETRICAL = CheckBoxPPM_LIMITS_SYMETRICAL->GetValue();
    FLIGHT_MODES = CheckBoxFLIGHT_MODES->GetValue();
    CURVES = CheckBoxCURVES->GetValue();
    GVARS = CheckBoxGVARS->GetValue();
    PCBREV = CheckBoxPCBREV->GetValue();
    TURNIGY_TRANSMITTER_FIX = CheckBoxTURNIGY_TRANSMITTER_FIX->GetValue();
    FRSKY_STICKS = CheckBoxFRSKY_STICKS->GetValue();
    CORRECT_NEGATIVE_VALUES = CheckBoxCORRECT_NEGATIVE_VALUES->GetValue();
    ARITHMETIC_OVERFLOW_CHECK = CheckBoxARITHMETIC_OVERFLOW_CHECK->GetValue();
    ACCURAT_THROTTLE_STATS = CheckBoxACCURAT_THROTTLE_STATS->GetValue();
    SP22 = CheckBoxSP22->GetValue();
    PWM_BACKLIGHT = CheckBoxPWM_BACKLIGHT->GetValue();
    OVERRIDE_CHANNEL_FUNCTION = CheckBoxOVERRIDE_CHANNEL_FUNCTION->GetValue();
    WS_HOW_HIGH = CheckBoxWS_HOW_HIGH->GetValue();
    TX_CADDY = CheckBoxTX_CADDY->GetValue();
    TOGGLETRIM = CheckBoxTOGGLETRIM->GetValue();
    NOANDSECONDE = CheckBoxNOANDSECONDE->GetValue();
    SHUTDOWN_CONFIRMATION = CheckBoxSHUTDOWN_CONFIRMATION->GetValue();
}

void CompilerOptionsFrame::OnButtonEXITClick(wxCommandEvent& event)
{
    CollectDatas();
    Ini_Changed = true;
    Close();
}

void CompilerOptionsFrame::WriteSplashFile()
{
    wxString data;
    wxString line;
    wxTextFile Splashfile( AppPath + "\\sources\\bitmaps\\splash.lbm");
    Splashfile.Open();
    Splashfile.Clear();
    line = "";
    data.Printf("%u",LbmSplash[0]);
    line += data.ToUTF8();
    line += ",";
    data.Printf("%u",LbmSplash[1]);
    line += data.ToUTF8();
    line += ",";
    Splashfile.AddLine(line,wxTextFileType_Dos);

    for (uint16_t i=0; i<(LCD_H/8); ++i)
    {
        line = "";
        for (uint16_t j=0; j<(LCD_W); ++j)
        {
            data.Printf("0x%02x",LbmSplash[2+(i*LCD_W)+j]);
            line += data.ToUTF8();
            line += ",";
        }
        Splashfile.AddLine(line,wxTextFileType_Dos);
    }
    Splashfile.Write();
    Splashfile.Close();
}


void CompilerOptionsFrame::CreateCompileBatFile(wxString line4)
{
    wxString Filename = AppPath + "\\CompileBatFile.bat";
    wxTextFile CompileBatFile(Filename);

    if(CompileBatFile.Exists()) CompileBatFile.Open(Filename);
    else CompileBatFile.Create(Filename);

    CompileBatFile.Open();
    CompileBatFile.Clear();
    CompileBatFile.AddLine("cd sources");
    CompileBatFile.AddLine("Path " + AppPath + "\\AVR-GCC\\bin;C:\\OpenAVRc\\AVR-GCC\\utils\\bin");
    CompileBatFile.AddLine("make clean");
    CompileBatFile.AddLine(line4);
    CompileBatFile.AddLine("copy OpenAVRc.hex ..\\firmware\\OpenAVRc.hex");
    CompileBatFile.AddLine("pause");
    CompileBatFile.Write();
    CompileBatFile.Close();
}

void CompilerOptionsFrame::OnCheckBoxDSM2SERIALClick(wxCommandEvent& event)
{
    CheckBoxDSM2PPM->SetValue(0);
}

void CompilerOptionsFrame::OnCheckBoxDSM2PPMClick(wxCommandEvent& event)
{
    CheckBoxDSM2SERIAL->SetValue(0);
}

void CompilerOptionsFrame::OnCheckBoxAUTOSOURCEClick1(wxCommandEvent& event)//pas compatible avec navigation=sticks
{
    CollectDatas();
    //AUTOSOURCE = CheckBoxAUTOSOURCE->GetValue();
    //NAVIGATION  = ChoiceNAVIGATION->GetString(ChoiceNAVIGATION->GetSelection());
    if ((NAVIGATION == wxT("STICKS")) & (AUTOSOURCE))
    {
        wxMessageBox("Non compatible avec NAVIGATION = STICKS");
        CheckBoxAUTOSOURCE->SetValue(0);
    }
}

void CompilerOptionsFrame::OnChoiceNAVIGATIONSelect(wxCommandEvent& event)
{
    CollectDatas();
    //NAVIGATION  = ChoiceNAVIGATION->GetString(ChoiceNAVIGATION->GetSelection());
    //AUTOSOURCE = CheckBoxAUTOSOURCE->GetValue();
    if ((AUTOSOURCE) & (NAVIGATION == wxT("STICKS")))
    {
        wxMessageBox("Non compatible avec AUTOSOURCE. AUTOSOURCE d�coch�.");
        CheckBoxAUTOSOURCE->SetValue(0);
    }
}