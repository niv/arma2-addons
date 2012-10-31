class CfgPatches {
	class addrwr {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {"caair", "caa10", "caair_e", "caair2"};
		version = 1.0;
		author = "niv";
	};
};

class CfgVehicles {
	class Air;
	class Plane;
	class Helicopter;
	
	class A10 : Plane {
		incommingmissliedetectionsystem = 16;
		lockdetectionsystem = "8 + 4";
	};
	
	class UH60_Base : Helicopter {
		incommingmissliedetectionsystem = 16;
		lockdetectionsystem = "8 + 4";
	};
};