@echo off
echo ��������.a�ļ�
for /R . %%i in (*.lib) do copy %%i %%~dpi\lib%%~ni.a
pause