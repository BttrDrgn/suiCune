// Landmarks indexes (see data/maps/landmarks.asm)
enum {
    LANDMARK_SPECIAL,
    // Johto landmarks
    LANDMARK_NEW_BARK_TOWN,
    LANDMARK_ROUTE_29,
    LANDMARK_CHERRYGROVE_CITY,
    LANDMARK_ROUTE_30,
    LANDMARK_ROUTE_31,
    LANDMARK_VIOLET_CITY,
    LANDMARK_SPROUT_TOWER,
    LANDMARK_ROUTE_32,
    LANDMARK_RUINS_OF_ALPH,
    LANDMARK_UNION_CAVE,
    LANDMARK_ROUTE_33,
    LANDMARK_AZALEA_TOWN,
    LANDMARK_SLOWPOKE_WELL,
    LANDMARK_ILEX_FOREST,
    LANDMARK_ROUTE_34,
    LANDMARK_GOLDENROD_CITY,
    LANDMARK_RADIO_TOWER,
    LANDMARK_ROUTE_35,
    LANDMARK_NATIONAL_PARK,
    LANDMARK_ROUTE_36,
    LANDMARK_ROUTE_37,
    LANDMARK_ECRUTEAK_CITY,
    LANDMARK_TIN_TOWER,
    LANDMARK_BURNED_TOWER,
    LANDMARK_ROUTE_38,
    LANDMARK_ROUTE_39,
    LANDMARK_OLIVINE_CITY,
    LANDMARK_LIGHTHOUSE,
    LANDMARK_BATTLE_TOWER,
    LANDMARK_ROUTE_40,
    LANDMARK_WHIRL_ISLANDS,
    LANDMARK_ROUTE_41,
    LANDMARK_CIANWOOD_CITY,
    LANDMARK_ROUTE_42,
    LANDMARK_MT_MORTAR,
    LANDMARK_MAHOGANY_TOWN,
    LANDMARK_ROUTE_43,
    LANDMARK_LAKE_OF_RAGE,
    LANDMARK_ROUTE_44,
    LANDMARK_ICE_PATH,
    LANDMARK_BLACKTHORN_CITY,
    LANDMARK_DRAGONS_DEN,
    LANDMARK_ROUTE_45,
    LANDMARK_DARK_CAVE,
    LANDMARK_ROUTE_46,
    LANDMARK_SILVER_CAVE,
    LANDMARK_PALLET_TOWN,
    LANDMARK_ROUTE_1,
    LANDMARK_VIRIDIAN_CITY,
    LANDMARK_ROUTE_2,
    LANDMARK_PEWTER_CITY,
    LANDMARK_ROUTE_3,
    LANDMARK_MT_MOON,
    LANDMARK_ROUTE_4,
    LANDMARK_CERULEAN_CITY,
    LANDMARK_ROUTE_24,
    LANDMARK_ROUTE_25,
    LANDMARK_ROUTE_5,
    LANDMARK_UNDERGROUND_PATH,
    LANDMARK_ROUTE_6,
    LANDMARK_VERMILION_CITY,
    LANDMARK_DIGLETTS_CAVE,
    LANDMARK_ROUTE_7,
    LANDMARK_ROUTE_8,
    LANDMARK_ROUTE_9,
    LANDMARK_ROCK_TUNNEL,
    LANDMARK_ROUTE_10,
    LANDMARK_POWER_PLANT,
    LANDMARK_LAVENDER_TOWN,
    LANDMARK_LAV_RADIO_TOWER,
    LANDMARK_CELADON_CITY,
    LANDMARK_SAFFRON_CITY,
    LANDMARK_ROUTE_11,
    LANDMARK_ROUTE_12,
    LANDMARK_ROUTE_13,
    LANDMARK_ROUTE_14,
    LANDMARK_ROUTE_15,
    LANDMARK_ROUTE_16,
    LANDMARK_ROUTE_17,
    LANDMARK_ROUTE_18,
    LANDMARK_FUCHSIA_CITY,
    LANDMARK_ROUTE_19,
    LANDMARK_ROUTE_20,
    LANDMARK_SEAFOAM_ISLANDS,
    LANDMARK_CINNABAR_ISLAND,
    LANDMARK_ROUTE_21,
    LANDMARK_ROUTE_22,
    LANDMARK_VICTORY_ROAD,
    LANDMARK_ROUTE_23,
    LANDMARK_INDIGO_PLATEAU,
    LANDMARK_ROUTE_26,
    LANDMARK_ROUTE_27,
    LANDMARK_TOHJO_FALLS,
    LANDMARK_ROUTE_28,
    LANDMARK_FAST_SHIP,
    NUM_LANDMARKS,
    // used in CaughtData
    LANDMARK_EVENT = 0x7F,
    LANDMARK_GIFT = 0x7E,
};
#define KANTO_LANDMARK LANDMARK_PALLET_TOWN

// Regions
enum {
    JOHTO_REGION,  // 0
    KANTO_REGION,  // 1
    NUM_REGIONS,
};
