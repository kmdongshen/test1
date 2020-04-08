#ifndef TEST1_H
#define TEST1_H

#define ROM_1_PATH "D:\ndicapi\sroms\8700339.rom"
#define ROM_2_PATH "D:\ndicapi\sroms\8700338.rom"

#include <QtWidgets/QMainWindow>
#include "ui_test1.h"

class test1 : public QMainWindow
{
	Q_OBJECT

public:
	test1(QWidget *parent = 0);
	~test1();

	int testCode();
private:
	Ui::test1Class ui;
};

#endif // TEST1_H
