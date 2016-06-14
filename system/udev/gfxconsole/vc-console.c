// Copyright 2016 The Fuchsia Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#define VCDEBUG 1

#include "vc.h"
#include "vcdebug.h"

mx_handle_t vc_console_getsurface(mx_device_t* dev, uint32_t* width, uint32_t* height) {
    return MX_HANDLE_INVALID;
}

void vc_console_invalidate(mx_device_t* dev, uint32_t x, uint32_t y, uint32_t width, uint32_t height) {
}

void vc_console_movecursor(mx_device_t* dev, uint32_t x, uint32_t y, bool visible) {
}

void vc_console_setpalette(mx_device_t* dev, uint32_t colors[16]) {
}

mx_status_t vc_console_readkey(mx_device_t* dev, uint32_t flags) {
    return ERR_NOT_SUPPORTED;
}