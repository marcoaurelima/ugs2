#!bin/bash

g++ -Wall main.cpp -o ugs2 -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio src/UGSfunctions.cpp src/UGSGameMajor.cpp src/UGSLeftButtonsMenuMain.cpp src/UGSMat.cpp src/UGSMemuMainDetails.cpp src/UGSMenuMain.cpp src/UGSMenuMainCards.cpp src/UGSMenuMainDetails.cpp src/UGSMenuMainNovoJogo.cpp src/UGSMenuMainNovoJogoStep2.cpp src/UGSMusicPlayer.cpp src/UGSNotasConsecutivas.cpp src/UGSRock.cpp src/UGSScoreMajor.cpp src/UGSScoreMinor.cpp src/UGSScreenGame.cpp src/UGSTile.cpp 

