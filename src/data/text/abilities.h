static const u8 sNoneDescription[] = _("No special ability.");
static const u8 sStenchDescription[] = _("Helps repel wild Puppets.");
static const u8 sDrizzleDescription[] = _("Summons rain in battle.");
static const u8 sSpeedBoostDescription[] = _("Gradually boosts Speed.");
static const u8 sBattleArmorDescription[] = _("Blocks critical hits.");
static const u8 sSturdyDescription[] = _("Negates 1-hit KO attacks.");
static const u8 sDampDescription[] = _("Prevents self-destruction.");
static const u8 sLimberDescription[] = _("Prevents paralysis.");
static const u8 sSandVeilDescription[] = _("Ups evasion in a sandstorm.");
static const u8 sStaticDescription[] = _("Paralyzes on contact.");
static const u8 sVoltAbsorbDescription[] = _("Turns electricity into HP.");
static const u8 sWaterAbsorbDescription[] = _("Changes water into HP.");
static const u8 sObliviousDescription[] = _("Prevents attraction.");
static const u8 sCloudNineDescription[] = _("Negates weather effects.");
static const u8 sCompoundEyesDescription[] = _("Raises accuracy.");
static const u8 sInsomniaDescription[] = _("Prevents sleep.");
static const u8 sColorChangeDescription[] = _("Changes type to foe's move.");
static const u8 sImmunityDescription[] = _("Prevents poisoning.");
static const u8 sFlashFireDescription[] = _("Powers up if hit by fire.");
static const u8 sShieldDustDescription[] = _("Prevents added effects.");
static const u8 sOwnTempoDescription[] = _("Prevents confusion.");
static const u8 sSuctionCupsDescription[] = _("Firmly anchors the body.");
static const u8 sIntimidateDescription[] = _("Lowers the foe's Attack.");
static const u8 sShadowTagDescription[] = _("Prevents the foe's escape.");
static const u8 sRoughSkinDescription[] = _("Hurts to touch.");
static const u8 sWonderGuardDescription[] = _("“Super effective” hits.");
static const u8 sLevitateDescription[] = _("Not hit by Earth attacks.");
static const u8 sEffectSporeDescription[] = _("Leaves status on contact.");
static const u8 sSynchronizeDescription[] = _("Passes on status problems.");
static const u8 sClearBodyDescription[] = _("Prevents ability reduction.");
static const u8 sNaturalCureDescription[] = _("Heals upon switching out.");
static const u8 sLightningRodDescription[] = _("Draws electrical moves.");
static const u8 sSereneGraceDescription[] = _("Promotes added effects.");
static const u8 sSwiftSwimDescription[] = _("Raises Speed in rain.");
static const u8 sChlorophyllDescription[] = _("Raises Speed in sunshine.");
static const u8 sIlluminateDescription[] = _("Encounter rate increases.");
static const u8 sTraceDescription[] = _("Copies special ability.");
static const u8 sHugePowerDescription[] = _("Raises Attack.");
static const u8 sPoisonPointDescription[] = _("Poisons foe on contact.");
static const u8 sInnerFocusDescription[] = _("Prevents flinching.");
static const u8 sMagmaArmorDescription[] = _("Resists Water moves.");
static const u8 sWaterVeilDescription[] = _("Prevents burns.");
static const u8 sMagnetPullDescription[] = _("Traps Steel-type Puppets.");
static const u8 sSoundproofDescription[] = _("Avoids sound-based moves.");
static const u8 sRainDishDescription[] = _("Slight HP recovery in rain.");
static const u8 sSandStreamDescription[] = _("Summons a sandstorm.");
static const u8 sPressureDescription[] = _("Raises foe's PP usage.");
static const u8 sThickFatDescription[] = _("Heat-and-cold protection.");
static const u8 sEarlyBirdDescription[] = _("Awakens quickly from sleep.");
static const u8 sFlameBodyDescription[] = _("Burns the foe on contact.");
static const u8 sRunAwayDescription[] = _("Makes escaping easier.");
static const u8 sKeenEyeDescription[] = _("Prevents loss of accuracy.");
static const u8 sHyperCutterDescription[] = _("Prevents Attack reduction.");
static const u8 sPickupDescription[] = _("May pick up items.");
static const u8 sTruantDescription[] = _("Moves only every two turns.");
static const u8 sHustleDescription[] = _("Trades accuracy for power.");
static const u8 sCuteCharmDescription[] = _("Infatuates on contact.");
static const u8 sPlusDescription[] = _("Powers up with Minus.");
static const u8 sMinusDescription[] = _("Powers up with Plus.");
static const u8 sForecastDescription[] = _("Changes with the weather.");
static const u8 sStickyHoldDescription[] = _("Prevents item theft.");
static const u8 sShedSkinDescription[] = _("Heals the body by shedding.");
static const u8 sGutsDescription[] = _("Ups Attack if suffering.");
static const u8 sMarvelScaleDescription[] = _("Ups Defense if suffering.");
static const u8 sLiquidOozeDescription[] = _("Draining causes injury.");
static const u8 sOvergrowDescription[] = _("Ups Nature moves in a pinch.");
static const u8 sBlazeDescription[] = _("Ups Fire moves in a pinch.");
static const u8 sTorrentDescription[] = _("Ups Water moves in a pinch.");
static const u8 sSwarmDescription[] = _("Ups Dream moves in a pinch.");
static const u8 sRockHeadDescription[] = _("Prevents recoil damage.");
static const u8 sDroughtDescription[] = _("Summons sunlight in battle.");
static const u8 sArenaTrapDescription[] = _("Prevents fleeing.");
static const u8 sVitalSpiritDescription[] = _("Prevents sleep.");
static const u8 sWhiteSmokeDescription[] = _("Prevents ability reduction.");
static const u8 sPurePowerDescription[] = _("Raises Attack.");
static const u8 sShellArmorDescription[] = _("Blocks critical hits.");
static const u8 sCacophonyDescription[] = _("Avoids sound-based moves.");
static const u8 sAirLockDescription[] = _("Negates weather effects.");

