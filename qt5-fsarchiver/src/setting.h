
/*
 * qt5-fsarchiver: Filesystem Archiver
 * 
* Copyright (C) 2008-2018 Dieter Baum.  All rights reserved.
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

#ifndef SETTING_H
#define SETTING_H
#include <QtGui>
#include <QMessageBox>
#include <QDialog>
#include "ui_setting.h"

using namespace std;

class DialogSetting : public QDialog, private Ui::setting_dialog
{
	Q_OBJECT

public:
	DialogSetting(QWidget *parent = 0);
	
private slots:	
   void setting_save();
   void zip_setting_einlesen();
};

#endif











