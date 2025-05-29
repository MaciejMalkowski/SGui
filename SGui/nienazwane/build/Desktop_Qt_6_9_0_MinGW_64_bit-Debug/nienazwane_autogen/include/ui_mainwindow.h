/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sterownik
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *LewyPasek;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QWidget *Devices;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QWidget *Process;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QWidget *Graphics;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QWidget *Settings;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QStackedWidget *MainPasek;
    QWidget *MainPage;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_4;
    QLabel *label_9;
    QWidget *DevicesPage;
    QHBoxLayout *horizontalLayout_17;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_13;
    QLabel *label;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_15;
    QLabel *PO1_status;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QLabel *PO1_tryb;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLabel *PO1_speed;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_3;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_19;
    QLabel *VO1_status;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_20;
    QLabel *VO1_tryb;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_2;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_16;
    QLabel *PO2_status;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_17;
    QLabel *PO2_tryb;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_18;
    QLabel *PO2_speed;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_4;
    QWidget *widget_25;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_21;
    QLabel *VO2_status;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_22;
    QLabel *VO2_tryb;
    QWidget *ConnectioError;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_15;
    QLabel *label_12;
    QWidget *ProcessesPage;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_8;
    QLabel *label_10;
    QWidget *widget_14;
    QLabel *label_11;
    QWidget *GraphicsPage;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_5;
    QWidget *SettingsPage;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_7;
    QSlider *horizontalSlider;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *Sterownik)
    {
        if (Sterownik->objectName().isEmpty())
            Sterownik->setObjectName("Sterownik");
        Sterownik->resize(998, 502);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/window_icon/computer-cpu.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Sterownik->setWindowIcon(icon);
        Sterownik->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	text-align: left;\n"
"	padding: 2px 5px;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"	background-color: gray;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(Sterownik);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LewyPasek = new QWidget(centralwidget);
        LewyPasek->setObjectName("LewyPasek");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LewyPasek->sizePolicy().hasHeightForWidth());
        LewyPasek->setSizePolicy(sizePolicy);
        LewyPasek->setMinimumSize(QSize(150, 0));
        LewyPasek->setStyleSheet(QString::fromUtf8("#LewyPasek\n"
"{\n"
"	background-color:  #1F3B4D;\n"
"	color: white;\n"
"}"));
        verticalLayout = new QVBoxLayout(LewyPasek);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 11);
        label_5 = new QLabel(LewyPasek);
        label_5->setObjectName("label_5");
        QFont font;
        font.setPointSize(12);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: white;"));

        verticalLayout->addWidget(label_5);

        Devices = new QWidget(LewyPasek);
        Devices->setObjectName("Devices");
        verticalLayout_2 = new QVBoxLayout(Devices);
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(Devices);
        pushButton->setObjectName("pushButton");
        pushButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        pushButton->setStyleSheet(QString::fromUtf8("	color: white;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/folder.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon1);

        verticalLayout_2->addWidget(pushButton);


        verticalLayout->addWidget(Devices);

        Process = new QWidget(LewyPasek);
        Process->setObjectName("Process");
        Process->setStyleSheet(QString::fromUtf8("	color: white;"));
        verticalLayout_3 = new QVBoxLayout(Process);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 11, -1, -1);
        pushButton_2 = new QPushButton(Process);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/cpu.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon2);

        verticalLayout_3->addWidget(pushButton_2);


        verticalLayout->addWidget(Process);

        Graphics = new QWidget(LewyPasek);
        Graphics->setObjectName("Graphics");
        Graphics->setStyleSheet(QString::fromUtf8("	color: white;"));
        verticalLayout_4 = new QVBoxLayout(Graphics);
        verticalLayout_4->setSpacing(7);
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_3 = new QPushButton(Graphics);
        pushButton_3->setObjectName("pushButton_3");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/image.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon3);

        verticalLayout_4->addWidget(pushButton_3);


        verticalLayout->addWidget(Graphics, 0, Qt::AlignmentFlag::AlignTop);

        Settings = new QWidget(LewyPasek);
        Settings->setObjectName("Settings");
        verticalLayout_5 = new QVBoxLayout(Settings);
        verticalLayout_5->setObjectName("verticalLayout_5");
        pushButton_4 = new QPushButton(Settings);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(16777215, 16777215));
        pushButton_4->setStyleSheet(QString::fromUtf8("	color: white;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/settings.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon4);

        verticalLayout_5->addWidget(pushButton_4, 0, Qt::AlignmentFlag::AlignTop);


        verticalLayout->addWidget(Settings, 0, Qt::AlignmentFlag::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(LewyPasek);

        MainPasek = new QStackedWidget(centralwidget);
        MainPasek->setObjectName("MainPasek");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MainPasek->sizePolicy().hasHeightForWidth());
        MainPasek->setSizePolicy(sizePolicy1);
        MainPasek->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainPasek->setStyleSheet(QString::fromUtf8(""));
        MainPage = new QWidget();
        MainPage->setObjectName("MainPage");
        verticalLayout_10 = new QVBoxLayout(MainPage);
        verticalLayout_10->setObjectName("verticalLayout_10");
        widget_4 = new QWidget(MainPage);
        widget_4->setObjectName("widget_4");
        label_9 = new QLabel(widget_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(170, 160, 371, 81));
        label_9->setStyleSheet(QString::fromUtf8(""));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9->setWordWrap(true);

        verticalLayout_10->addWidget(widget_4);

        MainPasek->addWidget(MainPage);
        DevicesPage = new QWidget();
        DevicesPage->setObjectName("DevicesPage");
        DevicesPage->setMinimumSize(QSize(717, 0));
        DevicesPage->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_17 = new QHBoxLayout(DevicesPage);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        widget = new QWidget(DevicesPage);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMinimumSize(QSize(0, 0));
        widget->setStyleSheet(QString::fromUtf8("#widget_10, #widget_11, #widget_8, #widget_9\n"
"{\n"
"	border: 2px solid #1F3B4D;;\n"
"	border-radius: 10px;\n"
"	background-color: #E5E4E2;\n"
"	color: white;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget_6 = new QWidget(widget);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_6 = new QVBoxLayout(widget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget_11 = new QWidget(widget_6);
        widget_11->setObjectName("widget_11");
        widget_11->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_13 = new QVBoxLayout(widget_11);
        verticalLayout_13->setObjectName("verticalLayout_13");
        label = new QLabel(widget_11);
        label->setObjectName("label");

        verticalLayout_13->addWidget(label);

        widget_18 = new QWidget(widget_11);
        widget_18->setObjectName("widget_18");
        horizontalLayout_9 = new QHBoxLayout(widget_18);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_15 = new QLabel(widget_18);
        label_15->setObjectName("label_15");

        horizontalLayout_9->addWidget(label_15);

        PO1_status = new QLabel(widget_18);
        PO1_status->setObjectName("PO1_status");

        horizontalLayout_9->addWidget(PO1_status);


        verticalLayout_13->addWidget(widget_18);

        widget_17 = new QWidget(widget_11);
        widget_17->setObjectName("widget_17");
        horizontalLayout_8 = new QHBoxLayout(widget_17);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_14 = new QLabel(widget_17);
        label_14->setObjectName("label_14");

        horizontalLayout_8->addWidget(label_14);

        PO1_tryb = new QLabel(widget_17);
        PO1_tryb->setObjectName("PO1_tryb");

        horizontalLayout_8->addWidget(PO1_tryb);


        verticalLayout_13->addWidget(widget_17);

        widget_16 = new QWidget(widget_11);
        widget_16->setObjectName("widget_16");
        horizontalLayout_7 = new QHBoxLayout(widget_16);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_13 = new QLabel(widget_16);
        label_13->setObjectName("label_13");

        horizontalLayout_7->addWidget(label_13);

        PO1_speed = new QLabel(widget_16);
        PO1_speed->setObjectName("PO1_speed");

        horizontalLayout_7->addWidget(PO1_speed);


        verticalLayout_13->addWidget(widget_16);


        verticalLayout_6->addWidget(widget_11);

        widget_10 = new QWidget(widget_6);
        widget_10->setObjectName("widget_10");
        widget_10->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_14 = new QVBoxLayout(widget_10);
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_3 = new QLabel(widget_10);
        label_3->setObjectName("label_3");

        verticalLayout_14->addWidget(label_3);

        widget_23 = new QWidget(widget_10);
        widget_23->setObjectName("widget_23");
        horizontalLayout_13 = new QHBoxLayout(widget_23);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_19 = new QLabel(widget_23);
        label_19->setObjectName("label_19");

        horizontalLayout_13->addWidget(label_19);

        VO1_status = new QLabel(widget_23);
        VO1_status->setObjectName("VO1_status");

        horizontalLayout_13->addWidget(VO1_status);


        verticalLayout_14->addWidget(widget_23);

        widget_22 = new QWidget(widget_10);
        widget_22->setObjectName("widget_22");
        horizontalLayout_14 = new QHBoxLayout(widget_22);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_20 = new QLabel(widget_22);
        label_20->setObjectName("label_20");

        horizontalLayout_14->addWidget(label_20);

        VO1_tryb = new QLabel(widget_22);
        VO1_tryb->setObjectName("VO1_tryb");

        horizontalLayout_14->addWidget(VO1_tryb);


        verticalLayout_14->addWidget(widget_22);


        verticalLayout_6->addWidget(widget_10);


        horizontalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");
        widget_7->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_12 = new QVBoxLayout(widget_7);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(10, -1, -1, 12);
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName("widget_8");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy3);
        widget_8->setMaximumSize(QSize(16777215, 16777215));
        widget_8->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_15 = new QVBoxLayout(widget_8);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(-1, -1, -1, 11);
        label_2 = new QLabel(widget_8);
        label_2->setObjectName("label_2");

        verticalLayout_15->addWidget(label_2);

        widget_19 = new QWidget(widget_8);
        widget_19->setObjectName("widget_19");
        horizontalLayout_10 = new QHBoxLayout(widget_19);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_16 = new QLabel(widget_19);
        label_16->setObjectName("label_16");

        horizontalLayout_10->addWidget(label_16);

        PO2_status = new QLabel(widget_19);
        PO2_status->setObjectName("PO2_status");

        horizontalLayout_10->addWidget(PO2_status);


        verticalLayout_15->addWidget(widget_19);

        widget_20 = new QWidget(widget_8);
        widget_20->setObjectName("widget_20");
        horizontalLayout_11 = new QHBoxLayout(widget_20);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_17 = new QLabel(widget_20);
        label_17->setObjectName("label_17");

        horizontalLayout_11->addWidget(label_17);

        PO2_tryb = new QLabel(widget_20);
        PO2_tryb->setObjectName("PO2_tryb");

        horizontalLayout_11->addWidget(PO2_tryb);


        verticalLayout_15->addWidget(widget_20);

        widget_21 = new QWidget(widget_8);
        widget_21->setObjectName("widget_21");
        horizontalLayout_12 = new QHBoxLayout(widget_21);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_18 = new QLabel(widget_21);
        label_18->setObjectName("label_18");

        horizontalLayout_12->addWidget(label_18);

        PO2_speed = new QLabel(widget_21);
        PO2_speed->setObjectName("PO2_speed");

        horizontalLayout_12->addWidget(PO2_speed);


        verticalLayout_15->addWidget(widget_21);


        verticalLayout_12->addWidget(widget_8);

        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName("widget_9");
        widget_9->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_16 = new QVBoxLayout(widget_9);
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_4 = new QLabel(widget_9);
        label_4->setObjectName("label_4");

        verticalLayout_16->addWidget(label_4);

        widget_25 = new QWidget(widget_9);
        widget_25->setObjectName("widget_25");
        horizontalLayout_15 = new QHBoxLayout(widget_25);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_21 = new QLabel(widget_25);
        label_21->setObjectName("label_21");

        horizontalLayout_15->addWidget(label_21);

        VO2_status = new QLabel(widget_25);
        VO2_status->setObjectName("VO2_status");

        horizontalLayout_15->addWidget(VO2_status);


        verticalLayout_16->addWidget(widget_25);

        widget_24 = new QWidget(widget_9);
        widget_24->setObjectName("widget_24");
        horizontalLayout_16 = new QHBoxLayout(widget_24);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_22 = new QLabel(widget_24);
        label_22->setObjectName("label_22");

        horizontalLayout_16->addWidget(label_22);

        VO2_tryb = new QLabel(widget_24);
        VO2_tryb->setObjectName("VO2_tryb");

        horizontalLayout_16->addWidget(VO2_tryb);


        verticalLayout_16->addWidget(widget_24);


        verticalLayout_12->addWidget(widget_9);


        horizontalLayout_2->addWidget(widget_7);


        horizontalLayout_17->addWidget(widget);

        MainPasek->addWidget(DevicesPage);
        ConnectioError = new QWidget();
        ConnectioError->setObjectName("ConnectioError");
        horizontalLayout_6 = new QHBoxLayout(ConnectioError);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        widget_15 = new QWidget(ConnectioError);
        widget_15->setObjectName("widget_15");
        label_12 = new QLabel(widget_15);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(110, 120, 501, 81));
        label_12->setStyleSheet(QString::fromUtf8("color: red;"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12->setWordWrap(false);

        horizontalLayout_6->addWidget(widget_15);

        MainPasek->addWidget(ConnectioError);
        ProcessesPage = new QWidget();
        ProcessesPage->setObjectName("ProcessesPage");
        horizontalLayout_3 = new QHBoxLayout(ProcessesPage);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_3 = new QWidget(ProcessesPage);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border: 3px solid #3D5F74;\n"
"	background-color: #3D5F74;\n"
"	color: white;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget_13 = new QWidget(widget_3);
        widget_13->setObjectName("widget_13");
        horizontalLayout_5 = new QHBoxLayout(widget_13);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget_12 = new QWidget(widget_13);
        widget_12->setObjectName("widget_12");
        verticalLayout_9 = new QVBoxLayout(widget_12);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_8 = new QLabel(widget_12);
        label_8->setObjectName("label_8");

        verticalLayout_9->addWidget(label_8);

        label_10 = new QLabel(widget_12);
        label_10->setObjectName("label_10");

        verticalLayout_9->addWidget(label_10);


        horizontalLayout_5->addWidget(widget_12);

        widget_14 = new QWidget(widget_13);
        widget_14->setObjectName("widget_14");
        label_11 = new QLabel(widget_14);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 20, 121, 20));

        horizontalLayout_5->addWidget(widget_14);


        horizontalLayout_4->addWidget(widget_13);


        horizontalLayout_3->addWidget(widget_3);

        MainPasek->addWidget(ProcessesPage);
        GraphicsPage = new QWidget();
        GraphicsPage->setObjectName("GraphicsPage");
        verticalLayout_11 = new QVBoxLayout(GraphicsPage);
        verticalLayout_11->setObjectName("verticalLayout_11");
        widget_5 = new QWidget(GraphicsPage);
        widget_5->setObjectName("widget_5");

        verticalLayout_11->addWidget(widget_5);

        MainPasek->addWidget(GraphicsPage);
        SettingsPage = new QWidget();
        SettingsPage->setObjectName("SettingsPage");
        verticalLayout_8 = new QVBoxLayout(SettingsPage);
        verticalLayout_8->setObjectName("verticalLayout_8");
        widget_2 = new QWidget(SettingsPage);
        widget_2->setObjectName("widget_2");
        verticalLayout_17 = new QVBoxLayout(widget_2);
        verticalLayout_17->setSpacing(7);
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");

        verticalLayout_17->addWidget(label_6);

        radioButton = new QRadioButton(widget_2);
        radioButton->setObjectName("radioButton");

        verticalLayout_17->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget_2);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout_17->addWidget(radioButton_2);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setMargin(0);

        verticalLayout_17->addWidget(label_7);

        horizontalSlider = new QSlider(widget_2);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(20);

        verticalLayout_17->addWidget(horizontalSlider, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_2);


        verticalLayout_8->addWidget(widget_2);

        MainPasek->addWidget(SettingsPage);

        horizontalLayout->addWidget(MainPasek);

        Sterownik->setCentralWidget(centralwidget);

        retranslateUi(Sterownik);

        MainPasek->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Sterownik);
    } // setupUi

    void retranslateUi(QMainWindow *Sterownik)
    {
        Sterownik->setWindowTitle(QCoreApplication::translate("Sterownik", "SGui", nullptr));
        label_5->setText(QCoreApplication::translate("Sterownik", "Menu", nullptr));
        pushButton->setText(QCoreApplication::translate("Sterownik", "Urz\304\205dzenia", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Sterownik", "Procesy", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Sterownik", "Grafiki", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Sterownik", "Ustawienia", nullptr));
        label_9->setText(QCoreApplication::translate("Sterownik", "Aby zacz\304\205\304\207 korzytsa\304\207 z programu wybierz interesuj\304\205c\304\205 ci\304\231 opcje z paska po lewej", nullptr));
        label->setText(QCoreApplication::translate("Sterownik", "PO1", nullptr));
        label_15->setText(QCoreApplication::translate("Sterownik", "Status:", nullptr));
        PO1_status->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_14->setText(QCoreApplication::translate("Sterownik", "Tryb:", nullptr));
        PO1_tryb->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_13->setText(QCoreApplication::translate("Sterownik", "Pr\304\231dko\305\233\304\207:", nullptr));
        PO1_speed->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_3->setText(QCoreApplication::translate("Sterownik", "VO1", nullptr));
        label_19->setText(QCoreApplication::translate("Sterownik", "Status:", nullptr));
        VO1_status->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_20->setText(QCoreApplication::translate("Sterownik", "Tryb:", nullptr));
        VO1_tryb->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_2->setText(QCoreApplication::translate("Sterownik", "PO2", nullptr));
        label_16->setText(QCoreApplication::translate("Sterownik", "Status:", nullptr));
        PO2_status->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_17->setText(QCoreApplication::translate("Sterownik", "Tryb:", nullptr));
        PO2_tryb->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_18->setText(QCoreApplication::translate("Sterownik", "Pr\304\231dko\305\233\304\207:", nullptr));
        PO2_speed->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_4->setText(QCoreApplication::translate("Sterownik", "VO2", nullptr));
        label_21->setText(QCoreApplication::translate("Sterownik", "Status:", nullptr));
        VO2_status->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_22->setText(QCoreApplication::translate("Sterownik", "Tryb:", nullptr));
        VO2_tryb->setText(QCoreApplication::translate("Sterownik", "00", nullptr));
        label_12->setText(QCoreApplication::translate("Sterownik", "B\305\202\304\205d:\n"
"Nie mo\305\274na po\305\202\304\205czy\304\207 si\304\231 z sterownikiem", nullptr));
        label_8->setText(QCoreApplication::translate("Sterownik", "Nape\305\202nianie", nullptr));
        label_10->setText(QCoreApplication::translate("Sterownik", "Opr\303\263znianie", nullptr));
        label_11->setText(QCoreApplication::translate("Sterownik", "Poziom zbiornika", nullptr));
        label_6->setText(QCoreApplication::translate("Sterownik", "Motyw", nullptr));
        radioButton->setText(QCoreApplication::translate("Sterownik", "Jasny", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Sterownik", "Ciemny", nullptr));
        label_7->setText(QCoreApplication::translate("Sterownik", "Rozmiar czcionki", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sterownik: public Ui_Sterownik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
