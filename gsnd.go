package gsnd

//#include "external/include/gsnd.h"
import "C"

func Say(content string){
  str := C.CString(content)
  C.prints(str)
}
