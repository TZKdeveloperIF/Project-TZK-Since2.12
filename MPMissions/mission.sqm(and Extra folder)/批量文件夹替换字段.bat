@echo off&SetLocal EnableDelayedExpansion
set /p old=shu ru yuan zi fu:
Set /p new=shu ru xin zi fu:
For /f "delims=" %%i in ('dir /b /ad') do (
	Set a=%%i
	Set b=!a:%old%=%new%!
	ren "!a!" "!b!" )
pause