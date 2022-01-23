// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2021-2022 The Bitcoin DX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINDX_WALLET_SALVAGE_H
#define BITCOINDX_WALLET_SALVAGE_H

#include <fs.h>
#include <streams.h>

struct bilingual_str;

bool RecoverDatabaseFile(const fs::path& file_path, bilingual_str& error, std::vector<bilingual_str>& warnings);

#endif // BITCOINDX_WALLET_SALVAGE_H
