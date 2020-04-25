<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * Bar
 */
interface BarAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e);
   */
  public function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b, ?Foo $d, int $e): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e);
   */
  public function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b, ?Foo $d, int $e): string;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e);
   */
  public function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b, ?Foo $d, int $e): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Bar
 */
trait BarClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b, ?Foo $d, int $e): int {
    $currentseqid = $this->getNextSequenceID();
    $args = new Bar_baz_args(
      $a,
      Vec\map($b, 
        $_val0 ==> dict($_val0)
      ),
      $d,
      $e,
    );
    try {
      $this->eventHandler_->preSend('baz', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'baz', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'baz', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('baz', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('baz', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('baz', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('baz', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('baz', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_baz(?int $expectedsequenceid = null): string {
    try {
      $this->eventHandler_->preRecv('baz', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'Bar_baz_result', $this->input_->isStrictRead());
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'Bar_baz_result');
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = new Bar_baz_result();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("baz failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('baz', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('baz', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('baz', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('baz', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('baz', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("baz failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('baz', $expectedsequenceid, $x);
    throw $x;
  }

}

class BarAsyncClient extends \ThriftClientBase implements BarAsyncIf {
  use BarClientBase;

  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e);
   */
  public async function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b, ?Foo $d, int $e): Awaitable<string> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $d, $e);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is TMemoryBuffer && $in_transport is TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(RpcOptionsTemp::get(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_baz($currentseqid);
  }

}

class BarClient extends \ThriftClientBase implements BarClientIf {
  use BarClientBase;

  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e);
   */
  public async function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b, ?Foo $d, int $e): Awaitable<string> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $d, $e);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is TMemoryBuffer && $in_transport is TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(RpcOptionsTemp::get(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_baz($currentseqid);
  }

  /* send and recv functions */
  public function send_baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b, ?Foo $d, int $e): int {
    return $this->sendImpl_baz($a, $b, $d, $e);
  }
  public function recv_baz(?int $expectedsequenceid = null): string {
    return $this->recvImpl_baz($expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class Bar_baz_args implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::SET,
      'etype' => \TType::I32,
      'elem' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'harray',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::I32,
        'vtype' => \TType::SET,
        'key' => shape(
          'type' => \TType::I32,
        ),
        'val' => shape(
          'type' => \TType::SET,
          'etype' => \TType::STRING,
          'elem' => shape(
            'type' => \TType::STRING,
          ),
          'format' => 'harray',
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    3 => shape(
      'var' => 'd',
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
    4 => shape(
      'var' => 'e',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
    'd' => 3,
    'e' => 4,
  ];
  const type TShape = shape(
    'a' => keyset<int>,
    'b' => vec<dict<int, keyset<string>>>,
    ?'d' => ?Foo::TShape,
    'e' => int,
  );
  const int STRUCTURAL_ID = 943524499189860425;
  public keyset<int> $a;
  public vec<dict<int, keyset<string>>> $b;
  public ?Foo $d;
  public int $e;

  <<__Rx>>
  public function __construct(?keyset<int> $a = null, ?vec<dict<int, keyset<string>>> $b = null, ?Foo $d = null, ?int $e = null  ) {
    if ($a === null) {
      $this->a = keyset[];
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = vec[];
    } else {
      $this->b = $b;
    }
    $this->d = $d;
    if ($e === null) {
      $this->e = 4;
    } else {
      $this->e = $e;
    }
  }

  public function getName(): string {
    return 'Bar_baz_args';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    $me->a = $shape['a'];
    $me->b = $shape['b'];
    if (Shapes::idx($shape, 'd') !== null) {
      $me->d = Foo::__fromShape($shape['d']);
    }
    $me->e = $shape['e'];
    return $me;
  }

  <<__Rx, __ProvenanceSkipFrame>>
  public function __toShape(): self::TShape {
    return shape(
      'a' => $this->a,
      'b' => $this->b,
      'd' => $this->d?->__toShape(),
      'e' => $this->e,
    );
  }
}

class Bar_baz_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];
  const int STRUCTURAL_ID = 1365128170602685579;
  public ?string $success;

  <<__Rx>>
  public function __construct(?string $success = null  ) {
  }

  public function getName(): string {
    return 'Bar_baz_result';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
}
