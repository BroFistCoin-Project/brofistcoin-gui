// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#include "questiondialog.h"

#include "ui_questiondialog.h"

namespace WalletGUI
{

QuestionDialog::QuestionDialog(const QString& title, const QString& text, QWidget* parent)
    : QDialog(parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint))
    , ui(new Ui::QuestionDialog)
{
    ui->setupUi(this);
    setWindowTitle(title);
    ui->questionLabel->setText(text);
}

QuestionDialog::~QuestionDialog()
{}

}
