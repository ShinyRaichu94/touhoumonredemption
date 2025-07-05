Route6_UnusedHouse_MapScripts::
	.byte 0

Route6_UnusedHouse_Lass::
	faceplayer
	msgbox Route6_UnusedHouse_Text_WelcomeToOurBerryHouse
	goto_if_set FLAG_SYS_GAME_CLEAR, Route6_UnusedHouse_LassShopUpgrade2
	goto_if_set FLAG_RESCUED_MR_FUJI, Route6_UnusedHouse_LassShopUpgrade
	goto Route6_UnusedHouse_LassShop
	end

Route6_UnusedHouse_LassShop::
	message Route6_UnusedHouse_Text_CareToBuySomeBerries
	waitmessage
	pokemart Route6_UnusedHouse_Shop
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
Route6_UnusedHouse_Shop::
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_NONE
	release
	end

Route6_UnusedHouse_LassShopUpgrade::
	message Route6_UnusedHouse_Text_WeGotNewBerries
	waitmessage
	pokemart Route6_UnusedHouse_ShopUpgrade
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
Route6_UnusedHouse_ShopUpgrade::
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_NONE
	release
	end

Route6_UnusedHouse_LassShopUpgrade2::
	message Route6_UnusedHouse_Text_WeGotLotsOfBerries
	waitmessage
	pokemart Route6_UnusedHouse_ShopChampion
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
Route6_UnusedHouse_ShopChampion::
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_FIGY_BERRY
	.2byte ITEM_WIKI_BERRY
	.2byte ITEM_MAGO_BERRY
	.2byte ITEM_AGUAV_BERRY
	.2byte ITEM_IAPAPA_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_NONE
	release
	end

Route6_UnusedHouse_Woman::
	faceplayer
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, Route6_UnusedHouse_WomanShopRS
	goto_if_set FLAG_RESCUED_LOSTELLE, Route6_UnusedHouse_WomanShop
	msgbox Route6_UnusedHouse_Text_IDontHaveAnyBerries
	end

Route6_UnusedHouse_WomanShop::
	message Route6_UnusedHouse_Text_IGotSomeBerries
	waitmessage
	pokemart Route6_UnusedHouse_Shop2
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
Route6_UnusedHouse_Shop2::
	.2byte ITEM_RAZZ_BERRY
	.2byte ITEM_BLUK_BERRY
	.2byte ITEM_NANAB_BERRY
	.2byte ITEM_WEPEAR_BERRY
	.2byte ITEM_PINAP_BERRY
	.2byte ITEM_NONE
	release
	end

Route6_UnusedHouse_WomanShopRS::
	message Route6_UnusedHouse_Text_IGotMoreBerriesForSale
	waitmessage
	pokemart Route6_UnusedHouse_Shop2RS
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
Route6_UnusedHouse_Shop2RS::
	.2byte ITEM_LIECHI_BERRY
	.2byte ITEM_GANLON_BERRY
	.2byte ITEM_SALAC_BERRY
	.2byte ITEM_PETAYA_BERRY
	.2byte ITEM_APICOT_BERRY
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_RAZZ_BERRY
	.2byte ITEM_BLUK_BERRY
	.2byte ITEM_NANAB_BERRY
	.2byte ITEM_WEPEAR_BERRY
	.2byte ITEM_PINAP_BERRY
	.2byte ITEM_NONE
	release
	end