#include "../idle.h"
#import <CoreFoundation/CoreFoundation.h>
#import <AppKit/AppKit.h>

double desktop_idle_get_time() {
  return CGEventSourceSecondsSinceLastEventType(kCGEventSourceStateHIDSystemState, kCGAnyInputEventType);
}

double desktop_idle_mouse_wheel_get_time() {
  return CGEventSourceSecondsSinceLastEventType(kCGEventSourceStateHIDSystemState, kCGEventScrollWheel);
}

double desktop_mouse_move_get_time() {
  return CGEventSourceSecondsSinceLastEventType(kCGEventSourceStateHIDSystemState, kCGEventMouseMoved);
}

double desktop_key_down() {
  return CGEventSourceSecondsSinceLastEventType(kCGEventSourceStateHIDSystemState, kCGEventKeyDown);
}

double desktop_mouse_left_click() {
  return CGEventSourceSecondsSinceLastEventType(kCGEventSourceStateHIDSystemState, kCGEventLeftMouseDown);
}

double desktop_mouse_right_click() {
  return CGEventSourceSecondsSinceLastEventType(kCGEventSourceStateHIDSystemState, kCGEventRightMouseDown);
}
