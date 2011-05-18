/*
 * qt4-fsarchiver: Filesystem Archiver
 *
 * Copyright (C) 2010 Dieter Baum.  All rights reserved.
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

#ifndef DIR_H
#define DIR_H
#include <QtGui>
#include <string.h>
#include "ui_dir_dialog.h"
#include "thread.h"
using namespace std;

class DialogDIR : public QWidget, private Ui::dir_dialog
{
	Q_OBJECT

public:
	DialogDIR(QWidget *parent = 0);

public slots:
	int folder_dir_path_einlesen();
        int questionMessage(QString frage);
        void treeview_show();
        
private:
    QDirModel *dirModel;
    QItemSelectionModel *selModel;
    QDirModel *dirModel1;
    QItemSelectionModel *selModel1;
    QLabel *questionLabel;
    Thread thread1;
    Thread thread2;
    void indicator_reset();

protected slots:
    void closeEvent(QCloseEvent* event);
    void elapsedTime();
    void remainingTime(int prozent);

private slots:    
   void startThread1();
   void thread1Ready();
   void startThread2();
   void thread2Ready();
	
};

#endif
