#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import six
from thrift.util.Recursive import fix_spec
from thrift.Thrift import *
from thrift.protocol.TProtocol import TProtocolException

from json import loads
import sys
if sys.version_info[0] >= 3:
  long = int

import module.MyServicePrioParent
from .ttypes import *
from thrift.Thrift import TProcessor
import pprint
import warnings
from thrift import Thrift
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.protocol import TCompactProtocol
from thrift.protocol import THeaderProtocol
fastproto = None
if not '__pypy__' in sys.builtin_module_names:
  try:
    from thrift.protocol import fastproto
  except ImportError:
    pass

all_structs = []
UTF8STRINGS = bool(0) or sys.version_info.major >= 3

from thrift.util.Decorators import (
  future_process_main,
  future_process_method,
  process_main as thrift_process_main,
  process_method as thrift_process_method,
  should_run_on_thread,
  write_results_after_future,
  write_results_exception_callback,
  write_results_success_callback,
)

class Iface(module.MyServicePrioParent.Iface):
  def pang(self, ):
    pass


class ContextIface(module.MyServicePrioParent.ContextIface):
  def pang(self, handler_ctx, ):
    pass


# HELPER FUNCTIONS AND STRUCTURES

class pang_args:

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('pang_args')
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    set_cls = kwargs.pop('custom_set_cls', set)
    dict_cls = kwargs.pop('custom_dict_cls', dict)
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    json_obj = json
    if is_text:
      json_obj = loads(json)

  def __repr__(self):
    L = []
    padding = ' ' * 4
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  if not six.PY2:
    __hash__ = object.__hash__

all_structs.append(pang_args)
pang_args.thrift_spec = (
)

pang_args.thrift_struct_annotations = {
}
pang_args.thrift_field_annotations = {
}

class pang_result:

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('pang_result')
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    set_cls = kwargs.pop('custom_set_cls', set)
    dict_cls = kwargs.pop('custom_dict_cls', dict)
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    json_obj = json
    if is_text:
      json_obj = loads(json)

  def __repr__(self):
    L = []
    padding = ' ' * 4
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  if not six.PY2:
    __hash__ = object.__hash__

all_structs.append(pang_result)
pang_result.thrift_spec = (
)

pang_result.thrift_struct_annotations = {
}
pang_result.thrift_field_annotations = {
}

class Client(module.MyServicePrioParent.Client, Iface):
  def __enter__(self):
    return self

  def __exit__(self, type, value, tb):
    self._iprot.trans.close()
    if self._iprot is not self._oprot:
      self._oprot.trans.close()

  def __init__(self, iprot, oprot=None):
    module.MyServicePrioParent.Client.__init__(self, iprot, oprot)

  def pang(self, ):
    self.send_pang()
    self.recv_pang()

  def send_pang(self, ):
    self._oprot.writeMessageBegin('pang', TMessageType.CALL, self._seqid)
    args = pang_args()
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_pang(self, ):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = pang_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    return


class Processor(module.MyServicePrioParent.Processor, Iface, TProcessor):
  _onewayMethods = ()

  def __init__(self, handler):
    module.MyServicePrioParent.Processor.__init__(self, handler)
    self._processMap["pang"] = Processor.process_pang
    self._priorityMap["pang"] = TPriority.BEST_EFFORT

  def onewayMethods(self):
    l = []
    l.extend(module.MyServicePrioParent.Processor.onewayMethods(self))
    l.extend(Processor._onewayMethods)
    return tuple(l)

  @thrift_process_main()
  def process(self,): pass

  @thrift_process_method(pang_args, oneway=False)
  def process_pang(self, args, handler_ctx):
    result = pang_result()
    try:
      self._handler.pang()
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'pang', ex)
      result = Thrift.TApplicationException(message=str(ex))
    return result

Iface._processor_type = Processor

class ContextProcessor(module.MyServicePrioParent.ContextProcessor, ContextIface, TProcessor):
  _onewayMethods = ()

  def __init__(self, handler):
    module.MyServicePrioParent.ContextProcessor.__init__(self, handler)
    self._processMap["pang"] = ContextProcessor.process_pang
    self._priorityMap["pang"] = TPriority.BEST_EFFORT

  def onewayMethods(self):
    l = []
    l.extend(module.MyServicePrioParent.ContextProcessor.onewayMethods(self))
    l.extend(ContextProcessor._onewayMethods)
    return tuple(l)

  @thrift_process_main()
  def process(self,): pass

  @thrift_process_method(pang_args, oneway=False)
  def process_pang(self, args, handler_ctx):
    result = pang_result()
    try:
      self._handler.pang(handler_ctx)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'pang', ex)
      result = Thrift.TApplicationException(message=str(ex))
    return result

ContextIface._processor_type = ContextProcessor

fix_spec(all_structs)
del all_structs

