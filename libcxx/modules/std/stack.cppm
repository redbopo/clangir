// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

module;
#include <stack>

export module std:stack;
export namespace std {
  // [stack], class template stack
  using std::stack;

  using std::operator==;
  using std::operator!=;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
#if 0 // P1614
  using std::operator<=>;
#endif

  using std::swap;
  using std::uses_allocator;
} // namespace std
