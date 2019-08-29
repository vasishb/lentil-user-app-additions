#include <node.h>
#include "idle.h"

namespace desktopIdle {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::Number;
using v8::Value;

void desktopIdleGetIdleTime(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  double idleSeconds = desktop_idle_get_time();
  args.GetReturnValue().Set(Number::New(isolate, static_cast<double>(idleSeconds)));
}

void desktopMouseWheelIdle(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  double idleSeconds = desktop_idle_mouse_wheel_get_time();
  args.GetReturnValue().Set(Number::New(isolate, static_cast<double>(idleSeconds)));
}

void desktopMouseMoveIdle(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  double idleSeconds = desktop_mouse_move_get_time();
  args.GetReturnValue().Set(Number::New(isolate, static_cast<double>(idleSeconds)));
}

void desktopKeyDown(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  double idleSeconds = desktop_key_down();
  args.GetReturnValue().Set(Number::New(isolate, static_cast<double>(idleSeconds)));
}

void desktopLeftMouseClick(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  double idleSeconds = desktop_mouse_left_click();
  args.GetReturnValue().Set(Number::New(isolate, static_cast<double>(idleSeconds)));
}

void desktopRightMouseClick(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  double idleSeconds = desktop_mouse_right_click();
  args.GetReturnValue().Set(Number::New(isolate, static_cast<double>(idleSeconds)));
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "getIdleTime", desktopIdleGetIdleTime);
  NODE_SET_METHOD(exports, "desktopMouseWheelIdleTime", desktopMouseWheelIdle);
  NODE_SET_METHOD(exports, "desktopMouseMoveIdleTime", desktopMouseMoveIdle);
  NODE_SET_METHOD(exports, "desktopKeyDownIdleTime", desktopKeyDown);
  NODE_SET_METHOD(exports, "desktopLeftMouseClickIdleTime", desktopLeftMouseClick);
  NODE_SET_METHOD(exports, "desktopRightMouseClickIdleTime", desktopRightMouseClick);
}

NODE_MODULE(desktopIdle, init)

}  // na
