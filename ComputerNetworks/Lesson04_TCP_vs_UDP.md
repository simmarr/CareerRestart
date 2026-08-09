# TCP vs UDP

## TCP

TCP stands for Transmission Control Protocol.

- Connection-oriented
- Reliable delivery
- Maintains ordered delivery of data
- Lost data can be retransmitted
- More overhead than UDP

## UDP

UDP stands for User Datagram Protocol.

- Connectionless
- Does not guarantee delivery
- Does not guarantee ordering
- No built-in retransmission of lost datagrams
- Lower overhead
- Useful when low latency is important

## TCP vs UDP

TCP prioritizes reliability and ordered delivery.

UDP prioritizes lower overhead and low latency, but does not itself
guarantee delivery or ordering.

## When Should I Use TCP?

When reliable and ordered delivery is important.

Examples:
- File downloads
- Banking-related communication

## When Should I Use UDP?

When low latency is important and some data loss can be tolerated.

Examples:
- Live voice/video
- Real-time game updates

## Interview Takeaway

TCP:
"Reliability and ordering matter."

UDP:
"Low latency matters more than guaranteed delivery."

Important:
Out-of-order data and lost data are different problems.
UDP datagrams may arrive out of order, arrive late, or never arrive.