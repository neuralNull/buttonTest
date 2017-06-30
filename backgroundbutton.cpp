#include "backgroundbutton.h"

BackgroundButton::BackgroundButton(const QIcon &icon, const QString &text, QWidget *parent) :
    QPushButton(icon, text, parent)
{
    QPalette defaultPalette = palette();
    QPalette customPalette = palette();

    customPalette.setColor(QPalette::Button, Qt::green);
    connect(this, &BackgroundButton::pressed, [this, customPalette] {
        setPalette(customPalette);
    });
    connect(this, &BackgroundButton::released, [this, defaultPalette] {
        setPalette(defaultPalette);
    });
}

BackgroundButton::BackgroundButton(const QString &text, QWidget *parent) :
    BackgroundButton(QIcon(), text, parent)
{
}

BackgroundButton::BackgroundButton(QWidget *parent) :
    BackgroundButton(QIcon(), QString(), parent)
{
}
