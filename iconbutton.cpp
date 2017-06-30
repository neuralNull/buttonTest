#include "iconbutton.h"
#include <QPainter>
#include <QDebug>

IconButton::IconButton(const QIcon &icon, const QString &text, QWidget *parent) :
    QPushButton(icon, text, parent)
{
}

IconButton::IconButton(const QString &text, QWidget *parent) :
    IconButton(QIcon(), text, parent)
{
}

IconButton::IconButton(QWidget *parent) :
    IconButton(QIcon(), QString(), parent)
{
}

void IconButton::enterEvent(QEvent *event)
{
    m_savedIcon = icon();

    QPixmap modifiedPixmap = m_savedIcon.pixmap(iconSize());
    QPainter painter(&modifiedPixmap);

    painter.setCompositionMode(QPainter::CompositionMode_SourceIn);
    painter.fillRect(modifiedPixmap.rect(), Qt::green);

    QPushButton::setIcon(QIcon(modifiedPixmap));
    QPushButton::enterEvent(event);
}

void IconButton::leaveEvent(QEvent *event)
{
    QPushButton::setIcon(m_savedIcon);
    QPushButton::leaveEvent(event);
}
