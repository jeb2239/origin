// Copyright (c) 2008-2013 Andrew Sutton
//
// This file is distributed under the MIT License. See the accompanying file
// LICENSE.txt or http://www.opensource.org/licenses/mit-license.php for terms
// and conditions.

#include <cassert>
#include <vector>

#include <origin/range/algorithm.hpp>

int main() 
{
  int a1[3] { 1, 1, 2 };
  int a2[3] { 1, 1, 2 };
  std::equal_to<int> eq;
  assert(origin::equal(a1, a2));
  assert(origin::equal(a1, a2, eq));
}
