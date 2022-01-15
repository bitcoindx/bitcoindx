// Copyright (c) 2011-2020 The BitcoinDX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINDX_QT_BITCOINDXADDRESSVALIDATOR_H
#define BITCOINDX_QT_BITCOINDXADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitcoinDXAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinDXAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** BitcoinDX address widget validator, checks for a valid bitcoindx address.
 */
class BitcoinDXAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinDXAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BITCOINDX_QT_BITCOINDXADDRESSVALIDATOR_H
