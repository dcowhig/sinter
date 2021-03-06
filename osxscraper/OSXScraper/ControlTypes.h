/* Copyright (C) 2014--2018 Stony Brook University
   Copyright (C) 2016--2018 The University of North Carolina at Chapel Hill

   This file is part of the Sinter Remote Desktop System.

   Sinter is dual-licensed, available under a commercial license or
   for free subject to the LGPL.  

   Sinter is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.  Sinter is distributed in the
   hope that it will be useful, but WITHOUT ANY WARRANTY; without even
   the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
   PURPOSE.  See the GNU Lesser General Public License for more details.  You
   should have received a copy of the GNU Lesser General Public License along
   with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
    ControlTypes.h
    Hello

    Created by Syed Masum Billah on 7/11/14.
*/

#ifndef Hello_ControlTypes_h
#define Hello_ControlTypes_h

#define ROLE_UNKNOWN   0
#define ROLE_WINDOW   1
#define ROLE_TITLEBAR   2
#define ROLE_PANE   3
#define ROLE_DIALOG   4
#define ROLE_CHECKBOX   5
#define ROLE_RADIOBUTTON   6
#define ROLE_STATICTEXT   7
#define ROLE_EDITABLETEXT   8
#define ROLE_BUTTON   9
#define ROLE_MENUBAR   10
#define ROLE_MENUITEM   11
#define ROLE_POPUPMENU   12
#define ROLE_COMBOBOX   13
#define ROLE_LIST   14
#define ROLE_LISTITEM   15
#define ROLE_GRAPHIC   16
#define ROLE_HELPBALLOON   17
#define ROLE_TOOLTIP   18
#define ROLE_LINK   19
#define ROLE_TREEVIEW   20
#define ROLE_TREEVIEWITEM   21
#define ROLE_TAB   22
#define ROLE_TABCONTROL   23
#define ROLE_SLIDER   24
#define ROLE_PROGRESSBAR   25
#define ROLE_SCROLLBAR   26
#define ROLE_STATUSBAR   27
#define ROLE_TABLE   28
#define ROLE_TABLECELL   29
#define ROLE_TABLECOLUMN   30
#define ROLE_TABLEROW   31
#define ROLE_TABLECOLUMNHEADER   32
#define ROLE_TABLEROWHEADER   33
#define ROLE_FRAME   34
#define ROLE_TOOLBAR   35
#define ROLE_DROPDOWNBUTTON   36
#define ROLE_CLOCK   37
#define ROLE_SEPARATOR   38
#define ROLE_FORM   39
#define ROLE_HEADING   40
#define ROLE_HEADING1   41
#define ROLE_HEADING2   42
#define ROLE_HEADING3   43
#define ROLE_HEADING4   44
#define ROLE_HEADING5   45
#define ROLE_HEADING6   46
#define ROLE_PARAGRAPH   47
#define ROLE_BLOCKQUOTE   48
#define ROLE_TABLEHEADER   49
#define ROLE_TABLEBODY   50
#define ROLE_TABLEFOOTER   51
#define ROLE_DOCUMENT   52
#define ROLE_ANIMATION   53
#define ROLE_APPLICATION   54
#define ROLE_BOX   55
#define ROLE_GROUPING   56
#define ROLE_PROPERTYPAGE   57
#define ROLE_CANVAS   58
#define ROLE_CAPTION   59
#define ROLE_CHECKMENUITEM   60
#define ROLE_DATEEDITOR   61
#define ROLE_ICON   62
#define ROLE_DIRECTORYPANE   63
#define ROLE_EMBEDDEDOBJECT   64
#define ROLE_ENDNOTE   65
#define ROLE_FOOTER   66
#define ROLE_FOOTNOTE   67
#define ROLE_GLASSPANE   69
#define ROLE_HEADER   70
#define ROLE_IMAGEMAP   71
#define ROLE_INPUTWINDOW   72
#define ROLE_LABEL   73
#define ROLE_NOTE   74
#define ROLE_PAGE   75
#define ROLE_RADIOMENUITEM   76
#define ROLE_LAYEREDPANE   77
#define ROLE_REDUNDANTOBJECT   78
#define ROLE_ROOTPANE   79
#define ROLE_EDITBAR   80
#define ROLE_TERMINAL   82
#define ROLE_RICHEDIT   83
#define ROLE_RULER   84
#define ROLE_SCROLLPANE   85
#define ROLE_SECTION   86
#define ROLE_SHAPE   87
#define ROLE_SPLITPANE   88
#define ROLE_VIEWPORT   89
#define ROLE_TEAROFFMENU   90
#define ROLE_TEXTFRAME   91
#define ROLE_TOGGLEBUTTON   92
#define ROLE_BORDER   93
#define ROLE_CARET   94
#define ROLE_CHARACTER   95
#define ROLE_CHART   96
#define ROLE_CURSOR   97
#define ROLE_DIAGRAM   98
#define ROLE_DIAL   99
#define ROLE_DROPLIST   100
#define ROLE_SPLITBUTTON   101
#define ROLE_MENUBUTTON   102
#define ROLE_DROPDOWNBUTTONGRID   103
#define ROLE_EQUATION   104
#define ROLE_GRIP   105
#define ROLE_HOTKEYFIELD   106
#define ROLE_INDICATOR   107
#define ROLE_SPINBUTTON   108
#define ROLE_SOUND   109
#define ROLE_WHITESPACE   110
#define ROLE_TREEVIEWBUTTON   111
#define ROLE_IPADDRESS   112
#define ROLE_DESKTOPICON   113
#define ROLE_ALERT   114
#define ROLE_INTERNALFRAME   115
#define ROLE_DESKTOPPANE   116
#define ROLE_OPTIONPANE   117
#define ROLE_COLORCHOOSER   118
#define ROLE_FILECHOOSER   119
#define ROLE_FILLER   120
#define ROLE_MENU   121
#define ROLE_PANEL   122
#define ROLE_PASSWORDEDIT   123
#define ROLE_FONTCHOOSER   124
#define ROLE_LINE   125
#define ROLE_FONTNAME   126
#define ROLE_FONTSIZE   127
#define ROLE_BOLD   128
#define ROLE_ITALIC   129
#define ROLE_UNDERLINE   130
#define ROLE_FGCOLOR   131
#define ROLE_BGCOLOR   132
#define ROLE_SUPERSCRIPT   133
#define ROLE_SUBSCRIPT   134
#define ROLE_STYLE   135
#define ROLE_INDENT   136
#define ROLE_ALIGNMENT   137
//#define ROLE_ALERT   138
#define ROLE_DATAGRID   139
#define ROLE_DATAITEM   140
#define ROLE_HEADERITEM   141
#define ROLE_THUMB   142
#define ROLE_CALENDAR   143

