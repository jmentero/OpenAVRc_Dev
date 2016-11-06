#ifndef COMPILEROPTIONSFRAME_H
#define COMPILEROPTIONSFRAME_H

//(*Headers(CompilerOptionsFrame)
#include <wx/stattext.h>
#include <wx/checkbox.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

//wxString Ini_Filename;
extern wxString LCD;
extern wxString VOICE;

class CompilerOptionsFrame: public wxFrame
{
	public:

		CompilerOptionsFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~CompilerOptionsFrame();

		//wxFileConfig* configFile;

		//(*Declarations(CompilerOptionsFrame)
		wxChoice* Choice5;
		wxCheckBox* CheckBox9;
		wxStaticText* StaticText2;
		wxChoice* Choice3;
		wxButton* Button1;
		wxStaticText* StaticText6;
		wxCheckBox* CheckBox3;
		wxCheckBox* CheckBox2;
		wxCheckBox* CheckBox6;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxStaticBox* StaticBox1;
		wxChoice* Choice7;
		wxButton* Button2;
		wxCheckBox* CheckBox1;
		wxStaticText* StaticText5;
		wxCheckBox* CheckBox12;
		wxChoice* Choice4;
		wxCheckBox* CheckBox4;
		wxChoice* Choice6;
		wxCheckBox* CheckBox8;
		wxCheckBox* CheckBox7;
		wxCheckBox* CheckBox5;
		wxStaticText* StaticText4;
		wxChoice* Choice1;
		wxChoice* Choice2;
		//*)

	protected:

		//(*Identifiers(CompilerOptionsFrame)
		static const long ID_STATICBOX1;
		static const long ID_CHOICE1;
		static const long ID_CHOICE3;
		static const long ID_CHECKBOX9;
		static const long ID_CHECKBOX1;
		static const long ID_CHECKBOX7;
		static const long ID_CHOICE2;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT3;
		static const long ID_CHECKBOX2;
		static const long ID_CHECKBOX3;
		static const long ID_CHECKBOX4;
		static const long ID_CHECKBOX5;
		static const long ID_CHECKBOX6;
		static const long ID_CHECKBOX8;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_CHOICE4;
		static const long ID_CHOICE5;
		static const long ID_CHECKBOX12;
		static const long ID_CHOICE6;
		static const long ID_STATICTEXT2;
		static const long ID_CHOICE7;
		static const long ID_STATICTEXT6;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(CompilerOptionsFrame)
		void OnCheckListBox1Toggled(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnCheckBox1Click(wxCommandEvent& event);
		void OnCheckBox2Click(wxCommandEvent& event);
		void OnCheckBox3Click(wxCommandEvent& event);
		void OnCheckBox11Click(wxCommandEvent& event);
		void OnCheckBox10Click(wxCommandEvent& event);
		void OnChoice3Select(wxCommandEvent& event);
		void OnChoice5Select(wxCommandEvent& event);
		void OnChoice4Select(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnCheckBox5Click(wxCommandEvent& event);
		void OnCheckBox8Click(wxCommandEvent& event);
		void OnCheckBox4Click(wxCommandEvent& event);
		void OnCheckBox6Click(wxCommandEvent& event);
		void OnCheckBox9Click(wxCommandEvent& event);
		void OnChoice6Select(wxCommandEvent& event);
		void OnCheckBox12Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnLCDSelect(wxCommandEvent& event);
		void SaveConfig();
		void LoadConfig();
		void OnVOICESelect1(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
