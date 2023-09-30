@echo off
rem Сборка проекта

rem Путь к компилятору g++
set GPP=D:\bin\g++

rem Исходные файлы проекта
set SOURCES=board.cpp coordinate.cpp engine.cpp player.cpp

rem Опции компиляции
set CFLAGS=-std=c++11 -Wall

rem Компиляция исходных файлов в объектные файлы
for %%f in (%SOURCES%) do (
  echo Компиляция %%f...
  %GPP% %CFLAGS% -c %%f -o %%~nf.o
)

rem Компоновка объектных файлов в исполняемый файл
%GPP% -o XOgame.exe *.o

echo Проект собран успешно.

pause
