@echo off
rem Сборка проекта
rem Путь к компилятору g++
set GPP=D:\libexec\mingw-get
rem Опции компиляции
set CFLAGS=-std=c++11 -Wall
rem Сборка библиотек
echo Компиляция libGame...
%GPP% %CFLAGS% -c libGame/board.cpp -o libGame/board.o
%GPP% %CFLAGS% -c libGame/coordinate.cpp -o libGame/coordinate.o
echo Компиляция libEngine...
%GPP% %CFLAGS% -c libEngine/engine.cpp -o libEngine/engine.o
echo Компиляция libPlayer...
%GPP% %CFLAGS% -c libPlayer/player.cpp -o libPlayer/player.o
rem Компоновка объектных файлов в библиотеки
%GPP% -shared -o libGame.dll libGame/board.o libGame/coordinate.o
%GPP% -shared -o libEngine.dll libEngine/engine.o
%GPP% -shared -o libPlayer.dll libPlayer/player.o
rem Компоновка объектных файлов в исполняемый файл
%GPP% %CFLAGS% -o XOgame.exe GameSample/main.cpp -L. -lGame -lEngine -lPlayer
echo Проект собран успешно.
pause
