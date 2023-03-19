# Build
```PowerShell
# using PowerShell here
# requires Windows SDK as Direct3D, which includes XInput, is now shipped with Windows SDK
# https://developer.microsoft.com/en-us/windows/downloads/windows-sdk/
${ Sample Path to Xinput library file } = "C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.22621.0\\um\\x64\\Xinput9_1_0.lib"
g++ -Wall main.cpp "${ Sample Path to Xinput library file }" -o Vibrate-Gamepad.exe
```

# License
MIT
