package gsnd

/*
#cgo CFLAGS: -x objective-c -D_GSND_COCOA
#cgo darwin LDFLAGS: -framework Cocoa -framework IOKit -framework CoreAudio -framework AVFoundation
#ifdef _GSND_COCOA
  #include "external/src/cocoa_gsnd.m"
#endif
*/
import "C"
