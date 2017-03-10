#include<Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
  int iRetKey=MessageBox(0,"Podoba ci sie","Aplikacja",MB_YESNO);
  if (iRetKey==IDYES) {
    MessageBox(0, "SUPER", "Aplikacja", MB_OK);
  }
  else 
  {
    MessageBox(0, "A co ci sie nie podoba?","Aplikacja",MB_OK | MB_ICONQUESTION);
  }
  return 0;
}