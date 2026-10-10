// Scoped, numeric-only inspection; read-only project changes are discarded.
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.pcode.PcodeOp;
import java.util.*;
public class CallbackBoundaryReport extends GhidraScript {
  public void run() throws Exception {
    String[] args=getScriptArgs();
    if(args.length!=2) throw new IllegalArgumentException("expected_start_exclusive_end");
    Address start=toAddr(Long.parseUnsignedLong(args[0],16));
    Address end=toAddr(Long.parseUnsignedLong(args[1],16));
    if(end.subtract(start)<=0 || end.subtract(start)>256) throw new IllegalArgumentException("window_size");
    AddressSet body=new AddressSet(start,end.subtract(1));
    Function before=currentProgram.getFunctionManager().getFunctionContaining(start);
    println("CB:owner_at_entry="+(before==null?"NONE":before.getEntryPoint()));
    DisassembleCommand command=new DisassembleCommand(start,body,true);
    if(!command.applyTo(currentProgram,monitor)) throw new IllegalStateException("disassembly_failed");
    Listing listing=currentProgram.getListing();
    int count=0,stores=0,returns=0,delays=0,flowOutside=0;
    InstructionIterator it=listing.getInstructions(body,true);
    while(it.hasNext()) {
      Instruction ins=it.next();count++;
      int store=0;
      for(PcodeOp op:ins.getPcode()) if(op.getOpcode()==PcodeOp.STORE){stores++;store++;}
      if(ins.getFlowType().isTerminal()) returns++;
      delays+=ins.getDelaySlotDepth();
      Address[] flows=ins.getFlows();
      for(Address flow:flows) if(!body.contains(flow))flowOutside++;
      println("CB:instruction="+ins.getAddress()+",bytes="+ins.getLength()+",stores="+store+
        ",terminal="+ins.getFlowType().isTerminal()+",delay_depth="+ins.getDelaySlotDepth());
    }
    ReferenceIterator refs=currentProgram.getReferenceManager().getReferencesTo(start);
    int refCount=0;
    while(refs.hasNext()) {Reference ref=refs.next();refCount++;println("CB:reference="+ref.getFromAddress()+",type="+ref.getReferenceType());}
    println("CB:counts=instructions:"+count+",stores:"+stores+",terminals:"+returns+",delay_slots:"+delays+",outside_flows:"+flowOutside+",references:"+refCount);
    println("CB:next_instruction="+(listing.getInstructionAt(end)!=null));
    println("CB:report_complete=true");
  }
}
