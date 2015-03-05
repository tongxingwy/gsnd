#ifndef _cocoa_platform_h_
#define _cocoa_platform_h_


#include <stdint.h>

#if defined(__OBJC__)
#import <Cocoa/Cocoa.h>
#import <AVFoundation/AVFoundation.h>
#else
#include <ApplicationServices/ApplicationServices.h>
typedef void* id;
#endif

#endif
