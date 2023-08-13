/* SPDX-License-Identifier: MIT */
/*
 * resolution hook for Quake II engine
 *
 * Copyright 2023 Imam Hossain
 */

#define _GNU_SOURCE
#define __USE_GNU
#include <dlfcn.h>
#include <X11/Xlib.h>

typedef struct {
    char* str;
    int x;
    int y;
    int mode;
} res_list;

void _init(void)
{
res_list *modes;

modes = dlsym(RTLD_DEFAULT, "vid_modes");

if(modes==NULL)
{
    return;
}
else {

Display *xdisplay;
Window xwindow;
XWindowAttributes xw_attrs;

if ((xdisplay = XOpenDisplay(NULL)) == NULL) {
    return;
}

xwindow = DefaultRootWindow(xdisplay);

XGetWindowAttributes(xdisplay, xwindow, &xw_attrs);

XCloseDisplay(xdisplay);

modes[9].x=xw_attrs.width;
modes[9].y=xw_attrs.height;

}

}
