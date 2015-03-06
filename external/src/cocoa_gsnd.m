#include "internal.h"
int playAudio(char* file){
  NSString *soundFilePath = [[NSString alloc] initWithCString:(const char*)file encoding:NSUTF8StringEncoding];
  NSURL *fileURL = [[NSURL alloc] initFileURLWithPath: soundFilePath];
  AVAudioPlayer *player =
                [[AVAudioPlayer alloc] initWithContentsOfURL: fileURL
                                                       error: nil];
  if ([player prepareToPlay] == NO){
    return -1;
  }
  [player play];
  [fileURL release];
  [soundFilePath release];
  sleep(10);
  /*while(true){
    [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate distantFuture]];
  }*/
  return 1;
}
