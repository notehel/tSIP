//---------------------------------------------------------------------------


#pragma hdrstop

#include "KeybKeys.h"
#include <string.h>

//---------------------------------------------------------------------------

#pragma package(smart_init)

const vkey vkey_list[] = {
	{ "VK_LBUTTON", 0x01, "Left mouse button" },
	{ "VK_RBUTTON", 0x02, "Right mouse button" },
	{ "VK_CANCEL", 0x03, "Control-break processing" },
	{ "VK_MBUTTON", 0x04, "Middle mouse button" },
	{ "VK_XBUTTON1", 0x05, "X1 mouse button" },
	{ "VK_XBUTTON2", 0x06, "X2 mouse button" },
	{ "VK_BACK", 0x08, "BACKSPACE" },
	{ "VK_TAB", 0x09, "TAB" },
	{ "VK_CLEAR", 0x0C, "CLEAR" },
	{ "VK_RETURN", 0x0D, "ENTER" },
	//{ "-", 0x0E - 0F, "Undefined" },
	{ "VK_PAUSE", 0x13, "PAUSE" },
	{ "VK_CAPITAL", 0x14, "CAPS LOCK" },
	{ "VK_KANA", 0x15, "IME Kana mode" },
	{ "VK_HANGUL", 0x15, "IME Hangul mode" },
	//{ "-", 0x16, "Undefined" },
	{ "VK_JUNJA", 0x17, "IME Junja mode" },
	{ "VK_FINAL", 0x18, "IME final mode" },
	{ "VK_HANJA", 0x19, "IME Hanja mode" },
	{ "VK_KANJI", 0x19, "IME Kanji mode" },
	//{ "-", 0x1A, "Undefined" },
	{ "VK_ESCAPE", 0x1B, "ESC" },
	{ "VK_CONVERT", 0x1C, "IME convert" },
	{ "VK_NONCONVERT", 0x1D, "IME nonconvert" },
	{ "VK_ACCEPT", 0x1E, "IME accept" },
	{ "VK_MODECHANGE", 0x1F, "IME mode change request" },
	{ "VK_SPACE", 0x20, "SPACEBAR" },
	{ "VK_PRIOR", 0x21, "PAGE UP" },
	{ "VK_NEXT", 0x22, "PAGE DOWN" },
	{ "VK_END", 0x23, "END" },
	{ "VK_HOME", 0x24, "HOME" },
	{ "VK_LEFT", 0x25, "LEFT ARROW" },
	{ "VK_UP", 0x26, "UP ARROW" },
	{ "VK_RIGHT", 0x27, "RIGHT ARROW" },
	{ "VK_DOWN", 0x28, "DOWN ARROW" },
	{ "VK_SELECT", 0x29, "SELECT" },
	{ "VK_PRINT", 0x2A, "PRINT" },
	{ "VK_EXECUTE", 0x2B, "EXECUTE" },
	{ "VK_SNAPSHOT", 0x2C, "PRINT SCREEN" },
	{ "VK_INSERT", 0x2D, "INS" },
	{ "VK_DELETE", 0x2E, "DEL" },
	{ "VK_HELP", 0x2F, "HELP" },
	{ "0 key", 0x30, "0 key" },
	{ "1 key", 0x31, "1 key" },
	{ "2 key", 0x32, "2 key" },
	{ "3 key", 0x33, "3 key" },
	{ "4 key", 0x34, "4 key" },
	{ "5 key", 0x35, "5 key" },
	{ "6 key", 0x36, "6 key" },
	{ "7 key", 0x37, "7 key" },
	{ "8 key", 0x38, "8 key" },
	{ "9 key", 0x39, "9 key" },
	//{ "undefined", 0x3A - 40, "undefined" },
	{ "A key", 0x41, "A key" },
	{ "B key", 0x42, "B key" },
	{ "C key", 0x43, "C key" },
	{ "D key", 0x44, "D key" },
	{ "E key", 0x45, "E key" },
	{ "F key", 0x46, "F key" },
	{ "G key", 0x47, "G key" },
	{ "H key", 0x48, "H key" },
	{ "I key", 0x49, "I key" },
	{ "J key", 0x4A, "J key" },
	{ "K key", 0x4B, "K key" },
	{ "L key", 0x4C, "L key" },
	{ "M key", 0x4D, "M key" },
	{ "N key", 0x4E, "N key" },
	{ "O key", 0x4F, "O key" },
	{ "P key", 0x50, "P key" },
	{ "Q key", 0x51, "Q key" },
	{ "R key", 0x52, "R key" },
	{ "S key", 0x53, "S key" },
	{ "T key", 0x54, "T key" },
	{ "U key", 0x55, "U key" },
	{ "V key", 0x56, "V key" },
	{ "W key", 0x57, "W key" },
	{ "X key", 0x58, "X key" },
	{ "Y key", 0x59, "Y key" },
	{ "Z key", 0x5A, "Z key" },
	{ "VK_LWIN", 0x5B, "Left Windows key (Natural keyboard)" },
	{ "VK_RWIN", 0x5C, "Right Windows key (Natural keyboard)" },
	{ "VK_APPS", 0x5D, "Applications key (Natural keyboard)" },
	//{ "-", 0x5E, "Reserved" },
	{ "VK_SLEEP", 0x5F, "Computer Sleep key" },
	{ "VK_NUMPAD0", 0x60, "Numeric keypad 0" },
	{ "VK_NUMPAD1", 0x61, "Numeric keypad 1" },
	{ "VK_NUMPAD2", 0x62, "Numeric keypad 2" },
	{ "VK_NUMPAD3", 0x63, "Numeric keypad 3" },
	{ "VK_NUMPAD4", 0x64, "Numeric keypad 4" },
	{ "VK_NUMPAD5", 0x65, "Numeric keypad 5" },
	{ "VK_NUMPAD6", 0x66, "Numeric keypad 6" },
	{ "VK_NUMPAD7", 0x67, "Numeric keypad 7" },
	{ "VK_NUMPAD8", 0x68, "Numeric keypad 8" },
	{ "VK_NUMPAD9", 0x69, "Numeric keypad 9" },
	{ "VK_MULTIPLY", 0x6A, "Multiply" },
	{ "VK_ADD", 0x6B, "Add" },
	{ "VK_SEPARATOR", 0x6C, "Separator" },
	{ "VK_SUBTRACT", 0x6D, "Subtract" },
	{ "VK_DECIMAL", 0x6E, "Decimal" },
	{ "VK_DIVIDE", 0x6F, "Divide" },
	{ "VK_F1", 0x70, "F1 key" },
	{ "VK_F2", 0x71, "F2 key" },
	{ "VK_F3", 0x72, "F3 key" },
	{ "VK_F4", 0x73, "F4 key" },
	{ "VK_F5", 0x74, "F5 key" },
	{ "VK_F6", 0x75, "F6 key" },
	{ "VK_F7", 0x76, "F7 key" },
	{ "VK_F8", 0x77, "F8 key" },
	{ "VK_F9", 0x78, "F9 key" },
	{ "VK_F10", 0x79, "F10 key" },
	{ "VK_F11", 0x7A, "F11 key" },
	{ "VK_F12", 0x7B, "F12 key" },
	{ "VK_F13", 0x7C, "F13 key" },
	{ "VK_F14", 0x7D, "F14 key" },
	{ "VK_F15", 0x7E, "F15 key" },
	{ "VK_F16", 0x7F, "F16 key" },
	{ "VK_F17", 0x80, "F17 key" },
	{ "VK_F18", 0x81, "F18 key" },
	{ "VK_F19", 0x82, "F19 key" },
	{ "VK_F20", 0x83, "F20 key" },
	{ "VK_F21", 0x84, "F21 key" },
	{ "VK_F22", 0x85, "F22 key" },
	{ "VK_F23", 0x86, "F23 key" },
	{ "VK_F24", 0x87, "F24 key" },
	//{ "-", 0x88 - 8F, "Unassigned" },
	{ "VK_NUMLOCK", 0x90, "NUM LOCK" },
	{ "VK_SCROLL", 0x91, "SCROLL LOCK" },
	//{ "-", 0x88 - 8F, "Unassigned" },
	{ "VK_NUMLOCK", 0x90, "NUM LOCK" },
	{ "VK_SCROLL", 0x91, "SCROLL LOCK" },
	//{"-", 0x92-96,"OEM specific"},
	//{ "-", 0x97 - 9F, "Unassigned" },
	{ "VK_LMENU", 0xA4, "Left MENU key" },
	{ "VK_RMENU", 0xA5, "Right MENU key" },
	{ "VK_BROWSER_BACK", 0xA6, "Browser Back key" },
	{ "VK_BROWSER_FORWARD", 0xA7, "Browser Forward key" },
	{ "VK_BROWSER_REFRESH", 0xA8, "Browser Refresh key" },
	{ "VK_BROWSER_STOP", 0xA9, "Browser Stop key" },
	{ "VK_BROWSER_SEARCH", 0xAA, "Browser Search key" },
	{ "VK_BROWSER_FAVORITES", 0xAB, "Browser Favorites key" },
	{ "VK_BROWSER_HOME", 0xAC, "Browser Start and Home key" },
	{ "VK_VOLUME_MUTE", 0xAD, "Volume Mute key" },
	{ "VK_VOLUME_DOWN", 0xAE, "Volume Down key" },
	{ "VK_VOLUME_UP", 0xAF, "Volume Up key" },
	{ "VK_MEDIA_NEXT_TRACK", 0xB0, "Next Track key" },
	{ "VK_MEDIA_PREV_TRACK", 0xB1, "Previous Track key" },
	{ "VK_MEDIA_STOP", 0xB2, "Stop Media key" },
	{ "VK_MEDIA_PLAY_PAUSE", 0xB3, "Play/Pause Media key" },
	{ "VK_LAUNCH_MAIL", 0xB4, "Start Mail key" },
	{ "VK_LAUNCH_MEDIA_SELECT", 0xB5, "Select Media key" },
	{ "VK_LAUNCH_APP1", 0xB6, "Start Application 1 key" },
	{ "VK_LAUNCH_APP2", 0xB7, "Start Application 2 key" },
	//{ "-", 0xB8 - B9, "Reserved" },
	{ "VK_PROCESSKEY", 0xE5, "IME PROCESS key" },
	//{ "-", 0xE6, "OEM specific" },
	{ "VK_PACKET", 0xE7, "Used to pass Unicode characters as if they were keystrokes. The VK_PACKET key is the low word of a 32-bit Virtual Key value used for non-keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP" },
	//{ "-", 0xE8, "Unassigned" },
	//  {"-",0xE6,"OEM specific"},
	{"VK_PACKET",0xE7,"Used to pass Unicode characters as if they were keystrokes. The VK_PACKET key is the low word of a 32-bit Virtual Key value used for non-keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP"},
	//  {"-",0xE8,"Unassigned"},
	//{ "-", 0xE9 - F5, "OEM specific" },
	{ "VK_ATTN", 0xF6, "Attn key" },
	{ "VK_CRSEL", 0xF7, "CrSel key" },
	{ "VK_EXSEL", 0xF8, "ExSel key" },
	{ "VK_EREOF", 0xF9, "Erase EOF key" },
	{ "VK_PLAY", 0xFA, "Play key" },
	{ "VK_ZOOM", 0xFB, "Zoom key" },
	{ "VK_PA1", 0xFD, "PA1 key" },
	{ "VK_OEM_CLEAR", 0xFE, "Clear key" }

};

int vkey_list_size(void)
{
	return sizeof(vkey_list)/sizeof(vkey_list[0]);
}

int vkey_find(const char* name)
{
	for (unsigned int i=0; i<vkey_list_size(); i++)
	{
		if (strcmp(name, vkey_list[i].name) == 0)
		{
        	return i;
		}
	}
	return -1;
}

