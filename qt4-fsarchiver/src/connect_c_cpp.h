/*
 * qt4-fsarchiver: Filesystem Archiver
 *
 * Copyright (C) 2010, 2011 Dieter Baum.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License v2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */

#ifndef __CONNECT_C_CPP_H__
#define __CONNECT_C_CPP_H__

struct st_argv
{
int argc;
char *argv[15];
};

enum color_work {c_hard, c_hard_z, c_part, c_part_z, c_dir, c_dir_z, c_mbr, c_mbr_z, c_th};


int createar();
//int fsarchiver_aufruf(int argc, char *anlage0, char *anlage1, char *anlage2, char *anlage3, char *anlage4, char *anlage5, char *anlage6, char *anlage7,char *anlage8,char *anlage9,char *anlage10, char *anlage11, char *anlage12,char *anlage13,char *anlage14);

void fsarchiver_aufruf_c(struct st_argv *args);

void werte_uebergeben(float prozess, int anzahl);
float werte_holen(int auswahl);
void meldungen_uebergeben(char * meldung, int auswahl);
void werte_reset();
char *meldungen_holen(int auswahl);
float df(char *device, const char *mountPoint, int flag);
float freesize(char *Partition,char *mount, int flag);

#endif // __CONNECT_C_CPP_H__