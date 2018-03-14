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

#pragma once

#include <QFrame>

namespace Ui {
  class ConnectionOptionsFrame;
}

namespace WalletGUI
{

enum class NodeType
{
    UNKNOWN, IN_PROCESS, RPC
};

class ConnectionOptionsFrame : public QFrame
{
    Q_OBJECT
    Q_DISABLE_COPY(ConnectionOptionsFrame)

public:
    explicit ConnectionOptionsFrame(QWidget* parent = nullptr);
    ~ConnectionOptionsFrame();

    void load();
    void save();
    bool canAccept() const;

private:
    QScopedPointer<Ui::ConnectionOptionsFrame> m_ui;

    Q_SLOT bool remoteHostNameChanged(const QString& host);
    Q_SLOT bool walletFileNameChanged(const QString& wallet);
    Q_SLOT void connectionButtonClicked(int buttonId);
    Q_SLOT void showOpenWalletFileDialog();
    Q_SLOT void showCreateWalletFileDialog();

Q_SIGNALS:
    void showRestartWarningSignal(bool show);
    void disableAcceptButtonSignal(bool disable);
};

}
