@echo off
if exist bazelisk.exe (
	echo already downloaded
	bazelisk.exe
) else (
	curl -L https://github.com/bazelbuild/bazelisk/releases/download/v1.15.0/bazelisk-windows-amd64.exe --output bazelisk.exe 
)