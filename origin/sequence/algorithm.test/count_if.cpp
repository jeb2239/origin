// Copyright (c) 2008-2014 Andrew Sutton
//
// This file is distributed under the MIT License. See the accompanying file
// LICENSE.txt or http://www.opensource.org/licenses/mit-license.php for terms
// and conditions.

#include <cassert>

#include <origin/sequence/algorithm.hpp>

bool pos(int n) { return n > 0; }

int main() {
  int a[3] { 1, 2, 3 };
  assert(origin::count_if(a, a + 3, pos, 0) == 3);
  assert(origin::count_if(a, a + 3, pos) == 3);
  assert(origin::count_if(a, pos, 0) == 3);
  assert(origin::count_if(a, pos) == 3);
  assert(origin::count_if({1, 2, 3}, pos, 0) == 3);
  assert(origin::count_if({1, 2, 3}, pos) == 3);
}