const u8 *const gAbilityDescriptionPointers[ABILITIES_COUNT] =
{
    [ABILITY_NONE] = sNoneDescription,
    [ABILITY_STENCH] = sStenchDescription,
    [ABILITY_DRIZZLE] = sDrizzleDescription,
    [ABILITY_SPEED_BOOST] = sSpeedBoostDescription,
    [ABILITY_BATTLE_ARMOR] = sBattleArmorDescription,
    [ABILITY_STURDY] = sSturdyDescription,
    [ABILITY_DAMP] = sDampDescription,
    [ABILITY_LIMBER] = sLimberDescription,
    [ABILITY_SAND_VEIL] = sSandVeilDescription,
    [ABILITY_STATIC] = sStaticDescription,
    [ABILITY_VOLT_ABSORB] = sVoltAbsorbDescription,
    [ABILITY_WATER_ABSORB] = sWaterAbsorbDescription,
    [ABILITY_OBLIVIOUS] = sObliviousDescription,
    [ABILITY_CLOUD_NINE] = sCloudNineDescription,
    [ABILITY_COMPOUND_EYES] = sCompoundEyesDescription,
    [ABILITY_INSOMNIA] = sInsomniaDescription,
    [ABILITY_COLOR_CHANGE] = sColorChangeDescription,
    [ABILITY_IMMUNITY] = sImmunityDescription,
    [ABILITY_FLASH_FIRE] = sFlashFireDescription,
    [ABILITY_SHIELD_DUST] = sShieldDustDescription,
    [ABILITY_OWN_TEMPO] = sOwnTempoDescription,
    [ABILITY_SUCTION_CUPS] = sSuctionCupsDescription,
    [ABILITY_INTIMIDATE] = sIntimidateDescription,
    [ABILITY_SHADOW_TAG] = sShadowTagDescription,
    [ABILITY_ROUGH_SKIN] = sRoughSkinDescription,
    [ABILITY_WONDER_GUARD] = sWonderGuardDescription,
    [ABILITY_LEVITATE] = sLevitateDescription,
    [ABILITY_EFFECT_SPORE] = sEffectSporeDescription,
    [ABILITY_SYNCHRONIZE] = sSynchronizeDescription,
    [ABILITY_CLEAR_BODY] = sClearBodyDescription,
    [ABILITY_NATURAL_CURE] = sNaturalCureDescription,
    [ABILITY_LIGHTNING_ROD] = sLightningRodDescription,
    [ABILITY_SERENE_GRACE] = sSereneGraceDescription,
    [ABILITY_SWIFT_SWIM] = sSwiftSwimDescription,
    [ABILITY_CHLOROPHYLL] = sChlorophyllDescription,
    [ABILITY_ILLUMINATE] = sIlluminateDescription,
    [ABILITY_TRACE] = sTraceDescription,
    [ABILITY_HUGE_POWER] = sHugePowerDescription,
    [ABILITY_POISON_POINT] = sPoisonPointDescription,
    [ABILITY_INNER_FOCUS] = sInnerFocusDescription,
    [ABILITY_MAGMA_ARMOR] = sMagmaArmorDescription,
    [ABILITY_WATER_VEIL] = sWaterVeilDescription,
    [ABILITY_MAGNET_PULL] = sMagnetPullDescription,
    [ABILITY_SOUNDPROOF] = sSoundproofDescription,
    [ABILITY_RAIN_DISH] = sRainDishDescription,
    [ABILITY_SAND_STREAM] = sSandStreamDescription,
    [ABILITY_PRESSURE] = sPressureDescription,
    [ABILITY_THICK_FAT] = sThickFatDescription,
    [ABILITY_EARLY_BIRD] = sEarlyBirdDescription,
    [ABILITY_FLAME_BODY] = sFlameBodyDescription,
    [ABILITY_RUN_AWAY] = sRunAwayDescription,
    [ABILITY_KEEN_EYE] = sKeenEyeDescription,
    [ABILITY_HYPER_CUTTER] = sHyperCutterDescription,
    [ABILITY_PICKUP] = sPickupDescription,
    [ABILITY_TRUANT] = sTruantDescription,
    [ABILITY_HUSTLE] = sHustleDescription,
    [ABILITY_CUTE_CHARM] = sCuteCharmDescription,
    [ABILITY_PLUS] = sPlusDescription,
    [ABILITY_MINUS] = sMinusDescription,
    [ABILITY_FORECAST] = sForecastDescription,
    [ABILITY_STICKY_HOLD] = sStickyHoldDescription,
    [ABILITY_SHED_SKIN] = sShedSkinDescription,
    [ABILITY_GUTS] = sGutsDescription,
    [ABILITY_MARVEL_SCALE] = sMarvelScaleDescription,
    [ABILITY_LIQUID_OOZE] = sLiquidOozeDescription,
    [ABILITY_OVERGROW] = sOvergrowDescription,
    [ABILITY_BLAZE] = sBlazeDescription,
    [ABILITY_TORRENT] = sTorrentDescription,
    [ABILITY_SWARM] = sSwarmDescription,
    [ABILITY_ROCK_HEAD] = sRockHeadDescription,
    [ABILITY_DROUGHT] = sDroughtDescription,
    [ABILITY_ARENA_TRAP] = sArenaTrapDescription,
    [ABILITY_VITAL_SPIRIT] = sVitalSpiritDescription,
    [ABILITY_WHITE_SMOKE] = sWhiteSmokeDescription,
    [ABILITY_PURE_POWER] = sPurePowerDescription,
    [ABILITY_SHELL_ARMOR] = sShellArmorDescription,
    [ABILITY_CACOPHONY] = sCacophonyDescription,
    [ABILITY_AIR_LOCK] = sAirLockDescription,
};

