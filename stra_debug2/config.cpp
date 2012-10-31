// config.bin - 00:41:04 10/31/12, generated in 0.01 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define VSoft		0
#define VArmor		1
#define VAir		2

class CfgPatches {
	class stra_debug2 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {CAUI};
	};
};
class RscStandardDisplay;	// External class reference
class RscText;	// External class reference
class RscEdit;	// External class reference
class RscButton_small;	// External class reference
class RscPicture;	// External class reference
class CA_Title;	// External class reference
class RscShortcutButtonMain;	// External class reference
class RscXKeyShadow;	// External class reference
class RscShortcutButton;	// External class reference

class RscGroupBox2 : RscText {
	type = VSoft;
	idc = -1;
	style = 112;
	text = "";
	font = "BitStream";
	sizeEx = 0.02;
};

class RscDisplayInterrupt : RscStandardDisplay {
	class controls {
		class PG_Save;	// External class reference
		
		class B_stra_debug : PG_Save {
			idc = 113800;
			y = 100;
			text = "Console";
			default = 1;
			action = "createdialog 'stra_debug';";
		};
	};
};

class RscDisplayInterruptEditorPreview : RscStandardDisplay {
	class controls {
		class ButtonCancel;	// External class reference
		
		class B_stra_debug : ButtonCancel {
			idc = 113800;
			y = 100;
			text = "Console";
			default = 1;
			action = "createdialog 'stra_debug';";
		};
	};
};

class RscDisplayMPInterrupt : RscStandardDisplay {
	class controls {
		class CA_B_SAVE;	// External class reference
		
		class B_stra_debug : CA_B_SAVE {
			idc = 113800;
			y = 100;
			text = "Console";
			default = 1;
			action = "createdialog 'stra_debug';";
		};
	};
};

class stra_debug {
	idd = 316000;
	movingEnable = 1;
	onLoad = "_sqf = [_this,'load'] call compile preprocessfilelinenumbers 'ca\stra_debug2\scripts\init.sqf'; stra_debug_run = true;";
	onUnload = "_sqf = [_this,'unload'] call compile preprocessfilelinenumbers 'ca\stra_debug2\scripts\init.sqf'; stra_debug_run = false;";
	
	class Controls {
		class Drag : RscGroupBox2 {
			x = 0.1;
			y = 0.07;
			w = 0.8;
			h = 0.83;
			colorbackground[] = {0, 0, 0, 0.8};
			colortext[] = {0, 0, 0, 0};
			moving = 1;
		};
		
		class Header : RscText {
			style = 2;
			x = 0.1;
			y = 0.07;
			w = 0.8;
			h = 0.04;
			text = "Debug Console";
			sizeEx = 0.04;
			colortext[] = {1, 1, 1, 1};
		};
		
		class SubBackground1 : RscGroupBox2 {
			x = 0.11;
			y = 0.115;
			w = 0.78;
			h = 0.41;
			style = 128;
			colorBackground[] = {0.709, 0.972, 0.384, 0.2};
		};
		
		class SubBackground2 : RscGroupBox2 {
			x = 0.11;
			y = 0.535;
			w = 0.78;
			h = 0.35;
			style = 128;
			colorBackground[] = {0.709, 0.972, 0.384, 0.2};
		};
		
		class ValueInput1 : RscEdit {
			IDC = 316011;
			x = 0.12;
			y = 0.125;
			w = 0.76;
			h = 0.04;
			autocomplete = "scripting";
		};
		
		class ValueOutput1 : RscEdit {
			IDC = 316012;
			x = 0.12;
			y = 0.165-0.001;
			w = 0.76;
			h = 0.04;
		};
		
		class ValueInput2 : ValueInput1 {
			IDC = 316021;
			y = 0.225;
		};
		
		class ValueOutput2 : ValueOutput1 {
			IDC = 316022;
			y = 0.265-0.001;
		};
		
		class ValueInput3 : ValueInput1 {
			IDC = 316031;
			y = 0.325;
		};
		
		class ValueOutput3 : ValueOutput1 {
			IDC = 316032;
			y = 0.365-0.001;
		};
		
		class ValueInput4 : ValueInput1 {
			IDC = 316041;
			y = 0.425;
		};
		
		class ValueOutpu4 : ValueOutput1 {
			IDC = 316042;
			y = 0.465-0.001;
		};
		
		class CommandInput1 : RscEdit {
			IDC = 316101;
			x = 0.12;
			y = 0.55;
			w = 0.695;
			h = 0.04;
			autocomplete = "scripting";
		};
		
		class CommandButton1 : RscButton_small {
			idc = -1;
			x = 0.82;
			y = 0.55;
			w = 0.06;
			h = 0.04;
			colorText[] = {0.75, 0.75, 0.75, 1};
			colorBackground[] = {0.709/2, 0.972/2, 0.384/2, 1};
			text = "Exec";
			tooltip = "Ctrl+1";
			action = "call compile (ctrlText 316101);";
			default = 1;
		};
		
		class CommandInput2 : CommandInput1 {
			IDC = 316102;
			y = 0.6;
		};
		
		class CommandButton2 : CommandButton1 {
			y = 0.6;
			tooltip = "Ctrl+2";
			action = "call compile (ctrlText 316102);";
			default = 0;
		};
		
		class CommandInput3 : CommandInput1 {
			IDC = 316103;
			y = 0.65;
		};
		
		class CommandButton3 : CommandButton1 {
			y = 0.65;
			tooltip = "Ctrl+3";
			action = "call compile (ctrlText 316103);";
			default = 0;
		};
		
		class CommandInput4 : CommandInput1 {
			IDC = 316104;
			y = 0.7;
		};
		
		class CommandButton4 : CommandButton1 {
			y = 0.7;
			tooltip = "Ctrl+4";
			action = "call compile (ctrlText 316104);";
			default = 0;
		};
		
		class CommandInput5 : CommandInput1 {
			IDC = 316105;
			y = 0.75;
		};
		
		class CommandButton5 : CommandButton1 {
			y = 0.75;
			tooltip = "Ctrl+5";
			action = "call compile (ctrlText 316105);";
			default = 0;
		};
		
		class CommandInput6 : CommandInput1 {
			IDC = 316106;
			y = 0.8;
		};
		
		class CommandButton6 : CommandButton1 {
			y = 0.8;
			tooltip = "Ctrl+6";
			action = "call compile (ctrlText 316106);";
			default = 0;
		};
	};
};
