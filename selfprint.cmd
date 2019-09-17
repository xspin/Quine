@echo off
set s='echo @echo off\necho set s=\x25s\x25\nprintf \x25s\x25'
echo @echo off 
echo set s=%s%
printf %s%
