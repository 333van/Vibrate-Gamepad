// #include <iostream>
#include <Windows.h>
#include <xinput.h>

// using namespace std;

int main(
  // int argc, char *argv[]
)
{
  DWORD controllerIndex = 0;
  /* 
  int userDefinedControllerIndex = 0;

  if(argc == 1){
    cout << "Defaulting to controllerIndex: 0" << endl;
  }
  else if(argc == 2){
    userDefinedControllerIndex = stoi(argv[1]);
    if(userDefinedControllerIndex < 0 || userDefinedControllerIndex > 3){
      cout << "Only index 0-3 is supported: " << endl;
      cout << "https://learn.microsoft.com/en-us/windows/win32/xinput/getting-started-with-xinput#introduction-to-xinput" << endl;
      cout << "Defaulting to controllerIndex 0" << endl;
    }else{
      cout << "using userDefinedControllerIndex: " << userDefinedControllerIndex << endl;
      controllerIndex = userDefinedControllerIndex;
    }
  }else{
    cout << "Defaulting to controllerIndex 0" << endl;
  }
  */
  
  // // Check if the gamepad is connected
  // XINPUT_STATE controllerState;
  // ZeroMemory(&controllerState, sizeof(XINPUT_STATE));
  // XInputGetState(controllerIndex, &controllerState);

  XINPUT_VIBRATION v; // v for vibration
  ZeroMemory(&v, sizeof(XINPUT_VIBRATION));
  v.wLeftMotorSpeed  = 65535; // full speed
  v.wRightMotorSpeed = 65535; // full speed
  while(true)
    XInputSetState(controllerIndex, &v);

  return 0;
}
