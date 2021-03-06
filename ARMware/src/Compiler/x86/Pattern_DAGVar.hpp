// ARMware - an ARM emulator
// Copyright (C) <2007>  Wei Hu <wei.hu.tw@gmail.com>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef Pattern_DAGVar_hpp
#define Pattern_DAGVar_hpp

#if ENABLE_DYNAMIC_TRANSLATOR

namespace ARMware
{
  namespace Pattern_DAGVar
  {
    inline void
    emit_lir_code(BasicBlock * const /* curr_bb */, DAGNode * const
#ifndef NDEBUG
                  node
#endif
                  )
    {
      assert((DAG_VAR_TEMP == node->kind()) ||
             (DAG_VAR_GLOBAL == node->kind()) ||
             (DAG_VAR_CONST == node->kind()));
      
      assert(0 == (node->in_flags() | node->out_flags()));
    }
  }
}

#endif

#endif
