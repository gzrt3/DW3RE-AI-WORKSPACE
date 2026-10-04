"""Conservation policy and additive grants, without inference or real accounting."""
import json
import sys
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import hybrid_supervisor as s
import hybrid_router as h
import codex_capacity


class ConservationTests(unittest.TestCase):
    def test_reserved_blocks_premium_but_runs_pool(self):
        with tempfile.TemporaryDirectory() as tmp,patch.object(s,'verify_legacy',return_value={}):
            calls=[]
            obj=s.Supervisor(Path(tmp)/'supervisor',{'pool':lambda *_: calls.append('pool') or {'validated':True}},min_free_bytes=0)
            obj.add('routine','pool',capacity='pool')
            obj.add('premium','premium',capacity='premium')
            with patch.object(obj,'seed'),patch.object(obj,'refresh_external'),patch.object(obj,'report',return_value={}),patch.object(codex_capacity,'observe') as observe:
                obj.run(max_operations=1,enable_codex=True)
            self.assertEqual(calls,['pool'])
            self.assertEqual(obj.state['codex']['state'],'PREMIUM_RESERVED')
            self.assertFalse(obj.state['enable_codex'])
            self.assertNotEqual(obj.state['tasks']['premium']['status'],'ACCEPTED')
            observe.assert_not_called()

    def test_additive_chunks_preserve_history_and_are_idempotent(self):
        with tempfile.TemporaryDirectory() as tmp:
            policy=json.loads(h.POLICY.read_text())
            policy['prices_per_million_tokens']['aws/us.amazon.nova-2-lite-v1:0']={'input':0,'output':0}
            router=h.Router(h.Journal(Path(tmp)),policy)
            for provider,total in [('azure',20),('aws',30),('gemini',20)]:
                for i in range(2):router.reserve(provider+str(i),provider,router.model(provider),'fixture',32)
                before=router.journal.events()
                for i in range(total//10):
                    for replay in range(2):router.authorize_window('conservation-'+provider+'-'+str(i),[provider],10)
                self.assertEqual(router.remaining_calls(provider),total)
                self.assertEqual(router.journal.events()[:len(before)],before)


if __name__=='__main__':unittest.main()