const u8 gAbilityNames[ABILITIES_COUNT][ABILITY_NAME_LENGTH + 1] =
{
    [ABILITY_NONE] = _("-------"),
    [ABILITY_STENCH] = _("Jealousy"),
    [ABILITY_DRIZZLE] = _("Drizzle"),
    [ABILITY_SPEED_BOOST] = _("Speed Boost"),
    [ABILITY_BATTLE_ARMOR] = _("Gaurd Armor"),
    [ABILITY_STURDY] = _("Sturdy"),
    [ABILITY_DAMP] = _("Damp"),
    [ABILITY_LIMBER] = _("Limber"),
    [ABILITY_SAND_VEIL] = _("Sand Veil"),
    [ABILITY_STATIC] = _("Static"),
    [ABILITY_VOLT_ABSORB] = _("Volt Absorb"),
    [ABILITY_WATER_ABSORB] = _("Water Absorb"),
    [ABILITY_OBLIVIOUS] = _("Oblivious"),
    [ABILITY_CLOUD_NINE] = _("Unconscious"),
    [ABILITY_COMPOUND_EYES] = _("Focus"),
    [ABILITY_INSOMNIA] = _("Insomnia"),
    [ABILITY_COLOR_CHANGE] = _("Mysterious"),
    [ABILITY_IMMUNITY] = _("Immunity"),
    [ABILITY_FLASH_FIRE] = _("Flash Fire"),
    [ABILITY_SHIELD_DUST] = _("Advent"),
    [ABILITY_OWN_TEMPO] = _("Own Tempo"),
    [ABILITY_SUCTION_CUPS] = _("Gate Keeper"),
    [ABILITY_INTIMIDATE] = _("Intimidate"),
    [ABILITY_SHADOW_TAG] = _("Shadow Tag"),
    [ABILITY_ROUGH_SKIN] = _("Doll Wall"),
    [ABILITY_WONDER_GUARD] = _("Play Ghost"),
    [ABILITY_LEVITATE] = _("Levitate"),
    [ABILITY_EFFECT_SPORE] = _("Infectious"),
    [ABILITY_SYNCHRONIZE] = _("Synchronize"),
    [ABILITY_CLEAR_BODY] = _("Hakurei Miko"),
    [ABILITY_NATURAL_CURE] = _("Natural Cure"),
    [ABILITY_LIGHTNING_ROD] = _("Lightningrod"),
    [ABILITY_SERENE_GRACE] = _("Serene Grace"),
    [ABILITY_SWIFT_SWIM] = _("Swift Swim"),
    [ABILITY_CHLOROPHYLL] = _("Chlorophyll"),
    [ABILITY_ILLUMINATE] = _("Diva"),
    [ABILITY_TRACE] = _("Trace"),
    [ABILITY_HUGE_POWER] = _("Unzan"),
    [ABILITY_POISON_POINT] = _("Poison Body"),
    [ABILITY_INNER_FOCUS] = _("Inner Focus"),
    [ABILITY_MAGMA_ARMOR] = _("Fire Veil"),
    [ABILITY_WATER_VEIL] = _("Water Veil"),
    [ABILITY_MAGNET_PULL] = _("Magnet Pull"),
    [ABILITY_SOUNDPROOF] = _("Soundproof"),
    [ABILITY_RAIN_DISH] = _("Rain Dish"),
    [ABILITY_SAND_STREAM] = _("Sand Stream"),
    [ABILITY_PRESSURE] = _("Pressure"),
    [ABILITY_THICK_FAT] = _("Wall of Ice"),
    [ABILITY_EARLY_BIRD] = _("Early Bird"),
    [ABILITY_FLAME_BODY] = _("Flame Body"),
    [ABILITY_RUN_AWAY] = _("Run Away"),
    [ABILITY_KEEN_EYE] = _("Keen Eye"),
    [ABILITY_HYPER_CUTTER] = _("Hi Strength"),
    [ABILITY_PICKUP] = _("Pickup"),
    [ABILITY_TRUANT] = _("Fretful"),
    [ABILITY_HUSTLE] = _("Hustle"),
    [ABILITY_CUTE_CHARM] = _("Cute Charm"),
    [ABILITY_PLUS] = _("Plus"),
    [ABILITY_MINUS] = _("Minus"),
    [ABILITY_FORECAST] = _("Forecast"),
    [ABILITY_STICKY_HOLD] = _("Collector"),
    [ABILITY_SHED_SKIN] = _("Maintenance"),
    [ABILITY_GUTS] = _("Guts"),
    [ABILITY_MARVEL_SCALE] = _("Spring Charm"),
    [ABILITY_LIQUID_OOZE] = _("Strange Mist"),
    [ABILITY_OVERGROW] = _("Overgrow"),
    [ABILITY_BLAZE] = _("Blaze"),
    [ABILITY_TORRENT] = _("Torrent"),
    [ABILITY_SWARM] = _("Inner Power"),
    [ABILITY_ROCK_HEAD] = _("Rock Head"),
    [ABILITY_DROUGHT] = _("Drought"),
    [ABILITY_ARENA_TRAP] = _("Arena Trap"),
    [ABILITY_VITAL_SPIRIT] = _("Vital Spirit"),
    [ABILITY_WHITE_SMOKE] = _("M. Barrier"),
    [ABILITY_PURE_POWER] = _("Pure Power"),
    [ABILITY_SHELL_ARMOR] = _("Shell Armor"),
    [ABILITY_CACOPHONY] = _("Cacophony"),
    [ABILITY_AIR_LOCK] = _("Hisouten"),
};
