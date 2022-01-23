// Copyright (c) 2021-2022 The Bitcoin DX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINDX_UTIL_UI_CHANGE_TYPE_H
#define BITCOINDX_UTIL_UI_CHANGE_TYPE_H

/** General change type (added, updated, removed). */
enum ChangeType {
    CT_NEW,
    CT_UPDATED,
    CT_DELETED
};

#endif // BITCOINDX_UTIL_UI_CHANGE_TYPE_H
