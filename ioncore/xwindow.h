/*
 * ion/ioncore/xwindow.h
 *
 * Copyright (c) Tuomo Valkonen 1999-2004. 
 *
 * Ion is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 */

#ifndef ION_IONCORE_XWINDOW_H
#define ION_IONCORE_XWINDOW_H

#include "common.h"
#include "rectangle.h"

#define XWINDOW_REGION_OF_T(WIN, TYPE) (TYPE*)xwindow_region_of_t(WIN, &CLASSDESCR(TYPE))
#define XWINDOW_REGION_OF(WIN) xwindow_region_of(WIN)

extern Window create_xwindow(WRootWin *rw, Window par,
                             const WRectangle *geom);

extern WRegion *xwindow_region_of(Window win);
extern WRegion *xwindow_region_of_t(Window win, const ClassDescr *descr);

extern void xwindow_restack(Window win, Window other, int stack_mode);

extern void xwindow_do_set_focus(Window win);

extern void xwindow_set_cursor(Window win, int cursor);

extern void xwindow_get_sizehints(Window win, XSizeHints *hints);

#endif /* ION_IONCORE_XWINDOW_H */