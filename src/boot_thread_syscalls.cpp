#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

// Original XL ELF wrappers omitted entirely from the translation catalog.
// Each is addiu v1,zero,id; syscall0; jr ra; nop. The scheduler may transfer
// control during the syscall, so the JR address is registered independently.
void fate_thread_syscall_wrapper(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    const uint32_t start=ctx->pc;
    const uint32_t opcode=READ32(start);
    SET_GPR_S32(ctx,3,static_cast<int16_t>(opcode&0xffffu));
    ctx->pc=start+8u;
    runtime->handleSyscall(rdram,ctx,0u);
    ctx->pc=start+12u;ctx->in_delay_slot=true;ctx->branch_pc=start+8u;
    const uint32_t target=GPR_U32(ctx,31);
    ctx->in_delay_slot=false;ctx->pc=target;
}
