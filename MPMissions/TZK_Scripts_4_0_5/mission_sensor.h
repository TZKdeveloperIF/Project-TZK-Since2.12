
#define TZK_Mission_Sensor_gammeEnd(ITEM, pos1, pos2, pos3, radius_a, radius_b, trigType, trigText, trigName, trigExpCond) \
		class Item##ITEM \
		{ \
			position[]={pos1,pos2,pos3}; \
			a=radius_a; \
			b=radius_b; \
			repeating=1; \
			type=trigType; \
			age="UNKNOWN"; \
			text=trigText; \
			name=trigName; \
			expCond=trigExpCond; \
			class Effects \
			{ \
			}; \
		}; \
		
#define TZK_Mission_Sensor_Town(ITEM, pos1, pos2, pos3, radius_a, radius_b, trigName, scriptPath_mustBeString) \
		class Item##ITEM \
		{ \
			position[]={pos1,pos2,pos3}; \
			a=radius_a; \
			b=radius_b; \
			activationBy="ANY"; \
			age="UNKNOWN"; \
			name=# trigName##ITEM; \
			expCond="true"; \
			expActiv=# trigName##ITEM exec##scriptPath_mustBeString; \
			class Effects \
			{ \
			}; \
		}; \
		
#define TZK_Mission_Sensor_Radio(ITEM, channelName, channelNum, scriptPath_mustBeString) \
		class Item##ITEM \
		{ \
			position[]={0.000000,0.000000,0.000000}; \
			activationBy=channelName; \
			repeating=1; \
			age="UNKNOWN"; \
			expActiv=# [channelNum] exec##scriptPath_mustBeString; \
			class Effects \
			{ \
			}; \
		}; \
		
#define TZK_Mission_Sensor_Teleporter(ITEM, pos1, pos2, pos3, radius_a, radius_b, valueRectangular, nameDestination_mustBeString, scriptPath_mustBeString) \
		class Item##ITEM \
		{ \
			position[]={pos1,pos2,pos3}; \
			a=radius_a; \
			b=radius_b; \
			rectangular=valueRectangular; \
			activationBy="ANY"; \
			repeating=1; \
			age="UNKNOWN"; \
			expActiv=# [thisList,nameDestination_mustBeString] exec##scriptPath_mustBeString; \
			class Effects \
			{ \
			}; \
		}; \
		
#define TZK_Mission_Sensor_Teleporter_Angle(ITEM, pos1, pos2, pos3, radius_a, radius_b, theAngle, valueRectangular, nameDestination_mustBeString, scriptPath_mustBeString) \
		class Item##ITEM \
		{ \
			position[]={pos1,pos2,pos3}; \
			a=radius_a; \
			b=radius_b; \
			angle=theAngle; \
			rectangular=valueRectangular; \
			activationBy="ANY"; \
			repeating=1; \
			age="UNKNOWN"; \
			expActiv=# [thisList,nameDestination_mustBeString] exec##scriptPath_mustBeString; \
			class Effects \
			{ \
			}; \
		}; \
		
#define TZK_Mission_Sensor_Empty(ITEM) \
		class Item##ITEM \
		{ \
			position[]={0.000000,0.000000,0.000000}; \
			age="UNKNOWN"; \
			class Effects \
			{ \
			}; \
		}; \
