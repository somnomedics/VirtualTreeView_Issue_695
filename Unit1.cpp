//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VirtualTrees"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
//	TVirtualStringTree *t=new TVirtualStringTree(this);  // error

//	TCustomVirtualTreeOptions *t = new TCustomVirtualTreeOptions(NULL); // error

//  TVTDataObject *t = new TVTDataObject(NULL,false);   // error


//	TVirtualNode *t = new TVirtualNode;  // no error
//  TCheckStateHelper *t = new TCheckStateHelper; // no error

//	TTestOptions *t=new TTestOptions(NULL);
//	TTestDelphiComp *t = new TTestDelphiComp(this); // no error


	VirtualStringTree1->NodeDataSize = sizeof(struct TMyTreeNode);
	VirtualStringTree1->BeginUpdate();

	TVirtualNode *Node;
	TMyTreeNode *NodeItem;

	Node = VirtualStringTree1->AddChild(NULL);
	NodeItem = (TMyTreeNode*)VirtualStringTree1->GetNodeData(Node);
	NodeItem->Time = Now()-1;
	wcscpy(NodeItem->Text,L"Andrey");
	NodeItem->Memo[0] = L'\0';
	Node->CheckType = ctNone;
	NodeItem->Value = 0.3;

	Node = VirtualStringTree1->AddChild(NULL);
	NodeItem = (TMyTreeNode*)VirtualStringTree1->GetNodeData(Node);
	NodeItem->Time = Now();
	wcscpy(NodeItem->Text,L"Gert");
	NodeItem->Memo[0] = L'\0';
	Node->CheckType = ctNone;
	NodeItem->Value = 1;

	Node = VirtualStringTree1->AddChild(NULL);
	NodeItem = (TMyTreeNode*)VirtualStringTree1->GetNodeData(Node);
	NodeItem->Time = Now()+1;
	wcscpy(NodeItem->Text,L"Dagmar");
	NodeItem->Memo[0] = L'\0';
	Node->CheckType = ctNone;
	NodeItem->Value = 3.5;

	VirtualStringTree1->EndUpdate();
}
//---------------------------------------------------------------------------
__fastcall TForm1::~TForm1()
{

}

void __fastcall TForm1::VirtualStringTree1GetText(TBaseVirtualTree *Sender, PVirtualNode Node,
					TColumnIndex Column, TVSTTextType TextType, UnicodeString &CellText)
{
	TMyTreeNode *NodeItem = (TMyTreeNode*)Sender->GetNodeData(Node);
	switch(Column)
	{
	case 0:
		CellText = DateTimeToStr(NodeItem->Time);
		break;
	case 1:
		CellText = UnicodeString(NodeItem->Text);
		break;
	case 2:
		CellText = UnicodeString(NodeItem->Memo);
    break;
	case 3:
		CellText = FormatFloat("0.#",NodeItem->Value);
		break;
	}
}
//---------------------------------------------------------------------------

