class CfgMods
{
	class BPCamping
	{
		dir="BPCamping";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="BPCamping";
		credits="Beliy";
		author="Beliy";
		authorID="0";
		version="0.1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game", 
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"BPCamping\scripts\4_world"
				};
			};
		};
	};
};
class CfgPatches
{
	class DZ_Gear_Camping
	{
		units[]=
		{
			"TentMedium_Packed",
			"TentMedium_Pitched"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class Static;
	class FenceKit;
	class FenceKitPlacing;
	class Fence;
	
	class BPFenceKit: FenceKit
	{
		scope=2;
		displayName="$STR_CfgVehicles_FenceKit0";
		descriptionShort="$STR_CfgVehicles_FenceKit1";
		model="\BPcamping\bpfence_kit.p3d";
		rotationFlags=17;
		itemSize[]={1,5};
		weight=280;
		itemBehaviour=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
				class GlobalArmor
				{
					class Projectile
					{
						class Health
						{
							damage=0;
						};
						class Blood
						{
							damage=0;
						};
						class Shock
						{
							damage=0;
						};
					};
					class FragGrenade
					{
						class Health
						{
							damage=0;
						};
						class Blood
						{
							damage=0;
						};
						class Shock
						{
							damage=0;
						};
					};
				};
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Inventory: AnimSourceHidden
			{
			};
			class Placing: AnimSourceHidden
			{
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class crafting_1
				{
					soundSet="FenceKit_crafting_1_SoundSet";
					id=1111;
				};
				class crafting_2
				{
					soundSet="FenceKit_crafting_2_SoundSet";
					id=1112;
				};
				class crafting_3
				{
					soundSet="FenceKit_crafting_3_SoundSet";
					id=1113;
				};
				class crafting_4
				{
					soundSet="FenceKit_crafting_4_SoundSet";
					id=1114;
				};
				class crafting_5
				{
					soundSet="FenceKit_crafting_5_SoundSet";
					id=1115;
				};
			};
		};
	};
	class BPFenceKitPlacing: BPFenceKit
	{
		scope=2;
		model="\BPcamping\bpfence_kit_deployed.p3d";
		storageCategory=10;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\consumables\data\pile_of_planks_co.tga"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\fence_pile_of_planks.rvmat"
		};
		hologramMaterial="tent_medium";
		hologramMaterialPath="dz\gear\camping\data";
		alignHologramToTerain=0;
		slopeTolerance=0.30000001;
	};
	
	class BPFence: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Fence0";
		descriptionShort="$STR_CfgVehicles_Fence1";
		model="\BPcamping\fence1.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="false";
		lootCategory="Crafted";
		carveNavmesh=1;
		weight=10000;
		itemSize[]={2,3};
		physLayer="item_large";
		createProxyPhysicsOnInit="false";
		createdProxiesOnInit[]=
		{
			"Deployed"
		};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
		attachments[]=
		{
			"Att_CombinationLock",
			"Material_Nails",
			"Material_WoodenPlanks",
			"Material_WoodenLogs",
			"Material_MetalWire"
		};
		class GUIInventoryAttachmentsProps
		{
			class BP_Base
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_WoodenLogs"
				};
				icon="cat_bb_base";
				selection="wall";
			};
			class BP_Attachments
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Attachments";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
				selection="wall";
			};
			class Material
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Materials";
				description="";
				attachmentSlots[]=
				{
					"Material_Nails",
					"Material_WoodenPlanks",
					"Material_MetalSheets",
					"Material_MetalWire"
				};
				icon="cat_bb_material";
				selection="wall";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class AnimRotate
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class Wall_Interact_Rotate: AnimRotate
			{
			};
			class Wall_Gate_Rotate: AnimRotate
			{
			};
			class Wall_Base_Down_Rotate: AnimRotate
			{
			};
			class Wall_Base_Up_Rotate: AnimRotate
			{
			};
			class Wall_Wood_Down_Rotate: AnimRotate
			{
			};
			class Wall_Wood_Up_Rotate: AnimRotate
			{
			};
			class Material_WoodenLogs: AnimSourceHidden
			{
			};
			class Material_MetalWire: AnimSourceHidden
			{
			};
			class Deployed: AnimSourceHidden
			{
			};
			class Base: AnimSourceHidden
			{
			};
			class Wall_Gate: AnimSourceHidden
			{
			};
			class Wall_Base_Down: AnimSourceHidden
			{
			};
			class Wall_Base_Up: AnimSourceHidden
			{
			};
			class Wall_Wood_Down: AnimSourceHidden
			{
			};
			class Wall_Wood_Up: AnimSourceHidden
			{
			};
		};
		class Construction
		{
			class wall
			{
				class BP_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					is_base=1;
					id=1;
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=4;
					dismantle_action_type=4;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_WoodenLogs";
							quantity=2;
							lockable=1;
						};
					};
				};
				class wall_gate
				{
					name="$STR_CfgVehicles_Construction_Part_Gate";
					is_gate=1;
					id=5;
					required_parts[]=
					{
						"base",
						"wall_base_down",
						"wall_base_up"
					};
					conflicted_parts[]=
					{
						"wall_platform"
					};
					collision_data[]={};
					build_action_type=1;
					dismantle_action_type=1;
					material_type=5;
					class Materials
					{
						class Material1
						{
							type="MetalWire";
							slot_name="Material_MetalWire";
							quantity=-1;
							lockable=1;
						};
					};
				};
				class wall_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=6;
					required_parts[]=
					{
						"base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"wall_down_min",
						"wall_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=8;
						};
					};
				};
				class wall_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=7;
					required_parts[]=
					{
						"wall_base_down"
					};
					conflicted_parts[]=
					{
						"wall_metal_down"
					};
					collision_data[]=
					{
						"wall_down_min",
						"wall_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=10;
						};
					};
				};
				class wall_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=9;
					required_parts[]=
					{
						"base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"wall_up_min",
						"wall_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=8;
						};
					};
				};
				class wall_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=10;
					required_parts[]=
					{
						"wall_base_up"
					};
					conflicted_parts[]=
					{
						"wall_metal_up"
					};
					collision_data[]=
					{
						"wall_up_min",
						"wall_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=10;
						};
					};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[]={1,1,1,0.050000001};
				ambient[]={0.0099999998,0.0099999998,0.0099999998,0.0099999998};
				position="light";
				hitpoint="bulb";
				selection="bulb";
				size=0;
				radius=5;
				brightness=0.001;
				dayLight=1;
				heatHazeRadius=0;
				heatHazePower=0;
				fireEffect=0;
				fireEffectOctaves=0;
				fireEffectPersistence=0;
				fireEffectFract=0;
			};
		};
	};
	
};