// Copyright (c) 2017-2020 The BitcoinDX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINDX_QT_TEST_WALLETTESTS_H
#define BITCOINDX_QT_TEST_WALLETTESTS_H

#include <QObject>
#include <QTest>

namespace interfaces {
class Node;
} // namespace interfaces

class WalletTests : public QObject
{
 public:
    explicit WalletTests(interfaces::Node& node) : m_node(node) {}
    interfaces::Node& m_node;

    Q_OBJECT

private Q_SLOTS:
    void walletTests();
};

#endif // BITCOINDX_QT_TEST_WALLETTESTS_H
