#include "mypasswordlineedit.h"

MyPasswordLineEdit::MyPasswordLineEdit(QWidget *parent):QLineEdit(parent)
{
    setEchoMode(QLineEdit::Password);
}
