#include "internal.h"

int playAudio(char* file){
  CoInitialize(NULL);
   HRESULT hr = S_OK;
   CComBSTR bstrVersionInfo; // Contains the version string.
   CComPtr<IWMPPlayer> spPlayer;  // Smart pointer to IWMPPlayer interface.

   hr = spPlayer.CoCreateInstance( __uuidof(WindowsMediaPlayer), 0, CLSCTX_INPROC_SERVER );

   if(SUCCEEDED(hr))
   {
       hr = spPlayer->get_versionInfo(&bstrVersionInfo);
   }

   if(SUCCEEDED(hr))
   {
       // Show the version in a message box.
       COLE2T pStr(bstrVersionInfo);
       MessageBox( NULL, (LPCSTR)pStr, _T("Windows Media Player Version"), MB_OK );
   }

   // Clean up.
   spPlayer.Release();
   CoUninitialize();
}
