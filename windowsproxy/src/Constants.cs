﻿/* Copyright (C) 2014--2018 Stony Brook University
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

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WindowsProxy
{
    class Constants
    {

        public const int ROLE_UNKNOWN = 0;
        public const int ROLE_WINDOW = 1;
        public const int ROLE_TITLEBAR = 2;
        public const int ROLE_PANE = 3;
        public const int ROLE_DIALOG = 4;
        public const int ROLE_CHECKBOX = 5;
        public const int ROLE_RADIOBUTTON = 6;
        public const int ROLE_STATICTEXT = 7;
        public const int ROLE_EDITABLETEXT = 8;
        public const int ROLE_BUTTON = 9;
        public const int ROLE_MENUBAR = 10;
        public const int ROLE_MENUITEM = 11;
        public const int ROLE_POPUPMENU = 12;
        public const int ROLE_COMBOBOX = 13;
        public const int ROLE_LIST = 14;
        public const int ROLE_LISTITEM = 15;
        public const int ROLE_GRAPHIC = 16;
        public const int ROLE_HELPBALLOON = 17;
        public const int ROLE_TOOLTIP = 18;
        public const int ROLE_LINK = 19;
        public const int ROLE_TREEVIEW = 20;
        public const int ROLE_TREEVIEWITEM = 21;
        public const int ROLE_TAB = 22;
        public const int ROLE_TABCONTROL = 23;
        public const int ROLE_SLIDER = 24;
        public const int ROLE_PROGRESSBAR = 25;
        public const int ROLE_SCROLLBAR = 26;
        public const int ROLE_STATUSBAR = 27;
        public const int ROLE_TABLE = 28;
        public const int ROLE_TABLECELL = 29;
        public const int ROLE_TABLECOLUMN = 30;
        public const int ROLE_TABLEROW = 31;
        public const int ROLE_TABLECOLUMNHEADER = 32;
        public const int ROLE_TABLEROWHEADER = 33;
        public const int ROLE_FRAME = 34;
        public const int ROLE_TOOLBAR = 35;
        public const int ROLE_DROPDOWNBUTTON = 36;
        public const int ROLE_CLOCK = 37;
        public const int ROLE_SEPARATOR = 38;
        public const int ROLE_FORM = 39;
        public const int ROLE_HEADING = 40;
        public const int ROLE_HEADING1 = 41;
        public const int ROLE_HEADING2 = 42;
        public const int ROLE_HEADING3 = 43;
        public const int ROLE_HEADING4 = 44;
        public const int ROLE_HEADING5 = 45;
        public const int ROLE_HEADING6 = 46;
        public const int ROLE_PARAGRAPH = 47;
        public const int ROLE_BLOCKQUOTE = 48;
        public const int ROLE_TABLEHEADER = 49;
        public const int ROLE_TABLEBODY = 50;
        public const int ROLE_TABLEFOOTER = 51;
        public const int ROLE_DOCUMENT = 52;
        public const int ROLE_ANIMATION = 53;
        public const int ROLE_APPLICATION = 54;
        public const int ROLE_BOX = 55;
        public const int ROLE_GROUPING = 56;
        public const int ROLE_PROPERTYPAGE = 57;
        public const int ROLE_CANVAS = 58;
        public const int ROLE_CAPTION = 59;
        public const int ROLE_CHECKMENUITEM = 60;
        public const int ROLE_DATEEDITOR = 61;
        public const int ROLE_ICON = 62;
        public const int ROLE_DIRECTORYPANE = 63;
        public const int ROLE_EMBEDDEDOBJECT = 64;
        public const int ROLE_ENDNOTE = 65;
        public const int ROLE_FOOTER = 66;
        public const int ROLE_FOOTNOTE = 67;
        public const int ROLE_GLASSPANE = 69;
        public const int ROLE_HEADER = 70;
        public const int ROLE_IMAGEMAP = 71;
        public const int ROLE_INPUTWINDOW = 72;
        public const int ROLE_LABEL = 73;
        public const int ROLE_NOTE = 74;
        public const int ROLE_PAGE = 75;
        public const int ROLE_RADIOMENUITEM = 76;
        public const int ROLE_LAYEREDPANE = 77;
        public const int ROLE_REDUNDANTOBJECT = 78;
        public const int ROLE_ROOTPANE = 79;
        public const int ROLE_EDITBAR = 80;
        public const int ROLE_TERMINAL = 82;
        public const int ROLE_RICHEDIT = 83;
        public const int ROLE_RULER = 84;
        public const int ROLE_SCROLLPANE = 85;
        public const int ROLE_SECTION = 86;
        public const int ROLE_SHAPE = 87;
        public const int ROLE_SPLITPANE = 88;
        public const int ROLE_VIEWPORT = 89;
        public const int ROLE_TEAROFFMENU = 90;
        public const int ROLE_TEXTFRAME = 91;
        public const int ROLE_TOGGLEBUTTON = 92;
        public const int ROLE_BORDER = 93;
        public const int ROLE_CARET = 94;
        public const int ROLE_CHARACTER = 95;
        public const int ROLE_CHART = 96;
        public const int ROLE_CURSOR = 97;
        public const int ROLE_DIAGRAM = 98;
        public const int ROLE_DIAL = 99;
        public const int ROLE_DROPLIST = 100;
        public const int ROLE_SPLITBUTTON = 101;
        public const int ROLE_MENUBUTTON = 102;
        public const int ROLE_DROPDOWNBUTTONGRID = 103;
        public const int ROLE_EQUATION = 104;
        public const int ROLE_GRIP = 105;
        public const int ROLE_HOTKEYFIELD = 106;
        public const int ROLE_INDICATOR = 107;
        public const int ROLE_SPINBUTTON = 108;
        public const int ROLE_SOUND = 109;
        public const int ROLE_WHITESPACE = 110;
        public const int ROLE_TREEVIEWBUTTON = 111;
        public const int ROLE_IPADDRESS = 112;
        public const int ROLE_DESKTOPICON = 113;
        public const int ROLE_ALERT = 114;
        public const int ROLE_INTERNALFRAME = 115;
        public const int ROLE_DESKTOPPANE = 116;
        public const int ROLE_OPTIONPANE = 117;
        public const int ROLE_COLORCHOOSER = 118;
        public const int ROLE_FILECHOOSER = 119;
        public const int ROLE_FILLER = 120;
        public const int ROLE_MENU = 121;
        public const int ROLE_PANEL = 122;
        public const int ROLE_PASSWORDEDIT = 123;
        public const int ROLE_FONTCHOOSER = 124;
        public const int ROLE_LINE = 125;
        public const int ROLE_FONTNAME = 126;
        public const int ROLE_FONTSIZE = 127;
        public const int ROLE_BOLD = 128;
        public const int ROLE_ITALIC = 129;
        public const int ROLE_UNDERLINE = 130;
        public const int ROLE_FGCOLOR = 131;
        public const int ROLE_BGCOLOR = 132;
        public const int ROLE_SUPERSCRIPT = 133;
        public const int ROLE_SUBSCRIPT = 134;
        public const int ROLE_STYLE = 135;
        public const int ROLE_INDENT = 136;
        public const int ROLE_ALIGNMENT = 137;

        public const int ROLE_DATAGRID = 139;
        public const int ROLE_DATAITEM = 140;
        public const int ROLE_HEADERITEM = 141;
        public const int ROLE_THUMB = 142;
        public const int ROLE_CALENDAR = 143;

        public const String STATE_UNAVAILABLE = "1";
        public const String STATE_FOCUSED = "2";
        public const String STATE_SELECTED = "4";
        public const String STATE_BUSY = "8";
        public const String STATE_PRESSED = "16";
        public const String STATE_CHECKED = "32";
        public const String STATE_HALFCHECKED = "64";
        public const String STATE_READONLY = "128";
        public const String STATE_EXPANDED = "256";
        public const String STATE_COLLAPSED = "512";
        public const String STATE_INVISIBLE = "1024";
        public const String STATE_VISITED = "2048";
        public const String STATE_LINKED = "4096";
        public const String STATE_HASPOPUP = "8192";
        public const String STATE_PROTECTED = "16384";
        public const String STATE_REQUIRED = "32768";
        public const String STATE_DEFUNCT = "65536";
        public const String STATE_INVALID_ENTRY = "131072";
        public const String STATE_MODAL = "262144";
        public const String STATE_AUTOCOMPLETE = "524288";
        public const String STATE_MULTILINE = "1048576";
        public const String STATE_ICONIFIED = "2097152";
        public const String STATE_OFFSCREEN = "4194304";
        public const String STATE_SELECTABLE = "8388608";
        public const String STATE_FOCUSABLE = "16777216";
        public const String STATE_CLICKABLE = "33554432";
        public const String STATE_EDITABLE = "67108864";
        public const String STATE_CHECKABLE = "134217728";
        public const String STATE_DRAGGABLE = "268435456";
        public const String STATE_DRAGGING = "536870912";
        public const String STATE_DROPTARGET = "1073741824";
        public const String STATE_SORTED = "2147483648";
        public const String STATE_SORTED_ASCENDING = "4294967296";
        public const String STATE_SORTED_DESCENDING = "8589934592";
        public const String STATE_HASLONGDESC = "17179869184";
        public const String STATE_PINNED = "34359738368";
        public const String STATE_HASFORMULA = "68719476736";
        public const String STATE_HASCOMMENT = "137438953472";


    }
}
