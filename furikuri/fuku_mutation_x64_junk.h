#pragma once

//junk generation
void fuku_junk_generic(fuku_assambler& f_asm, fuku_code_holder& code_holder, linestorage::iterator lines_iter,
    bool unstable_stack, uint64_t eflags_changes, uint64_t regs_changes);