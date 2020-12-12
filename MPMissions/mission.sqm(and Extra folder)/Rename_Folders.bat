@echo off&SetLocal EnableDelayedExpansion
set /p old=Input the string you wish to replace:
Set /p new=Input the new string:
For /f "delims=" %%i in ('dir /b /ad') do (
	Set a=%%i
	Set b=!a:%old%=%new%!
	ren "!a!" "!b!" )
pause