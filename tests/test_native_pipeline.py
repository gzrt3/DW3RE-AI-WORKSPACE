import sys
import unittest
import tempfile
from unittest.mock import patch
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native_pipeline import classify, sync_advisers


class PipelineTests(unittest.TestCase):
    def test_actual_failure_packet(self):
        text='[IOP] unhandled import ioman:31 version=0x104 pc=0x29040\n[guest-branch:missing-target] kind=DirectJump source=0x1b0308 target=0x1b0308 pc=0x1b0308'
        r=classify({'input_integrity':'MATCH','status':'PROCESS_FAILED'},text)
        self.assertEqual(r['work'][0]['pc'],0x1b0308)
        self.assertEqual(r['work'][1]['ordinal'],31)
        self.assertEqual(r['work'][1]['version'],0x104)
        self.assertFalse(r['game_complete'])

    def test_changed_inputs_block_derived_repairs(self):
        self.assertEqual(classify({'input_integrity':'CHANGED'},'')['state'],'INPUT_INTEGRITY_BLOCKED')

    def test_exit_and_timeout_never_certify_game(self):
        for status in ('PROCESS_EXITED','TIMEOUT','PROCESS_FAILED','LAUNCH_FAILED'):
            r=classify({'input_integrity':'MATCH','status':status},'')
            self.assertFalse(r['game_complete'])
            self.assertEqual(r['work'][0]['kind'],'inspect_native_observation')

    def test_deduplicates_import_and_uses_last_missing_pc(self):
        text=('unhandled import ioman:31 version=0x104 pc=0x29040\n'*2+
              '[guest-branch:missing-target] target=0x1000\n[guest-branch:missing-target] target=0x2000')
        r=classify({'input_integrity':'MATCH'},text)
        self.assertEqual(len(r['work']),2)
        self.assertEqual(r['work'][0]['pc'],0x2000)

    def test_adviser_failure_is_recorded_and_other_adviser_continues(self):
        with tempfile.TemporaryDirectory() as directory:
            with patch('native_pipeline.copilot_bridge.collect', side_effect=[ValueError('changed'), [], []]), \
                 patch('native_pipeline.copilot_bridge.enqueue', return_value='bounded-review'):
                result=sync_advisers(Path(directory), 'test')
            self.assertEqual(result['github_copilot']['state'],'BRIDGE_REVIEW_REQUIRED')
            self.assertEqual(result['microsoft_copilot_ui']['state'],'SYNCHRONIZED')
            self.assertFalse(result['microsoft_copilot_ui']['model_invoked_by_runner'])
            self.assertFalse(result['microsoft_copilot_ui']['code_applied'])
            self.assertEqual(result['chatgpt_ui']['state'],'SYNCHRONIZED')
            self.assertFalse(result['chatgpt_ui']['model_invoked_by_runner'])
            self.assertFalse(result['chatgpt_ui']['code_applied'])
            self.assertTrue((Path(directory)/'advisers-test.json').is_file())

    def test_chatgpt_unavailable_does_not_suppress_existing_advisers(self):
        with tempfile.TemporaryDirectory() as directory:
            with patch('native_pipeline.copilot_bridge.collect', side_effect=[[], [], OSError('unavailable')]), \
                 patch('native_pipeline.copilot_bridge.enqueue', return_value='bounded-review'):
                result=sync_advisers(Path(directory), 'chatgpt-unavailable')
            self.assertEqual(result['github_copilot']['state'],'SYNCHRONIZED')
            self.assertEqual(result['microsoft_copilot_ui']['state'],'SYNCHRONIZED')
            self.assertEqual(result['chatgpt_ui']['state'],'BRIDGE_REVIEW_REQUIRED')
            self.assertFalse(result['chatgpt_ui']['code_applied'])


if __name__=='__main__':unittest.main()
