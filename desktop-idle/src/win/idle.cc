#include <stdint.h>
#include <stdio.h>
#include <windows.h>

double desktop_idle_get_time(void) {
  LASTINPUTINFO lif;
  lif.cbSize = sizeof(lif);
  if (!GetLastInputInfo(&lif)) return -1;
  uint64_t tickCount = GetTickCount64();
  uint32_t IdleTime = (uint32_t)((tickCount - (uint64_t)lif.dwTime));
  return static_cast<double>(IdleTime / 1000);
}

double desktop_idle_mouse_wheel_get_time(void) {
  LASTINPUTINFO lif;
  lif.cbSize = sizeof(lif);
  if (!GetLastInputInfo(&lif)) return -1;
  uint64_t tickCount = GetTickCount64();
  uint32_t IdleTime = (uint32_t)((tickCount - (uint64_t)lif.dwTime));
  return static_cast<double>(IdleTime / 1000);
}

double desktop_mouse_move_get_time(void) {
  LASTINPUTINFO lif;
  lif.cbSize = sizeof(lif);
  if (!GetLastInputInfo(&lif)) return -1;
  uint64_t tickCount = GetTickCount64();
  uint32_t IdleTime = (uint32_t)((tickCount - (uint64_t)lif.dwTime));
  return static_cast<double>(IdleTime / 1000);
}

double desktop_key_down(void) {
  LASTINPUTINFO lif;
  lif.cbSize = sizeof(lif);
  if (!GetLastInputInfo(&lif)) return -1;
  uint64_t tickCount = GetTickCount64();
  uint32_t IdleTime = (uint32_t)((tickCount - (uint64_t)lif.dwTime));
  return static_cast<double>(IdleTime / 1000);
}

double desktop_mouse_left_click(void) {
  LASTINPUTINFO lif;
  lif.cbSize = sizeof(lif);
  if (!GetLastInputInfo(&lif)) return -1;
  uint64_t tickCount = GetTickCount64();
  uint32_t IdleTime = (uint32_t)((tickCount - (uint64_t)lif.dwTime));
  return static_cast<double>(IdleTime / 1000);
}

double desktop_mouse_right_click(void) {
  LASTINPUTINFO lif;
  lif.cbSize = sizeof(lif);
  if (!GetLastInputInfo(&lif)) return -1;
  uint64_t tickCount = GetTickCount64();
  uint32_t IdleTime = (uint32_t)((tickCount - (uint64_t)lif.dwTime));
  return static_cast<double>(IdleTime / 1000);
}
