/**
  *     ButtomWindow:
  *     centralWidget: centralLayout:
  *     |----------------------------------------|
  *     |       mainTitle       | mainLogo(Title)|
  *     |-----------------------|----------------|
  *     |                       |                |
  *     |                       |                |
  *     |                       |                |
  *     |       mainLayout      |  buttonLayout  |
  *     |      (redefined by    | (redefined by  |
  *     |       other window)   |  other window) |
  *     |                       |                |
  *     |                       |                |
  *     |-----------------------|----------------|
  *
  *     centralWidget is central widget of ButtomWindow,
  *     and it is also the central widget of other window
  *
  **************************************************/

#ifndef BUTTOMWINDOW_H
#define BUTTOMWINDOW_H

#include <QMainWindow>
#include <types.h>

class QMainWindow;
class QGridLayout;
class QLabel;
class QVBoxLayout;
class QWidget;

/// window length and width is compatible with the Display Screen
class ButtomWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ButtomWindow(QWidget *parent = 0);
    ~ButtomWindow();

private:
    QGridLayout *centralLayout;
    QWidget *centralWidget;
    static const u32_t WindowLengtH=800;
    static const u32_t WindowWidtH=600;

    void setupUi(ButtomWindow *const);
    void retranslateUi(ButtomWindow *const);

protected:
    QGridLayout *mainLayout;
    QLabel *mainTitle;
    QVBoxLayout *buttonLayout;
    //QPicture *mainLogo;
    QLabel *mainLogoTitle;	// will be replaced by interfaceLogo later

    virtual void setupMainLayout(void) = 0;
    virtual void setupButtonLayout(void) = 0;

signals:

public slots:

};

#endif // BUTTOMWINDOW_H
