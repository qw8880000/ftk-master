/*
 * File: ftk_tab.h    
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief:   tab widget
 *
 * Copyright (c) 2009 - 2010  Li XianJing <xianjimli@hotmail.com>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2010-09-23 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef FTK_TAB_HOST_H
#define FTK_TAB_HOST_H

#include "ftk_widget.h"

FTK_BEGIN_DECLS

FtkWidget* ftk_tab_create(FtkWidget* parent, int x, int y, int width, int height);
Ret ftk_tab_add_title(FtkWidget* thiz, FtkWidget* title);
Ret ftk_tab_add_page(FtkWidget* thiz, FtkWidget* page);

Ret ftk_tab_click_title(FtkWidget* thiz, FtkWidget* title);

int ftk_tab_get_title_index(FtkWidget* thiz, FtkWidget* title);

Ret ftk_tab_set_selected_by_index(FtkWidget* thiz, int index);
int ftk_tab_get_selected_index(FtkWidget* thiz);

FTK_END_DECLS

#endif/*FTK_TAB_HOST_H*/

