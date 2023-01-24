#include <stdio.h>
#include <Windows.h>

#include "delay.h"

void DelayFrame() {
    Sleep(16);
}

void DelayFrames(int num_frames) {
    Sleep(16 * num_frames);
}
