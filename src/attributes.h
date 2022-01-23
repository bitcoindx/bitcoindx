// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2021-2022 The Bitcoin DX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINDX_ATTRIBUTES_H
#define BITCOINDX_ATTRIBUTES_H

#if defined(__clang__)
#  if __has_attribute(lifetimebound)
#    define LIFETIMEBOUND [[clang::lifetimebound]]
#  else
#    define LIFETIMEBOUND
#  endif
#else
#  define LIFETIMEBOUND
#endif

#endif // BITCOINDX_ATTRIBUTES_H
