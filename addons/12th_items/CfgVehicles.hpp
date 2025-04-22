class CfgVehicles
{ 
	class Land_Basketball_01_F;
	class Dons_Radio: Land_Basketball_01_F
		{
			scope = 2;
			scopeCurator = 2;
			editorCategory ="12th_Assets";
			editorSubcategory="Misc_Props";
			destrType="DestructNo";
			displayname = "Radio";
			editorPreview = QPATHTOF(icon.paa);
			model = QPATHTOF(Dons_Radio.p3d);
			description = "Radio Greble";
			ace_dragging_canCarry = 1;
			ace_dragging_carryPosition[] = {0, 1.5, 0};
			ace_dragging_carryDirection = 0;
		};
};