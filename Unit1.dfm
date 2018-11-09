object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 357
  ClientWidth = 482
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 482
    Height = 357
    Align = alClient
    TabOrder = 0
    object VirtualStringTree1: TVirtualStringTree
      Left = 1
      Top = 1
      Width = 480
      Height = 355
      Align = alClient
      DragType = dtVCL
      EditDelay = 300
      Header.AutoSizeIndex = 0
      Header.Font.Charset = DEFAULT_CHARSET
      Header.Font.Color = clWindowText
      Header.Font.Height = -11
      Header.Font.Name = 'Tahoma'
      Header.Font.Style = []
      Header.Options = [hoColumnResize, hoVisible]
      Header.Style = hsFlatButtons
      TabOrder = 0
      TreeOptions.AutoOptions = [toAutoDropExpand, toAutoScrollOnExpand, toAutoDeleteMovedNodes, toAutoChangeScale]
      TreeOptions.MiscOptions = [toEditable, toFullRepaintOnResize, toGridExtensions, toInitOnSave, toWheelPanning, toEditOnClick, toEditOnDblClick]
      TreeOptions.PaintOptions = [toHideFocusRect, toShowHorzGridLines, toShowVertGridLines, toThemeAware, toUseBlendedImages]
      TreeOptions.SelectionOptions = [toExtendedFocus, toRightClickSelect]
      OnGetText = VirtualStringTree1GetText
      Columns = <
        item
          Position = 0
          Width = 142
          WideText = 'Time'
        end
        item
          Position = 1
          Width = 107
          WideText = 'Text'
        end
        item
          Position = 2
          Width = 150
          WideText = 'Memo'
        end
        item
          Position = 3
          Width = 73
          WideText = 'Spin'
        end>
    end
  end
end
