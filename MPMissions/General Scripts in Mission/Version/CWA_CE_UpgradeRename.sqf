if (UsedVersion >= 2020) then {
	upgDefs select upgTL set [0,
		localize {TZK_LANG_UPG_WEAPON}
	];

	upgDefs select upgTownGroup set [0,
		localize {TZK_LANG_UPG_TG}
	];
	upgDefs select upgTownGroupb set [0,
		localize {TZK_LANG_UPG_TGA}
	];
	upgDefs select upgTownGroupH set [0,
		localize {TZK_LANG_UPG_TGAH}
	];

	upgDefs select upgInfLevel2 set [0,
		localize {TZK_LANG_UPG_INF_LV2}
	];
	upgDefs select upgInfLevel3 set [0,
		localize {TZK_LANG_UPG_INF_LV3}
	];
	upgDefs select upgInfLevel4 set [0,
		localize {TZK_LANG_UPG_INF_LV4}
	];

	upgDefs select upgRadarArtillery set [0,
		localize {TZK_LANG_UPG_ART_RADAR}
	];
	upgDefs select upgLongWeaponRange set [0,
		format [{%1m %2}, 2 *viewDistance, localize {TZK_LANG_UPG_LONG_RANGE}]
	];
	upgDefs select upgCCdistance set [0,
		format [{%1m %2}, distMaxCCUpgraded, localize {TZK_LANG_UPG_CC_DIST}]
	];
	upgDefs select upgNumBuildings set [0,
		localize {TZK_LANG_UPG_BUILDINGS}
	];

	upgDefs select upgSatCam set [0,
		localize {TZK_LANG_UPG_SATELLITE}
	];
	upgDefs select upgSatCamZoom set [0,
		localize {TZK_LANG_UPG_SAT_ZOOM}
	];
	upgDefs select upgSpySat set [0,
		localize {TZK_LANG_UPG_SPY_SAT}
	];

	upgDefs select upgWorkers set [0,
		localize {TZK_LANG_UPG_WORKER}
	];

	upgDefs select upgGunshipRocket set [0,
		localize {TZK_LANG_UPG_HELI_ROC}
	];
	upgDefs select upgPlaneAfterBurner set [0,
		localize {TZK_LANG_UPG_PLANE_AB}
	];
	upgDefs select upgSpoofMissile set [0,
		localize {TZK_LANG_UPG_SPOOF}
	];
	upgDefs select upgAltFlight set [0,
		localize {TZK_LANG_UPG_FLY_HEIGHT}
	];

	upgDefs select upgVehicleAirRadar set [0,
		localize {TZK_LANG_UPG_AA_RADAR}
	];
	upgDefs select upgRedTopRange set [0,
		localize {TZK_LANG_UPG_4000m_AA}
	];
	upgDefs select upgRedTopMagazines set [0,
		localize {TZK_LANG_UPG_2x_MAG}
	];
};