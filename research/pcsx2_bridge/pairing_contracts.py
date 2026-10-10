import copy
import unittest
from pairing import validate_runs


def runs():
    capture={'schema':1,'sha256':'a'*64,'vsync_events':4,'last_event_kind':1,'packet_csr_field_mismatches':0}
    base={'schema':1,'loops':2,'upscale':1,'exit_code':0,'timed_out':False,'capture':capture,'blending_accuracy':'maximum'}
    reference=dict(base,role='reference',renderer='sw')
    bridge=copy.deepcopy(dict(base,role='direct',renderer='vulkan',replay={'loops':'2','vsync_events':'4',
        'last_event_kind':'1','packet_csr_field_mismatches':'0','missing_snapshots':'0','presented_fields_last_loop':'4'}))
    return reference,bridge


class PairingContracts(unittest.TestCase):
    def test_renderer_and_blending_contract(self):
        for role,key,value in [('reference','renderer','unknown'),('direct','renderer','sw'),
                               ('reference','blending_accuracy','basic'),('direct','blending_accuracy',None)]:
            reference,bridge=runs()
            (reference if role=='reference' else bridge)[key]=value
            with self.subTest(role=role,key=key,value=value):
                with self.assertRaises(ValueError):validate_runs(reference,bridge)

    def test_same_backend_diagnostic(self):
        reference,bridge=runs();reference['renderer']='vulkan'
        validate_runs(reference,bridge)

    def test_documented_pairing(self):
        validate_runs(*runs())

    def test_reject_counterexamples(self):
        # Each changes one documented prerequisite, before any image is opened.
        cases=[('loops',1),('upscale',2),('exit_code',1),('timed_out',True),('role','reference')]
        for key,value in cases:
            with self.subTest(key=key):
                reference,bridge=runs();bridge[key]=value
                with self.assertRaises(ValueError):validate_runs(reference,bridge)

    def test_different_capture(self):
        reference,bridge=runs();bridge['capture']['sha256']='b'*64
        with self.assertRaisesRegex(ValueError,'identities disagree'):validate_runs(reference,bridge)

    def test_invalid_temporal_order(self):
        for key,value in [('vsync_events',3),('last_event_kind',0),('packet_csr_field_mismatches',1),('sha256','')]:
            reference,bridge=runs();bridge['capture'][key]=value
            with self.subTest(key=key):
                with self.assertRaises(ValueError):validate_runs(reference,bridge)

    def test_missing_output(self):
        reference,bridge=runs();bridge['replay']['missing_snapshots']='1'
        with self.assertRaisesRegex(ValueError,'preconditions'):validate_runs(reference,bridge)


if __name__=='__main__':unittest.main()
