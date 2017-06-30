#ifndef ICONBUTTON_H
#define ICONBUTTON_H

#include <QPushButton>

class IconButton : public QPushButton
{
    Q_OBJECT

public:
    IconButton(const QIcon &icon, const QString &text, QWidget *parent = 0);
    IconButton(const QString &text, QWidget *parent = 0);
    IconButton(QWidget *parent = 0);

protected:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);

private:
    QIcon m_savedIcon;
};

#endif // ICONBUTTON_H
