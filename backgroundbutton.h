#ifndef BACKGROUNDBUTTON_H
#define BACKGROUNDBUTTON_H

#include <QPushButton>

class BackgroundButton : public QPushButton
{
    Q_OBJECT

public:
    BackgroundButton(const QIcon &icon, const QString &text, QWidget *parent = 0);
    BackgroundButton(const QString &text, QWidget *parent = 0);
    BackgroundButton(QWidget *parent = 0);
};

#endif // BACKGROUNDBUTTON_H
