//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "VirtualTrees.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
	TPanel *Panel1;
	TVirtualStringTree *VirtualStringTree1;
	void __fastcall VirtualStringTree1GetText(TBaseVirtualTree *Sender, PVirtualNode Node,
					TColumnIndex Column, TVSTTextType TextType, UnicodeString &CellText);

private:	// Benutzer-Deklarationen
	struct TMyTreeNode
	{
		double Time;
    wchar_t Text[80];
    wchar_t Memo[256];
		double Value;
	};
	
public:		// Benutzer-Deklarationen
	__fastcall TForm1(TComponent* Owner);
	__fastcall ~TForm1();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
