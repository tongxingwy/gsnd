package gsnd

//#include "external/include/gsnd.h"
import "C"

import(
  "log"
  )

func Say(content string){
  str := C.CString(content)
  C.prints(str)
}

func PlayAudio(fileUrl string){
  str := C.CString(fileUrl)
  log.Println(C.playAudio(str))
}