//#define STATE_UNAVAILABLE   0X1
//#define STATE_FOCUSED   0X2
//#define STATE_SELECTED   0X4
//#define STATE_BUSY   0X8
//#define STATE_PRESSED   0X10
//#define STATE_CHECKED   0X20
//#define STATE_HALFCHECKED   0X40
//#define STATE_READONLY   0X80
//#define STATE_EXPANDED   0X100
//#define STATE_COLLAPSED   0X200
//#define STATE_INVISIBLE   0X400
//#define STATE_VISITED   0X800
//#define STATE_LINKED   0X1000
//#define STATE_HASPOPUP   0X2000
//#define STATE_PROTECTED   0X4000
//#define STATE_REQUIRED   0X8000
//#define STATE_DEFUNCT   0X10000
//#define STATE_INVALID_ENTRY   0X20000
//#define STATE_MODAL   0X40000
//#define STATE_AUTOCOMPLETE   0x80000
//#define STATE_MULTILINE   0X100000
//#define STATE_ICONIFIED   0x200000
//#define STATE_OFFSCREEN   0x400000
//#define STATE_SELECTABLE   0x800000
//#define STATE_FOCUSABLE   0x1000000
//#define STATE_CLICKABLE   0x2000000
//#define STATE_EDITABLE   0x4000000
//#define STATE_CHECKABLE   0x8000000
//#define STATE_DRAGGABLE   0x10000000
//#define STATE_DRAGGING   0x20000000
//#define STATE_DROPTARGET   0x40000000
//#define STATE_SORTED   0x80000000
//#define STATE_SORTED_ASCENDING   0x100000000
//#define STATE_SORTED_DESCENDING   0x200000000
//
//#define STATE_HASLONGDESC   0x400000000
//#define STATE_PINNED   0x800000000
//#define STATE_HASFORMULA   0x1000000000 #Mostly for spreadsheets
//#define STATE_HASCOMMENT   0X2000000000
//

#define STATE_DISABLED    0x1
#define STATE_SELECTED    0x2
#define STATE_FOCUSED     0x4
#define STATE_PRESSED     0x8
#define STATE_CHECKED     0x10
#define STATE_READONLY    0x40
#define STATE_DEFAULT     0x100
#define STATE_EXPANDED    0x200
#define STATE_COLLAPSED   0x400
#define STATE_BUSY        0x800
#define STATE_INVISIBLE   0x8000
#define STATE_VISITED     0x800000
#define STATE_LINKED      0x400000
#define STATE_HASPOPUP    0x40000000
#define STATE_PROTECTED   0x20000000
#define STATE_OFFSCREEN   0x10000
#define STATE_SELECTABLE  0x200000
#define STATE_FOCUSABLE   0x100000



//definition of different types of XML service code
enum SERVICE_CODES
{
    COMMAND_LS = 1,
    COMMAND_LS_RESPONSE = 2,
    COMMAND_LS_APPLICATION = 3,
    COMMAND_LS_APPLICATION_RESPONSE = 4,
    COMMAND_UPDATE = 5,
    COMMAND_KEY_PRESS = 7,
    COMMAND_MOUSE_CLICK = 9,
    COMMAND_EVENTS = 15,
    COMMAND_QUIT = 100,
};

#define SERVICE_CODE_UNKNOWN -1
#define SERVICE_CODE_LS   1
#define SERVICE_CODE_LS_WINDOW   2
#define SERVICE_CODE_UPDATE   3

#define SERVICE_CODE_BECOME_NAVIGATOR 4
#define SERVICE_CODE_STRUCTURE_CHANGE_CHILD_ADD 5
#define SERVICE_CODE_STRUCTURE_CHANGE_CHILD_REMOVE 6
#define SERVICE_CODE_STRUCTURE_CHANGE_CHILD_INVALIDATE  7
#define SERVICE_CODE_STRUCTURE_CHANGE_CHILD_BULKADD  8
#define SERVICE_CODE_UPDATE_WINDOW   9
//#define SERVICE_CODE_STRUCTURE_CHANGE_CHILD_BULKREMOVE  9
//#define SERVICE_CODE_STRUCTURE_CHANGE_CHILD_REORDER  10

#endif
