#ifndef NSFW_NATIVE_INTERFACE_H
#define NSFW_NATIVE_INTERFACE_H

#include "Queue.h"
#include "linux/InotifyService.h"

class NativeInterface {
public:
  NativeInterface(std::string path);
  ~NativeInterface();
private:
  Queue mQueue;
  void *mNativeInterface;
};

#endif
