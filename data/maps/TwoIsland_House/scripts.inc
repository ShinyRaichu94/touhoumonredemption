TwoIsland_House_EventScript_MoveManiacBrother::
	message TwoIsland_House_Text_Shop
	waitmessage
	pokemart TwoIsland_House_EventScript_Shop
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
TwoIsland_House_EventScript_Shop::
	.2byte ITEM_TM03
	.2byte ITEM_TM10
	.2byte ITEM_TM12
	.2byte ITEM_TM16
	.2byte ITEM_TM20
	.2byte ITEM_TM27
	.2byte ITEM_TM33
	.2byte ITEM_TM34
	.2byte ITEM_TM39
	.2byte ITEM_TM40
	.2byte ITEM_TM47
	.2byte ITEM_TM48
	.2byte ITEM_TM49
	.2byte ITEM_NONE
	release
	end

TwoIsland_House_EventScript_Woman::
	msgbox TwoIsland_House_Text_MyHusbandsBrother, MSGBOX_NPC
	end