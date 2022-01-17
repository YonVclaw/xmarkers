#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

class CfgMarkerClasses
{
	class xmark_assets
	{
		displayName="X Markers";
	};
};

#include "CfgMarkers.hpp"