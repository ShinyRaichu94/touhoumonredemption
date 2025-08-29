SilphCo_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
	.byte 0

SilphCo_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
	end

SilphCo_1F_EventScript_Receptionist::
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
	end

SilphCo_1F_EventScript_FloorSign::
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_1F_EventScript_TrainInDevelopment::
	msgbox SilphCo_1F_Text_TrainInDevelopment, MSGBOX_NPC
	end

SilphCo_1F_EventScript_WorkerM1::
	msgbox SilphCo_1F_Text_ThatTrainerWhoSavedSilphCo, MSGBOX_NPC
	end

SilphCo_1F_EventScript_WorkerF1::
	msgbox SilphCo_1F_Text_ThatTeamRocket, MSGBOX_NPC
	end

SilphCo_1F_EventScript_WorkerF2::
	msgbox SilphCo_1F_Text_BackToWork, MSGBOX_NPC
	end

SilphCo_1F_EventScript_WorkerM2::
	msgbox SilphCo_1F_Text_ScientistsWhoWorkedForTeamRocket, MSGBOX_NPC
	end

SilphCo_1F_EventScript_WorkerM3::
	msgbox SilphCo_1F_Text_ToolsCanBeUsedForGoodOrEvil, MSGBOX_NPC
	end