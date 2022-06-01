#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QWidget>
#include "ui_editprofile.h"

class EditProfile : public QWidget
{
	Q_OBJECT

public:
	EditProfile(QWidget *parent = 0);
	~EditProfile();

private:
	Ui::EditProfile ui;

	public slots:
		void saveChangesClicked();
		void cancelButtonClicked();
};

#endif // EDITPROFILE_H
