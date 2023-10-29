Desert_MapScripts::
	.byte 0

Desert_EventScript_Marcel::
	trainerbattle_double TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat, Route121_Text_MarcelNotEnough
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_Text_MarcelNotEnough:
	.string "Oh, now what happened here?$"